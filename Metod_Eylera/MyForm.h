#pragma once

#include <cmath> // Додаємо цей заголовок для використання std::cos

namespace Zavdanny_4 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::TextBox^ textBox4;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2; // Кнопка "Очистити"
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(91, 79);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(122, 13);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Початкове значення x:";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(91, 119);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(122, 13);
               this->label2->TabIndex = 1;
               this->label2->Text = L"Початкове значення y:";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(91, 159);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(112, 13);
               this->label3->TabIndex = 2;
               this->label3->Text = L"Крок інтегрування h:";
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(221, 79);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(100, 20);
               this->textBox1->TabIndex = 3;
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(221, 119);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(100, 20);
               this->textBox2->TabIndex = 4;
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(221, 159);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(100, 20);
               this->textBox3->TabIndex = 5;
               // 
               // textBox4
               // 
               this->textBox4->Location = System::Drawing::Point(91, 248);
               this->textBox4->Multiline = true;
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(230, 60);
               this->textBox4->TabIndex = 6;
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(221, 201);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(100, 25);
               this->button1->TabIndex = 7;
               this->button1->Text = L"Обчислити";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
               // 
               // button2
               // 
               this->button2->Location = System::Drawing::Point(94, 201);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(100, 25);
               this->button2->TabIndex = 8;
               this->button2->Text = L"Очистити";
               this->button2->UseVisualStyleBackColor = true;
               this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(20, 26);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(148, 13);
               this->label4->TabIndex = 9;
               this->label4->Text = L"Виконав Пелипенко Богдан";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Location = System::Drawing::Point(218, 26);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(179, 13);
               this->label5->TabIndex = 10;
               this->label5->Text = L"y\'=x+cos(y/2); y(0.8)=1.4; xє[0.8;1.8]";
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(421, 348);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->textBox4);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Name = L"MyForm";
               this->Text = L"Метод Ейлера";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        double differentialEquation(double x, double y)
        {
            return x + std::cos(y / 2.0); // Рівняння y' = x + cos(y / 2)
        }

        void eulerMethod(double x0, double y0, double h, double xEnd)
        {
            double y = y0;
            String^ results = "";

            while (x0 <= xEnd)
            {
                results += "x = " + x0 + ", y = " + y + "\r\n";
                y = y + h * differentialEquation(x0, y);
                x0 = x0 + h;
            }

            textBox4->Text = results;
        }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        try
        {
            double x0 = 0.8; // Початкове значення x
            double y0 = 1.4; // Початкове значення y
            double h = Convert::ToDouble(textBox3->Text); // Крок
            double xEnd = 1.8; // Кінцева точка x

            // Виклик методу Ейлера
            eulerMethod(x0, y0, h, xEnd);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Помилка: " + ex->Message);
        }
    }

           // Обробник події для кнопки "Очистити"
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        textBox1->Clear();
        textBox2->Clear();
        textBox3->Clear();
        textBox4->Clear();
    }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
