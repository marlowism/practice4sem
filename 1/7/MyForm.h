#pragma once
#include <windows.h>
#include "Math.h"
namespace Froms7 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: void Paint_Circle(int cX, int cY, int centX, int centY, int radius, int x, int y)
	{
		Graphics^ Графика = pictureBox1->CreateGraphics();
		Графика->DrawEllipse(Pens::Black, centX + cX - radius, cY - radius - centY, radius * 2, radius * 2);
		Графика->DrawLine(Pens::Black, centX + cX, cY - centY, cX + x, cY + y);
		// прорисовка радиуса большей окружности
	}
	private: void Paint_Graphic(int cX, int cY, int r2, int x, int y, array<Point>^ p)
	{
		Graphics^ Графика = pictureBox1->CreateGraphics();
		Графика->Clear(BackColor);
		Paint_Circle(cX, cY, 0, 0, r2, x, y);
		Графика->DrawLines(Pens::Red, p); // траектория
	}
	private: void DrawScene()
	{
		double InitT = 0, LastT = 6.3; // оборот в 360 градусов (6,28 радиан)
		double Step = 0.1, angle = InitT;
		double x, y, x1, y1;
		int cX = 150, cY = 150; // центр большой окружности
		int R2 = Convert::ToInt32(textBox1->Text);

		//int R2 = 90;// радиус большой окружности
		int k = Convert::ToInt32(textBox2->Text);// число областей на траектории
		int R1 = int(R2 / k); // радиус меньшей (движущейся) окружности
		int i = 0; // количество точек прорисовки
		array<Point>^ p;
		p = gcnew array<Point>(64); // точки для прорисовки (LastT/Step)
		while (angle <= LastT)
		{
			x = R1 * (k - 1) * (cos(angle) + cos((k - 1) * angle) / (k - 1));
			y = R1 * (k - 1) * (sin(angle) - sin((k - 1) * angle) / (k - 1));
			p[i] = Drawing::Point(cX + int(x), cY + int(y)); // расчет очередной точки траектории
			Paint_Graphic(cX, cY, R2, x, y, p);
			x1 = (R2 - R1) * sin(angle + 1.57);
			y1 = (R2 - R1) * cos(angle + 1.57);
			Paint_Circle(cX, cY, int(x1), int(y1), R1, x, y);
			angle += Step;
			::Sleep(40); //время приостановки прорисовки
			i++;
		}
	}
		   

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(58, 77);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(427, 309);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(511, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Радиус";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(514, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Число областей";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(618, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(618, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(566, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 103);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 504);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		DrawScene();
	}
};
}
