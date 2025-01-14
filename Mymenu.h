#pragma once
#include "Ej2.h";
#include "Ej1.h";

namespace LAB52MEGANMORALES1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mymenu
	/// </summary>
	public ref class Mymenu : public System::Windows::Forms::Form
	{
	public:
		Mymenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Mymenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sandroe", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Men�";
			this->label1->Click += gcnew System::EventHandler(this, &Mymenu::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Mymenu::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(110, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 26);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Mymenu::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightCoral;
			this->label2->Location = System::Drawing::Point(40, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ejercicio 1";
			// 
			// Mymenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(287, 270);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Mymenu";
			this->Text = L"Men�";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ej1^ Ejercicio1 = gcnew Ej1();
		this->Hide();
		Ejercicio1->ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Ej2^ Ejercicio2 = gcnew Ej2();
		this->Hide();
		Ejercicio2->ShowDialog();
		this->Show();
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
};
}
