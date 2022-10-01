#pragma once
#include <cstdlib>
#include <iostream>

namespace Lab04MarioIzaguirre1170522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int Posiciontortuga[71];
	int Posicionliebre[71];
	int* PosTortuga;
	int* PosLiebre;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ MOVTORT;
	private: System::Windows::Forms::TextBox^ POSTORT;


	private: System::Windows::Forms::TextBox^ POSLIEB;

	private: System::Windows::Forms::TextBox^ MOVLIEB;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MOVTORT = (gcnew System::Windows::Forms::TextBox());
			this->POSTORT = (gcnew System::Windows::Forms::TextBox());
			this->POSLIEB = (gcnew System::Windows::Forms::TextBox());
			this->MOVLIEB = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(118, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LIEBRE VS TORTUGA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::ForestGreen;
			this->label2->Location = System::Drawing::Point(42, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Movimiento Liebre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(371, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Movimiento Tortuga";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::ForestGreen;
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Movimiento";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label5->Location = System::Drawing::Point(335, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Movimiento";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::ForestGreen;
			this->label6->Location = System::Drawing::Point(12, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Posicion ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(335, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Posicion ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 53);
			this->button1->TabIndex = 7;
			this->button1->Text = L"COMENZAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(268, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 53);
			this->button2->TabIndex = 8;
			this->button2->Text = L"GENERAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MOVTORT
			// 
			this->MOVTORT->Location = System::Drawing::Point(417, 116);
			this->MOVTORT->Name = L"MOVTORT";
			this->MOVTORT->Size = System::Drawing::Size(137, 22);
			this->MOVTORT->TabIndex = 9;
			// 
			// POSTORT
			// 
			this->POSTORT->Location = System::Drawing::Point(417, 147);
			this->POSTORT->Name = L"POSTORT";
			this->POSTORT->Size = System::Drawing::Size(100, 22);
			this->POSTORT->TabIndex = 10;
			this->POSTORT->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// POSLIEB
			// 
			this->POSLIEB->Location = System::Drawing::Point(94, 147);
			this->POSLIEB->Name = L"POSLIEB";
			this->POSLIEB->Size = System::Drawing::Size(100, 22);
			this->POSLIEB->TabIndex = 13;
			// 
			// MOVLIEB
			// 
			this->MOVLIEB->Location = System::Drawing::Point(94, 119);
			this->MOVLIEB->Name = L"MOVLIEB";
			this->MOVLIEB->Size = System::Drawing::Size(144, 22);
			this->MOVLIEB->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 280);
			this->Controls->Add(this->POSLIEB);
			this->Controls->Add(this->MOVLIEB);
			this->Controls->Add(this->POSTORT);
			this->Controls->Add(this->MOVTORT);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"LIEBRE VS TORTUGA";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PosTortuga = &Posiciontortuga[0];
		PosLiebre = &Posicionliebre[0];
		MessageBox::Show("BANG! LISTO! ARRACAN!!!");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int MovimientoT;
		int Movimientol;

		// Movimiento de La Liebre
		srand(time(0));
		Movimientol = rand() % 10;
		if (Movimientol == 0) {
			PosLiebre = 0;
			MOVLIEB->Text = "Duerme (Zzzzzzz)";
		}
		else if (Movimientol <= 3 && Movimientol >= 1) {
			PosLiebre = PosLiebre + 9;
			MOVLIEB->Text = "Gran Salto";
		}
		else if (Movimientol >= 4 && Movimientol <= 5) {
			if (*PosLiebre <= 12) {
				*PosLiebre = 1;
				MOVLIEB->Text = "Gran Resbalon";
			}
			else
			{
				PosLiebre = PosLiebre - 12;
				MOVLIEB->Text = "Grans Resbalon";
			}
		}
		else if (Movimientol <= 7 && Movimientol >= 6) {
			PosLiebre = PosLiebre + 1;
			MOVLIEB->Text = "Salto Pequeño";
		}
		else {
			if (*PosLiebre <= 2) {
				*PosLiebre = 1;
				MOVLIEB->Text = "Gran Resbalon";
			}
			else {
				PosLiebre = PosLiebre - 2;
				MOVLIEB->Text = "Resbalon Pequeño";
			}
		}
		POSLIEB->Text = Convert::ToString(*PosLiebre);
		//Movimiento Tortuga
		srand(time(0));
		MovimientoT = rand() % 9 + 1;
		if (MovimientoT <= 5 && MovimientoT >= 1) {
			PosTortuga = PosTortuga + 3;
			MOVTORT->Text = "Paso Veloz!";

		}
		else if (MovimientoT >= 6 && MovimientoT <= 7)
		{
			if (*PosTortuga <= 6)
			{
				*PosTortuga = 1;
				MOVTORT->Text = "Resbalon!";
			}
			else
			{
				PosTortuga = PosTortuga - 6;
				MOVTORT->Text = "Resbalon!";
			}
		}
		else
		{
			PosTortuga = PosTortuga + 1;
			MOVTORT->Text = "Paso Lento!";
		}
	    POSTORT->Text = Convert::ToString(*PosTortuga);
	   //	 Si la tortuga se estan en la misma posicion de que la liebre
		if (*PosLiebre == *PosTortuga) {
			MOVLIEB->Text = "¡OUCH!";
			MOVTORT->Text = "Muerde a la Liebre";
		}
		// Verificar quien es el ganador
		if (*PosLiebre >= 70) {
			MessageBox::Show("“La liebre gana. Ni hablar” ");
		}
		else if (*PosTortuga >= 70) {
			MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO!  ");
		}
		//Verificar si llegan al mismo tiempo
		if (*PosTortuga >= 70 && *PosLiebre >= 70) {
			MessageBox::Show("ES UN EMPATE!");
		}
	}
		   private: System::Void Carrera_Load(System::Object^ sender, System::EventArgs^ e) {
			   for (size_t i = 0; i < 71; i++)
			   {
				   Posiciontortuga[i] = i;
				   Posicionliebre[i] = i;
			   }
		   }
		  
		  
};
}
