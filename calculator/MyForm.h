#pragma once
#include "calculator.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Button^ button17;


	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(632, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(663, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 25);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(694, 150);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 25);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(632, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 25);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(663, 119);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 25);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(694, 119);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 25);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(632, 88);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 25);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(663, 88);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 25);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(694, 88);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 25);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(663, 181);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 25);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(104, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 10;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(694, 181);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(25, 25);
			this->button11->TabIndex = 11;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(725, 57);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(25, 25);
			this->button12->TabIndex = 12;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(725, 88);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(25, 25);
			this->button13->TabIndex = 13;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(725, 119);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(25, 25);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(725, 150);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(25, 25);
			this->button15->TabIndex = 15;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(632, 181);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(25, 25);
			this->button16->TabIndex = 16;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(725, 181);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(25, 25);
			this->button17->TabIndex = 18;
			this->button17->Text = L"^";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(694, 57);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(25, 25);
			this->button18->TabIndex = 21;
			this->button18->Text = L"⌫";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(632, 212);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(56, 25);
			this->button19->TabIndex = 22;
			this->button19->Text = L"cos";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(694, 212);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(56, 25);
			this->button20->TabIndex = 23;
			this->button20->Text = L"sin";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(632, 243);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(56, 25);
			this->button21->TabIndex = 24;
			this->button21->Text = L"tg";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(694, 243);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(56, 25);
			this->button22->TabIndex = 25;
			this->button22->Text = L"ctg";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(632, 57);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(25, 25);
			this->button23->TabIndex = 26;
			this->button23->Text = L"(";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(663, 57);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(25, 25);
			this->button24->TabIndex = 27;
			this->button24->Text = L")";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(632, 274);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(56, 25);
			this->button25->TabIndex = 28;
			this->button25->Text = L"lg";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(694, 274);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(56, 25);
			this->button26->TabIndex = 29;
			this->button26->Text = L"ln";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(632, 305);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(118, 25);
			this->button27->TabIndex = 30;
			this->button27->Text = L"Очистить";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(104, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"История";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(104, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 32;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(632, 336);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(118, 25);
			this->button28->TabIndex = 33;
			this->button28->Text = L"Очистить историю";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(756, 212);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(25, 25);
			this->button29->TabIndex = 34;
			this->button29->Text = L"pi";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(756, 243);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(25, 25);
			this->button30->TabIndex = 35;
			this->button30->Text = L"e";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 496);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "0";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "9";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += ".";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "/";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "*";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "-";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "+";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "^";
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "(";
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += ")";
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "cos(";
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "sin(";
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "tg(";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "ctg(";
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "lg(";
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "ln(";
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "pi";
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += "e";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = label1->Text->Substring(0, label1->Text->Length - 1);
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "";
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { 
		string tempString = msclr::interop::marshal_as<string>(label1->Text);
		label1->Text = msclr::interop::marshal_as<String^>(to_string(calculateExpression(tempString)));
		label3->Text = msclr::interop::marshal_as<String^>(tempString + " = ") + label1->Text + msclr::interop::marshal_as<String^>("\n") + label3->Text;
	}
};
}
