#include "list.h"
#include "calculator.h"
#include <cmath>
#include <string>

const double PI = 3.1415926535;
const double E = 2.7182818284;

using namespace std;

double calculateExpression(string infixString) {
	LinkedList<Token> postfixList = infixToPostfix(infixString);
	LinkedList<string> stack;
	for (size_t i = 0; i < postfixList.get_size(); i++) {
		if (postfixList.at(i)->data.type == NUMBER) stack.push_back(postfixList.at(i)->data.oper);
		else if (postfixList.at(i)->data.type == CONSTANT) {
			if (postfixList.at(i)->data.oper == "e") stack.push_back(to_string(E));
			else if (postfixList.at(i)->data.oper == "pi") stack.push_back(to_string(PI));
		}
		else if (postfixList.at(i)->data.type == FUNCTION) {
			string tempString = stack.get_top();
			stack.pop_back();
			if (postfixList.at(i)->data.oper == "cos") stack.push_back(to_string(cos(atof(tempString.c_str()))));
			else if (postfixList.at(i)->data.oper == "sin") stack.push_back(to_string(sin(atof(tempString.c_str()))));
			else if (postfixList.at(i)->data.oper == "tg") stack.push_back(to_string(tan(atof(tempString.c_str()))));
			else if (postfixList.at(i)->data.oper == "ctg") stack.push_back(to_string(1 / tan(atof(tempString.c_str()))));
			else if (postfixList.at(i)->data.oper == "lg") stack.push_back(to_string(log10(atof(tempString.c_str()))));
			else if (postfixList.at(i)->data.oper == "ln") stack.push_back(to_string(log(atof(tempString.c_str()))));
		}
		else if (postfixList.at(i)->data.type == BINARY_OPERATOR) {
			double operand1 = atof(stack.get_top().c_str());
			stack.pop_back();
			double operand2 = atof(stack.get_top().c_str());
			stack.pop_back();
			stack.push_back(to_string(calculate(postfixList.at(i)->data.oper, operand1, operand2)));
		}
	}
	return atof(stack.get_top().c_str());
}

LinkedList<Token> infixToPostfix(string infixString) {
	LinkedList<Token> infixList = stringToList(infixString);
	LinkedList<Token> postfixList;
	LinkedList<Token> stack;

	for (size_t i = 0; i < infixList.get_size(); i++) {
		if (infixList.at(i)->data.type == NUMBER || infixList.at(i)->data.type == CONSTANT) postfixList.push_back(infixList.at(i)->data);
		else if (infixList.at(i)->data.type == BINARY_OPERATOR || infixList.at(i)->data.type == FUNCTION) {
			while (stack.get_size() != 0 && infixList.at(i)->data.priority <= stack.get_top().priority) {
				postfixList.push_back(stack.get_top());
				stack.pop_back();
			}
			stack.push_back(infixList.at(i)->data);
		}
		else if (infixList.at(i)->data.type == OPEN_BRACKET) stack.push_back(infixList.at(i)->data);
		else if (infixList.at(i)->data.type == CLOSE_BRACKET) {
			if (stack.isEmpty()) throw ("incorrect input or something went wrong");
			Token temp = stack.get_top();
			stack.pop_back();
			while (temp.oper != "(") {
				if (stack.isEmpty()) throw ("incorrect input or something went wrong");
				postfixList.push_back(temp);
				temp = stack.get_top();
				stack.pop_back();
			}
		}
	}
	while (!stack.isEmpty()) {
		if (stack.get_top().oper == "(") throw ("incorrect input or something went wrong");
		postfixList.push_back(stack.get_top());
		stack.pop_back();
	}
	return postfixList;
}

