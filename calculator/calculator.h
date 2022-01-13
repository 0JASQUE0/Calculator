#pragma once
#include <iostream>
#include "list.h"

using namespace std;

enum TypeOfElement {
	NUMBER,
	DIGIT,
	BINARY_OPERATOR,
	FUNCTION,
	OPEN_BRACKET,
	CLOSE_BRACKET,
	CONSTANT,
	ERROR,
	EMPTY
};

struct Token
{
	string oper;
	int priority;
	TypeOfElement type;
};

double calculateExpression(string infixString);
LinkedList<Token> infixToPostfix(string infixString);
LinkedList<Token> stringToList(string infixString);
TypeOfElement defineType(string oper);
int getPriority(string oper);
double calculate(string oper, double operand1, double operand2);