//-------Author - IdeaFactory-------//

#pragma once
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include "operatorStack.h"
#include "ordered.h"
#include <msclr\marshal_cppstd.h>
#include <vector>
#include "MyForm1.h"

#define PI 3.14159265


vector<string> expressions;
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;
	using System::Runtime::InteropServices::Marshal;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		bool onedecimal = false;
		bool onenum = false;
		float firstNumF, upperlimit, lowerlimit;
		int option = -1, intoption = 0;
		bool isCompute = false;
		bool isError = false;
		bool integral = false;
		bool flag = false;

		bool bracket = false;
		bool expressionNumberStart = true;
		float memory;
	private: System::Windows::Forms::Button^  button34;
			 bool ismemory = false;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;





	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;

	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;

	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Label^  lb;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->lb = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 8);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(409, 38);
			this->label1->TabIndex = 1;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(291, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 34);
			this->button2->TabIndex = 0;
			this->button2->Text = L"6";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(291, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 34);
			this->button3->TabIndex = 0;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(251, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 34);
			this->button4->TabIndex = 0;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(251, 217);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 34);
			this->button5->TabIndex = 0;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(251, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 34);
			this->button6->TabIndex = 0;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(211, 177);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(34, 34);
			this->button7->TabIndex = 0;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(291, 137);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(34, 34);
			this->button8->TabIndex = 0;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(211, 216);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(34, 34);
			this->button9->TabIndex = 0;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(211, 257);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(74, 34);
			this->button10->TabIndex = 0;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(291, 257);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(34, 34);
			this->button11->TabIndex = 0;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(331, 177);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(34, 34);
			this->button12->TabIndex = 0;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(331, 137);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(34, 34);
			this->button13->TabIndex = 0;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(331, 217);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(34, 34);
			this->button14->TabIndex = 0;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(331, 257);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(34, 34);
			this->button15->TabIndex = 0;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(368, 137);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(40, 34);
			this->button16->TabIndex = 0;
			this->button16->Text = L"√";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(368, 217);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(40, 73);
			this->button18->TabIndex = 0;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(162, 136);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(34, 33);
			this->button17->TabIndex = 0;
			this->button17->Text = L"Sin";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(162, 176);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(34, 33);
			this->button19->TabIndex = 0;
			this->button19->Text = L"Cos";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(113, 258);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(43, 33);
			this->button20->TabIndex = 0;
			this->button20->Text = L"tan";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(113, 136);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(43, 35);
			this->button21->TabIndex = 0;
			this->button21->Text = L"sinh";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(113, 176);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(43, 35);
			this->button22->TabIndex = 0;
			this->button22->Text = L"cosh";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(113, 216);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(43, 35);
			this->button23->TabIndex = 0;
			this->button23->Text = L"tanh";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(65, 135);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(42, 34);
			this->button27->TabIndex = 0;
			this->button27->Text = L"ln";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(65, 176);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(42, 34);
			this->button28->TabIndex = 0;
			this->button28->Text = L"log";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(65, 216);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(42, 34);
			this->button30->TabIndex = 0;
			this->button30->Text = L"n!";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(368, 176);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(40, 34);
			this->button31->TabIndex = 0;
			this->button31->Text = L"1/x";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(162, 96);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(34, 34);
			this->button29->TabIndex = 2;
			this->button29->Text = L")";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(333, 96);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 34);
			this->button25->TabIndex = 3;
			this->button25->Text = L"AC";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click_1);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(113, 97);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(43, 34);
			this->button26->TabIndex = 4;
			this->button26->Text = L"(";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(211, 97);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(34, 34);
			this->button24->TabIndex = 5;
			this->button24->Text = L"←";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click_1);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(67, 98);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(41, 32);
			this->button32->TabIndex = 0;
			this->button32->Text = L"X^3";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(3, 97);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(58, 34);
			this->button33->TabIndex = 0;
			this->button33->Text = L"X^2";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(251, 98);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(35, 33);
			this->button35->TabIndex = 6;
			this->button35->Text = L"MS";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(292, 98);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(35, 33);
			this->button36->TabIndex = 6;
			this->button36->Text = L"MR";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button38
			// 
			this->button38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.Image")));
			this->button38->Location = System::Drawing::Point(3, 258);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(104, 32);
			this->button38->TabIndex = 0;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(3, 137);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(58, 34);
			this->button39->TabIndex = 0;
			this->button39->Text = L"X";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(3, 178);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(58, 34);
			this->button40->TabIndex = 0;
			this->button40->Text = L"Y";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(3, 218);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(58, 34);
			this->button41->TabIndex = 0;
			this->button41->Text = L"Z";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// lb
			// 
			this->lb->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb->Location = System::Drawing::Point(3, 46);
			this->lb->Name = L"lb";
			this->lb->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lb->Size = System::Drawing::Size(409, 38);
			this->lb->TabIndex = 1;
			this->lb->Text = L"0";
			this->lb->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button34
			// 
			this->button34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.Image")));
			this->button34->Location = System::Drawing::Point(162, 218);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(34, 75);
			this->button34->TabIndex = 7;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(415, 313);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Scientific Calculator - IdeaFactory";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
		int firstnum;
		int secondnum;
		int result;
		char operation;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
				 //button For COS

				 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
				 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
				 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

				 if (bracket)
				 {
					 expressionNumberStart = true;
					 label1->Text = label1->Text + " Cos";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('c');
					 button31_Click(sender, e);
					 return;
				 }
				 //------------------------------------------------------------------------------

				 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

				 if (isError || flag)
				 {
					 Beep(523, 500);
					 return;
				 }
				 isCompute = true;

				 option = -1;

				 /*Picking a number from the screen and computing the result and placing the number back on screen*/


				 onenum = true;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
					 firstNumF = std::stof(stdString);
				 }
				 else
				 {
					 firstNumF = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "";
				 firstNumF = roundf(cos((firstNumF*(PI / 180))) * 100000000.0f) / 100000000.0f;
				 lb->Text = (firstNumF.ToString());

				 onedecimal = false;
	}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 // SINH code

			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " SinH";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('S');
				 button31_Click(sender, e);
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/



			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 lb->Text = "";
			 firstNumF = roundf(sinh((firstNumF*(PI / 180))) * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 0";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('0');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "0";
					 expressions.back().push_back('0');
				 }

				 return;
			 }




			 //-----------------------------------------------------------------------------



			 //for integration to remove integration guidence line from screen


			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }
			 //--------------------------------------------------------


			 //placing the number in the right format

			 if (lb->Text == "0")
			 {
				 lb->Text = "0";
			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "0";
			 }
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 1";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('1');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "1";
					 expressions.back().push_back('1');
				 }

				 return;
			 }

			 //--------------------------------------------------------------------------
			 //for integration to remove integration guidence line from screen
			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 onenum = false;
				 lb->Text = "";
				 isCompute = false;
			 }
			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {

				 lb->Text = "1";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "1";
			 }
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 2";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('2');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "2";
					 expressions.back().push_back('2');
				 }

				 return;
			 }

			 //----------------------------------------------------------------------------
			 //for integration to remove integration guidence line from 


			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return


			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }

			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number

			 if (isCompute)
			 {
				 onenum = false;
				 lb->Text = "";
				 isCompute = false;
			 }

			 //--------------------------------------------------------


			 //placing the number in the right format

			 if (lb->Text == "0")
			 {
				 lb->Text = "2";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "2";
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 3";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('3');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "3";
					 expressions.back().push_back('3');
				 }

				 return;
			 }
			 //********************************************************************

			 //for integration to remove integration guidence line from screen
			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }

			 //********************************************************************

			 //if there is an error then it must return


			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }

			 //********************************************************************

			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }

			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "3";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "3";
			 }
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 4";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('4');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "4";
					 expressions.back().push_back('4');
				 }

				 return;



			 }

			 //-----------------------------------------------------------------------------



			 //for integration to remove integration guidence line from screen
			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }
			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "4";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "4";
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 5";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('5');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "5";
					 expressions.back().push_back('5');
				 }

				 return;
			 }

			 //-----------------------------------------------------------------------------
			 //for integration to remove integration guidence line from screen

			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------

			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }
			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "5";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "5";
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 6";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('6');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "6";
					 expressions.back().push_back('6');
				 }

				 return;
			 }

			 //-----------------------------------------------------------------------------



			 //for integration to remove integration guidence line from screen








			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }
			 //--------------------------------------------------------
			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "6";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "6";
			 }

}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 9";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('9');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "9";
					 expressions.back().push_back('9');
				 }

				 return;
			 }


			 //-----------------------------------------------------------------------------



			 //for integration to remove integration guidence line from screen






			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }

			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "9";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "9";
			 }
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 8";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('8');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "8";
					 expressions.back().push_back('8');
				 }

				 return;
			 }


			 //-----------------------------------------------------------------------------



			 //for integration to remove integration guidence line from screen






			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------


			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }

			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "8";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "8";
			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 /* if the brackets are used then the following code puts the number in the right place
			 to generate a string in a certain format which can be computed*/
			 if (bracket)
			 {
				 if (expressionNumberStart)
				 {
					 label1->Text = label1->Text + " 7";
					 expressions.back().push_back(' ');
					 expressions.back().push_back('7');
					 expressionNumberStart = false;
				 }
				 else
				 {
					 label1->Text = label1->Text + "7";
					 expressions.back().push_back('7');
				 }

				 return;
			 }
			 //-----------------------------------------------------------------------------



			 //for integration to remove integration guidence line from screen

			 if (flag)
			 {
				 lb->Text = "0";
				 flag = false;
			 }
			 //-------------------------------------------------------------

			 //if there is an error then it must return
			 if (isError)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------

			 //if the result generated is to be overwritten with a new number
			 if (isCompute)
			 {
				 lb->Text = ""; isCompute = false; onenum = false;
			 }
			 //--------------------------------------------------------


			 //placing the number in the right format
			 if (lb->Text == "0")
			 {
				 lb->Text = "7";

			 }
			 else if (lb->Text->Length < 11)
			 {
				 lb->Text = (lb->Text) + "7";
			 }
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 //button for DECIMAL

			 /*if there is a bracket and a number has already begun being entered then decimal can be placed
			 while dealing with brackets*/
			 if (bracket && !expressionNumberStart)
			 {
				 expressions.back().push_back('.');
				 label1->Text = label1->Text + ".";


				 return;

			 }
			 else if (bracket)
				 return;


			 //error checking

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }

			 //if there is a place for a decimal in the variable
			 if (lb->Text->Length < 11)
			 {
				 //if no decimal was entered in the present number
				 if (!onedecimal)
				 {
					 lb->Text = (lb->Text) + ".";
					 onedecimal = true;
				 }
				 else
				 {
					 Beep(523, 500);
				 }
			 }
}
private: System::Void button25_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //AC BUTTON

			 // clearing and resetting everything even the memory
			 ismemory = false;
			 memory = 0;

			 bracket = false;
			 expressions.clear();
			 label1->Text = "";

			 integral = false;
			 intoption = 0;
			 flag = false;

			 isError = false;

			 onenum = false;

			 isCompute = false;

			 onedecimal = false;

			 option = -1;

			 lb->Text = "0";
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 //test//
			 MyForm1 ^ form = gcnew MyForm1;
			 form->ShowDialog();
			 //end test//
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 // FACTORIAL n!

			 if (bracket)
			 {
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }

			 lb->Text = "";
			 firstNumF = factorial(firstNumF);
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 //butoon for Plus sign

			 /*if a bracket is used then an expression in a string is built for which the following code only
			 puts necessary thing in a string and shows the same to user in the label screen*/
			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " +";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('+');
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------------------------------------------------


			 /*if plus button is pressed in this sequence >> number1 + number2 + <<
			 then the last plus should generate a result and thus the following code calls the equal button for
			 this purpose*/
			 bool isEqualCompute = false;
			 if (option != -1 && lb->Text->Length != 0)
			 {
				 button15_Click(sender, e);
				 isEqualCompute = true;

			 }
			 option = 1;// giving equal button a signal to compute using plus sign 

			 /*if the above code didnt call equal button and no number was given already by user
			 then if there is a number given by the user we will store it in our variable*/


			 if (!isEqualCompute &&	lb->Text->Length != 0 && !onenum)
			 {

				 onenum = true;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std (chanign from one form of string to another)

					 firstNumF = std::stof(stdString);
				 }
				 else
				 {
					 firstNumF = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "";
			 }

			 onedecimal = false;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 //button for minus sign

			 /*if a bracket is used then an expression in a string is built for which the following code only
			 puts necessary thing in a string and shows the same to user in the label screen*/
			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " -";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('-');
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/
			 if (isError || flag)
			 {
				 Beep(523, 500); // this command generates an error sound
				 return;
			 }
			 //--------------------------------------------------------------------------------


			 /*if minus button is pressed in this sequence >> number1 - number2 - <<
			 then the last minus should generate a result and thus the following code calls the equal button for
			 this purpose*/
			 bool isEqualCompute = false;
			 if (option != -1 && lb->Text->Length != 0)
			 {
				 button15_Click(sender, e);
				 isEqualCompute = true;
			 }
			 //-------------------------------------------------------------------------------------


			 option = 2; // giving equal button a signal to compute using minus sign 

			 /*if the above code didnt call equal button and no number was given already by user
			 then if there is a number given by the user we will store it in our variable*/
			 if (!isEqualCompute &&	lb->Text->Length != 0 && !onenum)
			 {

				 onenum = true;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std (chanign from one form of string to another)
					 firstNumF = std::stof(stdString);
				 }
				 else
				 {
					 firstNumF = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "";
			 }

			 onedecimal = false;
			 //--------------------------------------------------------
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 //	button for MULTIPLY SIGN




			 /*if a bracket is used then an expression in a string is built for which the following code only
			 puts necessary thing in a string and shows the same to user in the label screen*/
			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " *";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('*');
				 return;
			 }

			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 //--------------------------------------------------------------------------------


			 /*if multiply button is pressed in this sequence >> number1 * number2 * <<
			 then the last plus should generate a result and thus the following code calls the equal button for
			 this purpose*/
			 bool isEqualCompute = false;
			 if (option != -1 && lb->Text->Length != 0)
			 {
				 button15_Click(sender, e);
				 isEqualCompute = true;

			 }
			 option = 3;// giving equal button a signal to compute using multiply sign 

			 /*if the above code didnt call equal button and no number was given already by user
			 then if there is a number given by the user we will store it in our variable*/
			 if (!isEqualCompute &&	lb->Text->Length != 0 && !onenum)
			 {
				 onenum = true;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
					 //System::String^ myString = marshal_as<System::String^>(MyBasicStirng);   //std to String^ (chanign from one form of string to another)
					 firstNumF = std::stof(stdString);
				 }
				 else
				 {
					 firstNumF = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "";
			 }
			 onedecimal = false;
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 //	button for DIVISION SIGN

			 /*if a bracket is used then an expression in a string is built for which the following code only
			 puts necessary thing in a string and shows the same to user in the label screen*/
			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " /";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('/');
				 return;
			 }
			 //****************************************************

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }


			 //******************************************

			 /*if minus button is pressed in this sequence >> number1 / number2 / <<
			 then the last divide should generate a result and thus the following code calls the equal button for
			 this purpose*/

			 bool isEqualCompute = false;
			 if (option != -1 && lb->Text->Length != 0)
			 {
				 button15_Click(sender, e);
				 isEqualCompute = true;

			 }
			 //-------------------------------------------------------------------------------------
			 option = 4;

			 /*if the above code didnt call equal button and no number was given already by user
			 then if there is a number given by the user we will store it in our variable*/
			 if (!isEqualCompute &&	lb->Text->Length != 0 && !onenum)
			 {

				 onenum = true;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString); 						 //System::String^ myString = marshal_as<System::String^>(MyBasicStirng);   //std to String^ (no lo he probado, pero sería algo así.)

					 firstNumF = std::stof(stdString);
				 }
				 else
				 {
					 firstNumF = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "";
			 }

			 onedecimal = false;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 //	EQUAL button -------------------

			 /*when there is bracket it lets nothing happens unless the expression ends with a
			 left closing round bracket ), otherwise it generates an error which can be set by pushing ) this button*/
			 if (bracket && expressions.back().back() == ')')
			 {

				 expressions.clear();
				 onedecimal = false;
				 onenum = true;
				 bracket = false;
			 }
			 else if (bracket)
			 {
				 isError = true;
				 return;
			 }
			 //-------------------------------------------------------------------------------------------
			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 if (lb->Text->Length != 0)
			 {

				 if (option == 1)//***************************AAAADDDITTTIONNNN *******************************
				 {
					 option = -1;
					 isCompute = true; // equal has generated a result

					 /*picking the last number and computing addition*/
					 if (onedecimal)
					 {

						 System::String^ clrString = (lb->Text);
						 std::string stdString = marshal_as<std::string>(clrString);  //String^ to stdstring chaning format of string
						 firstNumF = firstNumF + std::stof(stdString);
					 }
					 else
					 {
						 firstNumF = firstNumF + Convert::ToInt32(lb->Text);
					 }
					 //displaying the number back on screen
					 lb->Text = "";
					 lb->Text = firstNumF.ToString();
				 }
				 else if (option == 2) // *************************************SSSSSSSSSSSSSSUUUUUUUUUUUUUUUUUBBTRACTON******************************
				 {
					 option = -1;
					 isCompute = true;// equal has generated a result

					 /*picking the last number and computing addition*/


					 if (onedecimal)
					 {

						 System::String^ clrString = (lb->Text);
						 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std (changing from one kind of string to another
						 firstNumF = firstNumF - std::stof(stdString);
					 }
					 else
					 {
						 firstNumF = firstNumF - Convert::ToInt32(lb->Text);
					 }
					 //displaying the number back on screen

					 lb->Text = "";
					 lb->Text = firstNumF.ToString();
				 }
				 else if (option == 3)//************************MULTIPLICATION*************************
				 {
					 option = -1;
					 isCompute = true;// equal has generated a result

					 /*picking the last number and computing addition*/


					 if (onedecimal)
					 {
						 System::String^ clrString = (lb->Text);
						 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std (changing from one kind of string to another
						 firstNumF = firstNumF * std::stof(stdString);
					 }
					 else
					 {
						 firstNumF = firstNumF * Convert::ToInt32(lb->Text);
					 }
					 //displaying the number back on screen
					 lb->Text = "";
					 lb->Text = firstNumF.ToString();
				 }
				 else if (option == 4)//**********************************************************DDDDDIIIIVVVVIISSSION************************************
				 {
					 option = -1;
					 isCompute = true;// equal has generated a result

					 /*picking the last number and computing addition*/


					 if (onedecimal)
					 {

						 System::String^ clrString = (lb->Text);
						 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std (changing from one kind of string to another
						 if (stof(stdString) != 0)
							 firstNumF = firstNumF / std::stof(stdString);
						 else
						 {
							 onedecimal = false;
							 lb->Text = "Cannot Divide By Zero";
							 isError = true;
							 return;
						 }
					 }
					 else
					 {
						 /*if the number to divide with is zero then an error is to be generated*/
						 if ((Convert::ToInt32(lb->Text)) == 0)
						 {
							 onedecimal = false;
							 lb->Text = "Cannot Divide By Zero";
							 isError = true;
							 return;
						 }
						 //----------------------------------------------
						 firstNumF = firstNumF / Convert::ToInt32(lb->Text);
					 }
					 //displaying the number back on screen
					 lb->Text = "";
					 lb->Text = firstNumF.ToString();
				 }
				 onedecimal = false;
			 }
			 else
			 {
				 Beep(523, 500);
				 return;
			 }
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Square ROOT

			 if (bracket)
			 {
				 return;
			 }
			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 if (firstNumF < 0)
			 {
				 onedecimal = false;
				 lb->Text = "Invalid Input";
				 isError = true;
				 return;
			 }
			 lb->Text = "";
			 firstNumF = sqrt(firstNumF);
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 // NATURAL LOG ln 

			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " ln";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('l');
				 button31_Click(sender, e);
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 if (firstNumF <= 0)
			 {
				 onedecimal = false;
				 lb->Text = "Invalid Input";
				 isError = true;
				 return;
			 }
			 lb->Text = "";
			 firstNumF = roundf(log(firstNumF) * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 // (((((((((((((((

			 /*left bracket initiates a new string which will be computed later*/
			 if (!bracket)
			 {
				 label1->Text = "";
			 }
			 label1->Text = label1->Text + " (";
			 //numberOfstrings++;
			 expressions.push_back("(");
			 bracket = true;

}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 //the right bracket closes a string formation ,, computes its result and then if a former string exists
			 //it appends the result of innermost bracket to the outer bracket string
			 if (!bracket)
				 return;
			 label1->Text = label1->Text + " )";
			 expressions.back().push_back(' ');
			 expressions.back().push_back(')');
			 operatorStack conv;

			 float ans = postfixResult(conv.postfix(expressions.back()));
			 expressions.pop_back();

			 if (expressions.size() > 0)
			 {
				 if (expressions.back().back() == 's') //sin
				 {
					 ans = roundf(sin((ans*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 'c') //cos
				 {
					 ans = roundf(cos((ans*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 't') //tan
				 {
					 ans = roundf(tan((ans*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 'S') //sinh
				 {
					 ans = roundf(sinh((ans*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 'C') //cosh
				 {
					 ans = roundf(cosh((ans*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString()); 
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 'T') //tanh
				 {
					 ans = roundf(tanh((ans*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 'l')
				 {
					 ans = roundf(log(ans) * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else if (expressions.back().back() == 'L')
				 {
					 ans = roundf(log10(ans) * 100000000.0f) / 100000000.0f;
					 expressions.back().pop_back();
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
				 else
				 {
					 expressions.back().push_back(' ');
					 if (ans < 0)
					 {

						 string a = marshal_as<std::string>((-1 * ans).ToString());
						 expressions.back().push_back('-');
						 expressions.back().append(" " + a);
					 }
					 else
					 {
						 string a = marshal_as<std::string>(ans.ToString());
						 expressions.back().append(a);
					 }
				 }
			 }


			 lb->Text = ans.ToString();

			 if (expressions.size() == 0)
			 {
				 firstNumF = ans;
				 onenum = true;
				 isCompute = true;
				 bracket = false;
				 expressionNumberStart = true;
			 }
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
}




		 

		 int factorial(int n) // Factorial Function
		 {
			 return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ismemory)
			 {
				 if (bracket)
				 {

					 string a = marshal_as <std::string>(label1->Text);
					 if (a.back() <= '9' && a.back() >= '0')
					 {


						 while (a.back() != ' ')
						 {
							 a.pop_back();
						 }
						 while (expressions.back().back() != ' ')
						 {
							 expressions.back().pop_back();
						 }
						 string b = marshal_as<std::string>(lb->Text);
						 a = a + b;
						 expressions.back().append(b);
					 }
					 else
					 {
						 string b = marshal_as<std::string>(lb->Text);
						 a = a + " " + b;
						 label1->Text = marshal_as<System::String^>(a);
						 expressions.back().append(" " + b);
					 }
				 }
				 else
				 {
					 lb->Text = memory.ToString();
				 }
			 }
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 ismemory = true;
			 System::String^ clrString = (lb->Text);
			 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
			 memory = std::stof(stdString);
}
private: System::Void button24_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 /* if brackets are being used then everything is remove from the end of a string
			 till first blank space in the string from the end "1 + 2" becomes "1 +" */
			 if (bracket)
			 {

				 System::String^ clrString = (label1->Text);
				 std::string stdString = marshal_as<std::string>(clrString);
				 if (stdString.back() == '(')
					 return;
				 while (stdString.back() != ' ')
					 stdString.pop_back();
				 stdString.pop_back();

				 label1->Text = marshal_as<System::String^>(stdString);

				 while (expressions.back().back() != ' ')
					 expressions.back().pop_back();
				 expressions.back().pop_back();

				 return;
			 }


			 //error checking
			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }


			 //if the there is something in screen delete one thing from it
			 if (lb->Text->Length != 0)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);
				 stdString.pop_back();
				 lb->Text = marshal_as<System::String^>(stdString);   
				 
			 }
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Reciprocal
			 if (bracket)
			 {
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }

			 lb->Text = "";
			 /*if the number is zero then generate an error and return*/
			 if (firstNumF == 0)
			 {
				 onedecimal = false;
				 lb->Text = "Can not divide by Zero";
				 isError = true;
				 return;
			 }
			 //------------------------------------------------------------------
			 firstNumF = 1 / firstNumF;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Cube Of X
			 /*in case of brackets cube cannot be used*/
			 if (bracket)
				 return;

			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }

			 lb->Text = "";
			 firstNumF = pow(firstNumF, 3);
			 lb->Text = (firstNumF.ToString());
			 onedecimal = false;
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Square Of X
			 if (bracket)
			 {
				 return;
			 }
			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }

			 lb->Text = "";
			 firstNumF = pow(firstNumF, 2);
			 lb->Text = (firstNumF.ToString());

			 onedecimal = false;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 // Button For SIN
			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)
			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " Sine";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('s');
				 button31_Click(sender, e);
				 return;
			 }


			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/



			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/

			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 //System::String^ myString = marshal_as<System::String^>(MyBasicStirng);   //std to String^ (no lo he probado, pero sería algo así.)
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }


			 lb->Text = "";
			 firstNumF = roundf(sin((firstNumF*(PI / 180)))	 * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());

			 onedecimal = false;
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 // TAN button

			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " Tan";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('t');
				 button31_Click(sender, e);
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;


			 /*Picking a number from the screen and computing the result and placing the number back on screen*/

			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 lb->Text = "";
			 firstNumF = roundf(tan((firstNumF*(PI / 180))) * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 // COSH CODE

			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " CosH";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('C');
				 button31_Click(sender, e);
				 return;
			 }

			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/




			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 lb->Text = "";
			 firstNumF = roundf(cosh((firstNumF*(PI / 180))) * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 //		TANH Button

			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " TanH";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('T');
				 button31_Click(sender, e);
				 return;
			 }


			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/



			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 lb->Text = "";
			 firstNumF = roundf(tanh((firstNumF*(PI / 180))) * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Normal LOG base 10

			 //for brackets .. the sin button makes another string to solve () brackets of trignometric function
			 //in the last string a SIGNAL is placed to see wether it is a trignometric function or not
			 //if it is a trignometric function then which one is it .. is represented by symbols (s,c,t,S,C,T,l,L)

			 if (bracket)
			 {
				 expressionNumberStart = true;
				 label1->Text = label1->Text + " log";
				 expressions.back().push_back(' ');
				 expressions.back().push_back('L');
				 button31_Click(sender, e);
				 return;
			 }
			 //------------------------------------------------------------------------------

			 /*if some part of calculator generates an error then the buttons are restricted in the following way*/

			 if (isError || flag)
			 {
				 Beep(523, 500);
				 return;
			 }
			 isCompute = true;

			 option = -1;

			 /*Picking a number from the screen and computing the result and placing the number back on screen*/


			 onenum = true;
			 if (onedecimal)
			 {

				 System::String^ clrString = (lb->Text);
				 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
				 firstNumF = std::stof(stdString);
			 }
			 else
			 {
				 firstNumF = Convert::ToInt32(lb->Text);
			 }
			 if (firstNumF <= 0)
			 {
				 onedecimal = false;
				 lb->Text = "Invalid Input";
				 isError = true;
				 return;
			 }
			 lb->Text = "";
			 firstNumF = roundf(log10(firstNumF) * 100000000.0f) / 100000000.0f;
			 lb->Text = (firstNumF.ToString());



			 onedecimal = false;
}
		 private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e)
		 {

		 }
private: System::Void button34_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 if (bracket)
				 return;

			 //checks if a number was not entered after entering integral mode and then clicking integral button again
			 if (integral && flag)
			 {
				 Beep(523, 500);
				 return;
			 }

			 //if integral button is being clicked for the first time then ask for the number and set conditions to
			 //get next number
			 if (!integral)
			 {
				 intoption = 6;
				 integral = true;
				 lb->Text = "Enter the Number and again Press integral button";
				 flag = true;
			 }
			 //---------------------------------------------------------------------------
			 /*if a number is given and integral button is pressed then saving the number, program asks for upperlimit
			 and set conditions for getting the upperlimit*/
			 else if (intoption == 6)
			 {
				 intoption = 7;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
					 firstNumF = std::stof(stdString);
				 }
				 else
				 {
					 firstNumF = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "Enter the upperlimit and Again Press integral button";
				 flag = true;
			 }
			 //--------------------------------Integral-----//
			 /*if a number is given and integral button is pressed then saving the upperlimit, program asks for
			 lowerlimit and set conditions for getting the lowerlimit*/
			 else if (intoption == 7)
			 {
				 intoption = 8;
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
					 upperlimit = std::stof(stdString);
				 }
				 else
				 {
					 upperlimit = Convert::ToInt32(lb->Text);
				 }
				 lb->Text = "Wnter the lowerlimit and Press integral button";
				 flag = true;
			 }
			 //---------------------------------------------------------------------------
			 /*if a number is given and integral button is pressed then saving the upperlimit, program asks for
			 lowerlimit and generates result and quits integral mode*/
			 else if (intoption == 8)
			 {
				 if (onedecimal)
				 {

					 System::String^ clrString = (lb->Text);
					 std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
					 lowerlimit = std::stof(stdString);
				 }
				 else
				 {
					 lowerlimit = Convert::ToInt32(lb->Text);
				 }

				 //after computing and showing the result, program quits integral mode
				 firstNumF = firstNumF * (upperlimit - lowerlimit);
				 lb->Text = firstNumF.ToString();
				 isCompute = true;
				 onenum = true;
				 integral = false;
				 flag = false;
				 intoption = 0;
			 }
}

		 /*this function computes the result from postfix string which was being made when the first time a
		 left bracket key was pressed
		 and then sent into another function to genereate its postfix .. that postfix string is passed to
		 this function to generate
		 a result*/
		 float postfixResult(const string & postfix)
		 {
			 string result;
			 ordered <float> operandStack;
			 bool minus = false;
			 for (int i = 0; i < postfix.size(); i++)
			 {
				 if (postfix[i] == '-' && (postfix[i + 1] - 48 >= 0 && postfix[i + 1] - 48 <= 9))
				 {
					 minus = true;
					 continue;
				 }
				 if ((postfix[i] - 48 <= 9 && postfix[i] - 48 >= 0) || postfix[i] == '.')
				 {
					 string tempnum;
					 while (postfix[i] != ' ' && i != postfix.size())
					 {
						 tempnum.push_back(postfix[i]);
						 i++;
					 }
					 float number = stof(tempnum);
				
					 if (minus)
					 {
						 operandStack.push(-1 * number);
						 minus = false;
					 }
					 else
						 operandStack.push(number);
				 }
				 else
				 {
					 if (postfix[i] == '+')
					 {
						 operandStack.push((operandStack.pop() + operandStack.pop()));
						 i++;
					 }
					 else if (postfix[i] == '-')
					 {
						 int tempo = operandStack.pop();
						 operandStack.push((operandStack.pop() - tempo));
						 i++;
					 }
					 else if (postfix[i] == '*')
					 {
						 operandStack.push((operandStack.pop() * operandStack.pop()));
						 i++;
					 }
					 else if (postfix[i] == '/')
					 {
						 int tempo = operandStack.pop();
						 operandStack.push((operandStack.pop() / tempo));
						 i++;
					 }
				 }
			 }
			 return operandStack.pop();
}
};
}
