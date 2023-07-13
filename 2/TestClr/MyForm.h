#pragma once
#define _USE_MATH_DEFINES
#include <windows.h>
#include <math.h>
#include <iostream>

namespace TestClr {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ s1;
	private: System::Windows::Forms::TextBox^ s2;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ shift;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ size;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ rotate;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ widthF;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ widthP;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::CheckBox^ checkBoxPulse;
	private: System::Windows::Forms::TextBox^ repeat;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ speed;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ dot;
	private: System::Windows::Forms::RadioButton^ lineLine;



	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ left;

	private: System::Windows::Forms::RadioButton^ right;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ downRight;

	private: System::Windows::Forms::RadioButton^ upRight;
	private: System::Windows::Forms::RadioButton^ center;


	private: System::Windows::Forms::RadioButton^ downLeft;

	private: System::Windows::Forms::RadioButton^ upLeft;
	private: System::Windows::Forms::TextBox^ height;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ scale;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;











	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->s1 = (gcnew System::Windows::Forms::TextBox());
			this->s2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->shift = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->size = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rotate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->widthF = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->widthP = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBoxPulse = (gcnew System::Windows::Forms::CheckBox());
			this->repeat = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->speed = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dot = (gcnew System::Windows::Forms::RadioButton());
			this->lineLine = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->left = (gcnew System::Windows::Forms::RadioButton());
			this->right = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->downRight = (gcnew System::Windows::Forms::RadioButton());
			this->upRight = (gcnew System::Windows::Forms::RadioButton());
			this->center = (gcnew System::Windows::Forms::RadioButton());
			this->downLeft = (gcnew System::Windows::Forms::RadioButton());
			this->upLeft = (gcnew System::Windows::Forms::RadioButton());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->scale = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(235, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(412, 399);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"основание 1";
			// 
			// s1
			// 
			this->s1->Location = System::Drawing::Point(82, 26);
			this->s1->Margin = System::Windows::Forms::Padding(2);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(35, 20);
			this->s1->TabIndex = 2;
			this->s1->Text = L"100";
			// 
			// s2
			// 
			this->s2->Location = System::Drawing::Point(82, 46);
			this->s2->Margin = System::Windows::Forms::Padding(2);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(35, 20);
			this->s2->TabIndex = 4;
			this->s2->Text = L"50";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 51);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"основание 2";
			// 
			// shift
			// 
			this->shift->Location = System::Drawing::Point(82, 72);
			this->shift->Margin = System::Windows::Forms::Padding(2);
			this->shift->Name = L"shift";
			this->shift->Size = System::Drawing::Size(35, 20);
			this->shift->TabIndex = 6;
			this->shift->Text = L"25";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 74);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"смещение";
			// 
			// size
			// 
			this->size->Location = System::Drawing::Point(194, 36);
			this->size->Margin = System::Windows::Forms::Padding(2);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(35, 20);
			this->size->TabIndex = 8;
			this->size->Text = L"30";
			this->size->TextChanged += gcnew System::EventHandler(this, &MyForm::size_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(148, 38);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"размер";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(102, 385);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 21);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Анимация";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rotate
			// 
			this->rotate->Location = System::Drawing::Point(82, 117);
			this->rotate->Margin = System::Windows::Forms::Padding(2);
			this->rotate->Name = L"rotate";
			this->rotate->Size = System::Drawing::Size(35, 20);
			this->rotate->TabIndex = 11;
			this->rotate->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 119);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"n оборотов";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 7);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Паралелограмм";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(146, 7);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 26);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Траектория\r\ny = ax^2+bx+c\r\n";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 140);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Цвет линии";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(150, 59);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 23);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Цвет";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// widthF
			// 
			this->widthF->Location = System::Drawing::Point(198, 86);
			this->widthF->Margin = System::Windows::Forms::Padding(2);
			this->widthF->Name = L"widthF";
			this->widthF->Size = System::Drawing::Size(35, 20);
			this->widthF->TabIndex = 18;
			this->widthF->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(123, 89);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"ширина линии";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// widthP
			// 
			this->widthP->Location = System::Drawing::Point(82, 167);
			this->widthP->Margin = System::Windows::Forms::Padding(2);
			this->widthP->Name = L"widthP";
			this->widthP->Size = System::Drawing::Size(35, 20);
			this->widthP->TabIndex = 20;
			this->widthP->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 170);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"ширина линии";
			// 
			// checkBoxPulse
			// 
			this->checkBoxPulse->AutoSize = true;
			this->checkBoxPulse->Location = System::Drawing::Point(9, 190);
			this->checkBoxPulse->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxPulse->Name = L"checkBoxPulse";
			this->checkBoxPulse->Size = System::Drawing::Size(79, 17);
			this->checkBoxPulse->TabIndex = 21;
			this->checkBoxPulse->Text = L"пульсация";
			this->checkBoxPulse->UseVisualStyleBackColor = true;
			// 
			// repeat
			// 
			this->repeat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->repeat->Location = System::Drawing::Point(198, 362);
			this->repeat->Margin = System::Windows::Forms::Padding(2);
			this->repeat->Name = L"repeat";
			this->repeat->Size = System::Drawing::Size(31, 20);
			this->repeat->TabIndex = 22;
			this->repeat->Text = L"1";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(134, 365);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"n повторов";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(94, 342);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"скорость движения";
			// 
			// speed
			// 
			this->speed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->speed->Location = System::Drawing::Point(198, 340);
			this->speed->Margin = System::Windows::Forms::Padding(2);
			this->speed->Name = L"speed";
			this->speed->Size = System::Drawing::Size(31, 20);
			this->speed->TabIndex = 24;
			this->speed->Text = L"10";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dot);
			this->groupBox1->Controls->Add(this->lineLine);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(162, 110);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(64, 81);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			// 
			// dot
			// 
			this->dot->AutoSize = true;
			this->dot->Location = System::Drawing::Point(4, 52);
			this->dot->Margin = System::Windows::Forms::Padding(2);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(73, 17);
			this->dot->TabIndex = 2;
			this->dot->Text = L". . . . . . . . ";
			this->dot->UseVisualStyleBackColor = true;
			// 
			// lineLine
			// 
			this->lineLine->AutoSize = true;
			this->lineLine->Location = System::Drawing::Point(4, 31);
			this->lineLine->Margin = System::Windows::Forms::Padding(2);
			this->lineLine->Name = L"lineLine";
			this->lineLine->Size = System::Drawing::Size(64, 17);
			this->lineLine->TabIndex = 1;
			this->lineLine->Text = L"- - - - - - -";
			this->lineLine->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(4, 10);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"-----------";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->left);
			this->groupBox2->Controls->Add(this->right);
			this->groupBox2->Location = System::Drawing::Point(7, 211);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(74, 67);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Сторона движения";
			// 
			// left
			// 
			this->left->AutoSize = true;
			this->left->Location = System::Drawing::Point(4, 46);
			this->left->Margin = System::Windows::Forms::Padding(2);
			this->left->Name = L"left";
			this->left->Size = System::Drawing::Size(49, 17);
			this->left->TabIndex = 1;
			this->left->TabStop = true;
			this->left->Text = L"лево";
			this->left->UseVisualStyleBackColor = true;
			// 
			// right
			// 
			this->right->AutoSize = true;
			this->right->Checked = true;
			this->right->Location = System::Drawing::Point(4, 25);
			this->right->Margin = System::Windows::Forms::Padding(2);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(55, 17);
			this->right->TabIndex = 0;
			this->right->TabStop = true;
			this->right->Text = L"право";
			this->right->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox3->Controls->Add(this->downRight);
			this->groupBox3->Controls->Add(this->upRight);
			this->groupBox3->Controls->Add(this->center);
			this->groupBox3->Controls->Add(this->downLeft);
			this->groupBox3->Controls->Add(this->upLeft);
			this->groupBox3->Location = System::Drawing::Point(13, 322);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(76, 84);
			this->groupBox3->TabIndex = 29;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"точка вращения";
			// 
			// downRight
			// 
			this->downRight->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->downRight->AutoSize = true;
			this->downRight->Location = System::Drawing::Point(48, 64);
			this->downRight->Margin = System::Windows::Forms::Padding(2);
			this->downRight->Name = L"downRight";
			this->downRight->Size = System::Drawing::Size(14, 13);
			this->downRight->TabIndex = 4;
			this->downRight->UseVisualStyleBackColor = true;
			// 
			// upRight
			// 
			this->upRight->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->upRight->AutoSize = true;
			this->upRight->Location = System::Drawing::Point(48, 28);
			this->upRight->Margin = System::Windows::Forms::Padding(2);
			this->upRight->Name = L"upRight";
			this->upRight->Size = System::Drawing::Size(14, 13);
			this->upRight->TabIndex = 3;
			this->upRight->UseVisualStyleBackColor = true;
			// 
			// center
			// 
			this->center->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->center->AutoSize = true;
			this->center->Checked = true;
			this->center->Location = System::Drawing::Point(32, 46);
			this->center->Margin = System::Windows::Forms::Padding(2);
			this->center->Name = L"center";
			this->center->Size = System::Drawing::Size(14, 13);
			this->center->TabIndex = 2;
			this->center->TabStop = true;
			this->center->UseVisualStyleBackColor = true;
			// 
			// downLeft
			// 
			this->downLeft->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->downLeft->AutoSize = true;
			this->downLeft->Location = System::Drawing::Point(16, 64);
			this->downLeft->Margin = System::Windows::Forms::Padding(2);
			this->downLeft->Name = L"downLeft";
			this->downLeft->Size = System::Drawing::Size(14, 13);
			this->downLeft->TabIndex = 1;
			this->downLeft->UseVisualStyleBackColor = true;
			// 
			// upLeft
			// 
			this->upLeft->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->upLeft->AutoSize = true;
			this->upLeft->Location = System::Drawing::Point(16, 28);
			this->upLeft->Margin = System::Windows::Forms::Padding(2);
			this->upLeft->Name = L"upLeft";
			this->upLeft->Size = System::Drawing::Size(14, 13);
			this->upLeft->TabIndex = 0;
			this->upLeft->UseVisualStyleBackColor = true;
			// 
			// height
			// 
			this->height->Location = System::Drawing::Point(82, 94);
			this->height->Margin = System::Windows::Forms::Padding(2);
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(35, 20);
			this->height->TabIndex = 31;
			this->height->Text = L"25";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 97);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 13);
			this->label12->TabIndex = 30;
			this->label12->Text = L"высота";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(146, 196);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"a =";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// scale
			// 
			this->scale->Location = System::Drawing::Point(166, 193);
			this->scale->Margin = System::Windows::Forms::Padding(2);
			this->scale->Name = L"scale";
			this->scale->Size = System::Drawing::Size(61, 20);
			this->scale->TabIndex = 33;
			this->scale->Text = L"1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(146, 221);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"b =";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(146, 247);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 13);
			this->label15->TabIndex = 35;
			this->label15->Text = L"c =";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 20);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 244);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 20);
			this->textBox2->TabIndex = 37;
			this->textBox2->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(656, 418);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->scale);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->height);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->speed);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->repeat);
			this->Controls->Add(this->checkBoxPulse);
			this->Controls->Add(this->widthP);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->widthF);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->rotate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->size);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->shift);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->s2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->s1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Color colorP;
		Color colorF;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		colorP = Color::Black;
		colorF = Color::Black;
	}

	private: System::Void DrawingT(double s1, double s2, double h, double s, double a, PointF p, Graphics^ g) {
		array<PointF>^ cord;
		cord = gcnew array<PointF>(5);
		double sinA = sin(a);
		double cosA = cos(a);
		double x1 = 0, y1 = 0;
		if (this->upLeft->Checked) {
			x1 = s1 / 2;
			y1 = (h / 2);
		}if (this->upRight->Checked) {
			x1 = -s1 / 2;
			y1 = (h / 2);
		}if (this->downLeft->Checked) {
			x1 = (-s1 / 2 + s + s2);
			y1 = -(h / 2);
		}if (this->downRight->Checked) {
			x1 = (-s1 / 2 + s);
			y1 = -(h / 2);
		}



		double x = ((-s1 / 2 + x1) * cosA) - ((-(h / 2) + y1) * sinA);
		double y = ((-s1 / 2 + x1) * sinA) + ((-(h / 2) + y1) * cosA);
		cord[0] = PointF(x + p.X, y + p.Y);
		cord[4] = PointF(x + p.X, y + p.Y);
		x = ((s1 / 2 + x1) * cosA) - ((-(h / 2) + y1) * sinA);
		y = ((s1 / 2 + x1) * sinA) + ((-(h / 2) + y1) * cosA);
		cord[1] = PointF(x + p.X, y + p.Y);
		x = ((-s1 / 2 + x1 + s + s2) * cosA) - (((h / 2) + y1) * sinA);
		y = ((-s1 / 2 + x1 + s + s2) * sinA) + (((h / 2) + y1) * cosA);
		cord[2] = PointF(x + p.X, y + p.Y);
		x = ((-s1 / 2 + x1 + s) * cosA) - (((h / 2) + y1) * sinA);
		y = ((-s1 / 2 + x1 + s) * sinA) + (((h / 2) + y1) * cosA);
		cord[3] = PointF(x + p.X, y + p.Y);


		
		Pen^ pen = gcnew Pen(colorP, Convert::ToInt32(this->widthP->Text));
		SolidBrush^ Brush = gcnew SolidBrush(colorP);
		g->FillPolygon(Brush, cord);
		g->DrawLines(pen, cord);
	}

	private: System::Void drawScene() {
		int size = Convert::ToInt32(this->size->Text);
		int speed = Convert::ToInt32(this->speed->Text);
		double scale = Convert::ToDouble(this->scale->Text);
		double b = Convert::ToDouble(this->textBox1->Text);
		double c = Convert::ToDouble(this->textBox2->Text);
		bool pulse = this->checkBoxPulse->Checked;

		double curX = -b/(scale*2);
		double curY = -(b*b-4*scale*c)/4*scale;

		int offsetY = 196 + curY;
		int offsetX = 200 + curX;

		array<PointF>^ p3 = gcnew array<PointF>(60);

		int count = 0;

		for (double i = -1.5; i <= 1.5; i += 0.05) {
			double y = scale*pow(i,2);
						
			p3[count] = PointF(offsetX + (size * i), offsetY - (size * y));
			count++;
		}
		

		Graphics^ g = pictureBox1->CreateGraphics();

		double curent_a = 0;
		double a = Convert::ToInt32(this->rotate->Text);
		a = (a * M_PI / double(30));
		double h = Convert::ToInt32(this->height->Text);
		double s1 = Convert::ToInt32(this->s1->Text);
		double s2 = Convert::ToInt32(this->s2->Text);
		double s = Convert::ToInt32(this->shift->Text);
		double p[] = { 1, 2.5 ,5, 7.5, 10, 12.5, 15, 17.7, 20, 22.5, 25,};
		int curent_p = 0;
		bool rise = false;

		Pen^ pen = gcnew Pen(colorF, Convert::ToInt32(this->widthF->Text));
		if(this->lineLine->Checked)
			pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		if (this->dot->Checked)
			pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;


		if (this->right->Checked) {
			for (int i = 0; i < 60; i += 1) {
				g->Clear(Color::White);
				g->DrawLines(pen, p3);

				if (pulse) {
					if (curent_p == 11) {
						curent_p--;
						rise = true;
					}
					if (curent_p == 0) {
						rise = false;
					}
					DrawingT(s1 / p[curent_p], s2 / p[curent_p], h / p[curent_p], s / p[curent_p], curent_a, p3[i], g);
					if (rise)
						curent_p--;
					else
						curent_p++;
				}
				else {
					DrawingT(s1, s2, h, s, curent_a, p3[i], g);
				}
				curent_a += a;
				::Sleep(speed * 10);
			}
		}
		else
		{
			for (int i = 59; i >= 0; i -= 1) {
				g->Clear(Color::White);
				g->DrawLines(pen, p3);

				if (pulse) {
					if (curent_p == 11) {
						curent_p--;
						rise = true;
					}
					if (curent_p == 0) {
						rise = false;
					}
					DrawingT(s1 / p[curent_p], s2 / p[curent_p], h / p[curent_p], s / p[curent_p], curent_a, p3[i], g);
					if (rise)
						curent_p--;
					else
						curent_p++;
				}
				else {
					DrawingT(s1, s2, h, s, curent_a, p3[i], g);
				}
				curent_a += a;
				::Sleep(speed * 10);
			}
		}
	}
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int repeat = Convert::ToInt32(this->repeat->Text);
		while (repeat--)
		{
			drawScene();
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		colorP = colorDialog1->Color;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		colorF = colorDialog1->Color;
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void size_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}