LinkedList<Token> stringToList(string infixString) {
	LinkedList<Token> postfixList;
	string character = "";
	string tempString = "";
	Token currentElement = {"", -1, EMPTY};
	bool thereIsUnaryMinus = false;
	for (size_t i = 0; i < infixString.size(); i++) {
		character = infixString[i];
		bool isItUnaryMinusOrUnaryPlus = (currentElement.type == OPEN_BRACKET || currentElement.type == EMPTY || currentElement.type == BINARY_OPERATOR) && (character == "-" || character == "+") && tempString.empty();
		bool operatorIsStandingIncorrectly = (currentElement.type == OPEN_BRACKET || currentElement.type == EMPTY || currentElement.type == BINARY_OPERATOR) && (character == "*" || character == "/" || character == "^") && tempString.empty();
		if (character == " ") continue;
		if (defineType(character) == DIGIT)
			tempString += character;
		else if (isItUnaryMinusOrUnaryPlus) {
			if (character == "+") continue;
			else {
				if (thereIsUnaryMinus == false) thereIsUnaryMinus = true;
				else thereIsUnaryMinus = false;
				continue;
			}
		}
		else if (operatorIsStandingIncorrectly) { 
			throw ("incorrect input or something went wrong");
		}
		else if (defineType(character) == ERROR) { 
			if (defineType(infixString.substr(i, 2)) == FUNCTION) {
				currentElement = { infixString.substr(i, 2), 4, FUNCTION };
				postfixList.push_back(currentElement);
				i++;
			}
			else if (defineType(infixString.substr(i, 3)) == FUNCTION) {
				currentElement = { infixString.substr(i, 3), 4, FUNCTION };
				postfixList.push_back(currentElement);
				i += 2;
			}
			else if (defineType(infixString.substr(i, 2)) == CONSTANT) {
				currentElement = { infixString.substr(i, 2), -1, CONSTANT };
				postfixList.push_back(currentElement);
				i++;
			} 
			else throw ("incorrect input or something went wrong");
		}
		else {
			if (!tempString.empty()) {
				if (thereIsUnaryMinus) {
					tempString = '-' + tempString;
					thereIsUnaryMinus = false;
				}
				currentElement = { tempString, getPriority(tempString), NUMBER };
				postfixList.push_back(currentElement);
				tempString = "";
			}
			currentElement = { character, getPriority(character), defineType(character) };
			postfixList.push_back(currentElement);
		}

	}
	if (!tempString.empty()) {
		if (thereIsUnaryMinus) tempString = '-' + tempString;
		currentElement = { tempString, getPriority(tempString), NUMBER };
		postfixList.push_back(currentElement);
	}
	return postfixList;
}

TypeOfElement defineType(string oper) {
	if (oper == "(") return OPEN_BRACKET;
	if (oper == ")") return CLOSE_BRACKET;
	if (oper == "+" || oper == "-" || oper == "*" || oper == "/" || oper == "^") return BINARY_OPERATOR;
	if (oper == "0" || oper == "1" || oper == "2" || oper == "3" || oper == "4" || oper == "5" || oper == "6" || oper == "7" || oper == "8" || oper == "9" || oper == ".") return DIGIT;
	if (oper == "cos" || oper == "sin" || oper == "tg" || oper == "ctg" || oper == "lg" || oper == "ln") return FUNCTION;
	if (oper == "pi" || oper == "e") return CONSTANT;
	return ERROR;
}

int getPriority(string oper) {
	if (oper == "cos" || oper == "sin" || oper == "tg" || oper == "ctg" || oper == "lg" || oper == "ln") return 4;
	if (oper == "^") return 3;
	if (oper == "*" || oper == "/") return 2;
	if (oper == "+" || oper == "-") return 1;
	if (oper == "(" || oper == ")") return 0;
	return -1;
}

double calculate(string oper, double operand1, double operand2) {
	if (oper == "+") return operand2 + operand1;
	if (oper == "-") return operand2 - operand1;
	if (oper == "*") return operand2 * operand1;
	if (oper == "/") return operand2 / operand1;
	if (oper == "^") return pow(operand2, operand1);
}