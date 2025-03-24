#pragma once
#include "TBuffer.h"

namespace Interface {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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

	protected:

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
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
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
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
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(32, 190);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(75, 20);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Minmax";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(32, 240);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 20);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"AlfaBeta";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Location = System::Drawing::Point(796, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 355);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"AI";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(136, 355);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Player";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(157, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(18, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(180, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(19, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(205, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(19, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(230, 131);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(19, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(255, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(19, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(280, 131);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(19, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"button10";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(305, 131);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(19, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"button9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(330, 131);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(19, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(355, 131);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(19, 23);
			this->button9->TabIndex = 13;
			this->button9->Text = L"button7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(380, 131);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(18, 23);
			this->button10->TabIndex = 12;
			this->button10->Text = L"button6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(403, 131);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(19, 23);
			this->button11->TabIndex = 26;
			this->button11->Text = L"button20";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(428, 131);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(19, 23);
			this->button12->TabIndex = 25;
			this->button12->Text = L"button19";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(453, 131);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(19, 23);
			this->button13->TabIndex = 24;
			this->button13->Text = L"button18";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(478, 131);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(19, 23);
			this->button14->TabIndex = 23;
			this->button14->Text = L"button17";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(503, 131);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(18, 23);
			this->button15->TabIndex = 22;
			this->button15->Text = L"button16";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(527, 131);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(19, 23);
			this->button16->TabIndex = 21;
			this->button16->Text = L"button15";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(552, 131);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(19, 23);
			this->button17->TabIndex = 20;
			this->button17->Text = L"button14";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(577, 131);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(19, 23);
			this->button18->TabIndex = 19;
			this->button18->Text = L"button13";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(602, 131);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(19, 23);
			this->button19->TabIndex = 18;
			this->button19->Text = L"button12";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(632, 131);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(18, 23);
			this->button20->TabIndex = 17;
			this->button20->Text = L"button11";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(656, 131);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(19, 23);
			this->button21->TabIndex = 31;
			this->button21->Text = L"button25";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(680, 131);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(19, 23);
			this->button22->TabIndex = 30;
			this->button22->Text = L"button24";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(705, 131);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(19, 23);
			this->button23->TabIndex = 29;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(730, 131);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(19, 23);
			this->button24->TabIndex = 28;
			this->button24->Text = L"button22";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(755, 131);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(18, 23);
			this->button25->TabIndex = 27;
			this->button25->Text = L"button21";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Location = System::Drawing::Point(157, 319);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(92, 34);
			this->button26->TabIndex = 32;
			this->button26->Text = L"Start";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Location = System::Drawing::Point(28, 57);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(79, 56);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Score";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Location = System::Drawing::Point(6, 72);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(79, 56);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Score";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(39, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 21);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(39, 22);
			this->textBox2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 379);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"Game";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int player = 0;
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = (Button^)sender;
		if (player = 1) player = 0;
		else player = 1;
		int pos;
		if (clickedButton == button24) {
			pos = 0;
		}
		else if (clickedButton == button23) {
			pos = 1;
		}
		else if (clickedButton == button22) {
			pos = 2;
		}
		else if (clickedButton == button21) {
			pos = 3;
		}
		else if (clickedButton == button20) {
			pos = 4;
		}
		else if (clickedButton == button19) {
			pos = 5;
		}
		else if (clickedButton == button18) {
			pos = 6;
		}
		else if (clickedButton == button17) {
			pos = 7;
		}
		else if (clickedButton == button16) {
			pos = 8;
		}
		else if (clickedButton == button15) {
			pos = 9;
		}
		else if (clickedButton == button14) {
			pos = 10;
		}
		else if (clickedButton == button13) {
			pos = 11;
		}
		else if (clickedButton == button12) {
			pos = 12;
		}
		else if (clickedButton == button11) {
			pos = 13;
		}
		else if (clickedButton == button10) {
			pos = 14;
		}
		else if (clickedButton == button9) {
			pos = 15;
		}
		else if (clickedButton == button8) {
			pos = 16;
		}
		else if (clickedButton == button7) {
			pos = 17;
		}
		else if (clickedButton == button6) {
			pos = 18;
		}
		else if (clickedButton == button5) {
			pos = 19;
		}
		else if (clickedButton == button4) {
			pos = 20;
		}
		else if (clickedButton == button3) {
			pos = 21;
		}
		else if (clickedButton == button2) {
			pos = 22;
		}
		else if (clickedButton == button1) {
			pos = 23;
		}
		pos++;
		if (buf->getNumber(pos) == 0) {
			if (buf->getNumber(pos - 1) == 0) buf->setVar1(player, pos);
			else buf->setVar2(player, pos);
		}
		else {
			if (buf->getNumber(pos - 1) == 0) buf->setVar3(player, pos);
			else buf->setVar4(player, pos);
		}
		UpdateButtonText();
	}
		   void UpdateButtonText()
		   {
			   button25->Text = buf->getNumber(0).ToString();
			   button24->Text = buf->getNumber(1).ToString();
			   button23->Text = buf->getNumber(2).ToString();
			   button22->Text = buf->getNumber(3).ToString();
			   button21->Text = buf->getNumber(4).ToString();
			   button20->Text = buf->getNumber(5).ToString();
			   button19->Text = buf->getNumber(6).ToString();
			   button18->Text = buf->getNumber(7).ToString();
			   button17->Text = buf->getNumber(8).ToString();
			   button16->Text = buf->getNumber(9).ToString();
			   button15->Text = buf->getNumber(10).ToString();
			   button14->Text = buf->getNumber(11).ToString();
			   button13->Text = buf->getNumber(12).ToString();
			   button12->Text = buf->getNumber(13).ToString();
			   button11->Text = buf->getNumber(14).ToString();
			   button10->Text = buf->getNumber(15).ToString();
			   button9->Text = buf->getNumber(16).ToString();
			   button8->Text = buf->getNumber(17).ToString();
			   button7->Text = buf->getNumber(18).ToString();
			   button6->Text = buf->getNumber(19).ToString();
			   button5->Text = buf->getNumber(20).ToString();
			   button4->Text = buf->getNumber(21).ToString();
			   button3->Text = buf->getNumber(22).ToString();
			   button2->Text = buf->getNumber(23).ToString();
			   button1->Text = buf->getNumber(24).ToString();
			   textBox1->Text = buf->getScore1().ToString();
			   textBox2->Text = buf->getScore2().ToString();
		   }
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateButtonText();
		button26->Enabled = false;
		button25->Enabled = false;
	}
	};
}
