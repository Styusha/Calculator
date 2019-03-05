#pragma once
#include <math.h>

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Display;
	protected: 

	private: System::Windows::Forms::Button^  button1;



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
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  lblShow;
	private: System::Windows::Forms::Button^  button22;

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
			this->Display = (gcnew System::Windows::Forms::TextBox());
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
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->lblShow = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Display->Location = System::Drawing::Point(5, 12);
			this->Display->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Display->Multiline = true;
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(268, 48);
			this->Display->TabIndex = 0;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Display->TextChanged += gcnew System::EventHandler(this, &Form1::Display_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(5, 192);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(60, 192);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(115, 192);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(170, 192);
			this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 36);
			this->button4->TabIndex = 4;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::Arithmetic);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(5, 150);
			this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 36);
			this->button5->TabIndex = 5;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(5, 234);
			this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 38);
			this->button6->TabIndex = 6;
			this->button6->Text = L"0";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(114, 234);
			this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 38);
			this->button7->TabIndex = 7;
			this->button7->Text = L",";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(170, 235);
			this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 36);
			this->button8->TabIndex = 8;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::Arithmetic);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(224, 192);
			this->button9->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 80);
			this->button9->TabIndex = 9;
			this->button9->Text = L"=";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(224, 150);
			this->button10->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 36);
			this->button10->TabIndex = 13;
			this->button10->Text = L"1/x";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(169, 150);
			this->button11->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 36);
			this->button11->TabIndex = 12;
			this->button11->Text = L"*";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::Arithmetic);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(114, 150);
			this->button12->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 36);
			this->button12->TabIndex = 11;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(59, 150);
			this->button13->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 36);
			this->button13->TabIndex = 10;
			this->button13->Text = L"5";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(224, 108);
			this->button14->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 36);
			this->button14->TabIndex = 18;
			this->button14->Text = L"%";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(169, 108);
			this->button15->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 36);
			this->button15->TabIndex = 17;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::Arithmetic);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(114, 108);
			this->button16->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 36);
			this->button16->TabIndex = 16;
			this->button16->Text = L"9";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(59, 108);
			this->button17->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 36);
			this->button17->TabIndex = 15;
			this->button17->Text = L"8";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(5, 108);
			this->button18->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 36);
			this->button18->TabIndex = 14;
			this->button18->Text = L"7";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(224, 66);
			this->button19->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 36);
			this->button19->TabIndex = 23;
			this->button19->Text = L"sqrt";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(169, 66);
			this->button20->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 36);
			this->button20->TabIndex = 22;
			this->button20->Text = L"+/-";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(60, 66);
			this->button21->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 36);
			this->button21->TabIndex = 21;
			this->button21->Text = L"C";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(5, 66);
			this->button23->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 36);
			this->button23->TabIndex = 19;
			this->button23->Text = L"<--";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// lblShow
			// 
			this->lblShow->AutoSize = true;
			this->lblShow->BackColor = System::Drawing::SystemColors::Window;
			this->lblShow->Location = System::Drawing::Point(11, 20);
			this->lblShow->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblShow->Name = L"lblShow";
			this->lblShow->Size = System::Drawing::Size(0, 13);
			this->lblShow->TabIndex = 24;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(115, 66);
			this->button22->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 36);
			this->button22->TabIndex = 25;
			this->button22->Text = L"CE";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(278, 284);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->lblShow);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Display);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double FirstNum;
		double SecondNum;
		double Result;
		String^ Operator;

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 //button C
			 Display->Text="0";
			 lblShow->Text="";
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 //CE
			 Display->Text="0";
			 		 }
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Numbers
			 Button ^ Numbers = safe_cast<Button ^>(sender);

			 if (Display->Text=="0")
			 {
				 Display->Text = Numbers->Text;
			 }
			 else
			 {
				 Display->Text = Display->Text + Numbers->Text;
			 }
		 }
private: System::Void Arithmetic(System::Object^  sender, System::EventArgs^  e) {
			 //+ - */
			 
			 Button ^ Op = safe_cast<Button^>(sender);
			 FirstNum = Double::Parse(Display->Text);
			 Display->Text="";
			 Operator = Op->Text;
			 lblShow->Text = System::Convert::ToString(FirstNum) +" "+ Operator;
		 }

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 // = 
			 lblShow->Text = "";
			 SecondNum = Double::Parse(Display->Text);

			 if(Operator == "+")
			 {
				 Result = FirstNum + SecondNum;
				 Display->Text = System::Convert::ToString(Result); 
			 }
			 else if(Operator == "-")
			 {
				 Result = FirstNum - SecondNum;
				 Display->Text = System::Convert::ToString(Result); 
			 }
			 else if(Operator == "*")
			 {
				 Result = FirstNum * SecondNum;
				 Display->Text = System::Convert::ToString(Result); 
			 }
			 else if(Operator == "/")
			 {
				 Result = FirstNum / SecondNum;
				 Display->Text = System::Convert::ToString(Result); 
			 }
			 
			 }

private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 //<-- backspace
			 if(Display->Text->Length > 0)
			 {
				 Display->Text = Display->Text->Remove(Display->Text->Length -1,1);
			 }
		 }
private: System::Void Display_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 // display->0
			 if(Display->Text == "")
			 {
				 Display->Text = "0";
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 //point
			 if(!Display->Text->Contains(","))
			 {
				 Display->Text = Display->Text + ",";
			 }
			 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 // + -
			 if(Display->Text->Contains("-"))
			 {
				 Display->Text = Display->Text->Remove(0,1);
			 }
			 else
			 {
				 Display->Text = "-" + Display->Text;
			 }
		 }

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 1/x
			 double num;
			 lblShow->Text = "";
			 num = Double::Parse(Display->Text);

			 if(!num == 0)
			 {				 
				 num = 1/num;
				 Display->Text = System::Convert::ToString(num);
			 }
			 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 //SQRT
			  double num;
			 lblShow->Text = "";
			 num = Double::Parse(Display->Text);

			 if(num >0)
			 {				 
				 num = sqrt(num);
				 Display->Text = System::Convert::ToString(num);
			 }
			 else 
				 lblShow->Text = "Недопустимый ввод";

		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 // %
			double num;
			 lblShow->Text = "";
			 num = Double::Parse(Display->Text);
			 if (FirstNum==0)
				Result=0;
			 else
			 Result = FirstNum/100*num;

			 Display->Text = System::Convert::ToString(Result);
			 	
			 }
};
}

