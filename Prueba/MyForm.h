#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"


namespace Prueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ lbdt1;
	protected:

	private: System::Windows::Forms::Label^ lbresul;
	private: System::Windows::Forms::Label^ lbdt2;
	private: System::Windows::Forms::TextBox^ txtdato1;
	private: System::Windows::Forms::TextBox^ txtresul;




	private: System::Windows::Forms::TextBox^ txtdato2;


	private: System::Windows::Forms::Button^ btsuma;
	private: System::Windows::Forms::Button^ btresta;
	private: System::Windows::Forms::Label^ lbdt3;
	private: System::Windows::Forms::TextBox^ txtdato3;
	private: System::Windows::Forms::Button^ btdivi;
	private: System::Windows::Forms::Button^ btmulti;
	private: System::Windows::Forms::Button^ llam_f2;
	private: System::Windows::Forms::Button^ datos;
	private: System::Windows::Forms::Button^ bt_dtsingr;
	private: System::Windows::Forms::Label^ lb_tit;










	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbdt1 = (gcnew System::Windows::Forms::Label());
			this->lbresul = (gcnew System::Windows::Forms::Label());
			this->lbdt2 = (gcnew System::Windows::Forms::Label());
			this->txtdato1 = (gcnew System::Windows::Forms::TextBox());
			this->txtresul = (gcnew System::Windows::Forms::TextBox());
			this->txtdato2 = (gcnew System::Windows::Forms::TextBox());
			this->btsuma = (gcnew System::Windows::Forms::Button());
			this->btresta = (gcnew System::Windows::Forms::Button());
			this->lbdt3 = (gcnew System::Windows::Forms::Label());
			this->txtdato3 = (gcnew System::Windows::Forms::TextBox());
			this->btdivi = (gcnew System::Windows::Forms::Button());
			this->btmulti = (gcnew System::Windows::Forms::Button());
			this->llam_f2 = (gcnew System::Windows::Forms::Button());
			this->datos = (gcnew System::Windows::Forms::Button());
			this->bt_dtsingr = (gcnew System::Windows::Forms::Button());
			this->lb_tit = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbdt1
			// 
			this->lbdt1->AutoSize = true;
			this->lbdt1->Font = (gcnew System::Drawing::Font(L"Mistral", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdt1->Location = System::Drawing::Point(174, 95);
			this->lbdt1->Name = L"lbdt1";
			this->lbdt1->Size = System::Drawing::Size(75, 34);
			this->lbdt1->TabIndex = 0;
			this->lbdt1->Text = L"Dato 1";
			this->lbdt1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lbresul
			// 
			this->lbresul->AutoSize = true;
			this->lbresul->Font = (gcnew System::Drawing::Font(L"Mistral", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbresul->Location = System::Drawing::Point(174, 234);
			this->lbresul->Name = L"lbresul";
			this->lbresul->Size = System::Drawing::Size(102, 34);
			this->lbresul->TabIndex = 1;
			this->lbresul->Text = L"Resultado";
			// 
			// lbdt2
			// 
			this->lbdt2->AutoSize = true;
			this->lbdt2->Font = (gcnew System::Drawing::Font(L"Mistral", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdt2->Location = System::Drawing::Point(174, 138);
			this->lbdt2->Name = L"lbdt2";
			this->lbdt2->Size = System::Drawing::Size(75, 34);
			this->lbdt2->TabIndex = 2;
			this->lbdt2->Text = L"Dato 2";
			// 
			// txtdato1
			// 
			this->txtdato1->Location = System::Drawing::Point(305, 107);
			this->txtdato1->Name = L"txtdato1";
			this->txtdato1->Size = System::Drawing::Size(100, 22);
			this->txtdato1->TabIndex = 3;
			this->txtdato1->TextChanged += gcnew System::EventHandler(this, &MyForm::dato1_TextChanged);
			// 
			// txtresul
			// 
			this->txtresul->Location = System::Drawing::Point(305, 246);
			this->txtresul->Name = L"txtresul";
			this->txtresul->Size = System::Drawing::Size(100, 22);
			this->txtresul->TabIndex = 4;
			// 
			// txtdato2
			// 
			this->txtdato2->Location = System::Drawing::Point(305, 150);
			this->txtdato2->Name = L"txtdato2";
			this->txtdato2->Size = System::Drawing::Size(100, 22);
			this->txtdato2->TabIndex = 5;
			// 
			// btsuma
			// 
			this->btsuma->BackColor = System::Drawing::Color::Transparent;
			this->btsuma->Location = System::Drawing::Point(180, 321);
			this->btsuma->Name = L"btsuma";
			this->btsuma->Size = System::Drawing::Size(75, 23);
			this->btsuma->TabIndex = 6;
			this->btsuma->Text = L"Suma";
			this->btsuma->UseVisualStyleBackColor = false;
			this->btsuma->Click += gcnew System::EventHandler(this, &MyForm::btsuma_Click);
			// 
			// btresta
			// 
			this->btresta->BackColor = System::Drawing::Color::Transparent;
			this->btresta->Location = System::Drawing::Point(363, 321);
			this->btresta->Name = L"btresta";
			this->btresta->Size = System::Drawing::Size(75, 23);
			this->btresta->TabIndex = 8;
			this->btresta->Text = L"Resta";
			this->btresta->UseVisualStyleBackColor = false;
			this->btresta->Click += gcnew System::EventHandler(this, &MyForm::btresta_Click);
			// 
			// lbdt3
			// 
			this->lbdt3->AutoSize = true;
			this->lbdt3->Font = (gcnew System::Drawing::Font(L"Mistral", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdt3->Location = System::Drawing::Point(174, 182);
			this->lbdt3->Name = L"lbdt3";
			this->lbdt3->Size = System::Drawing::Size(75, 34);
			this->lbdt3->TabIndex = 9;
			this->lbdt3->Text = L"Dato 3";
			// 
			// txtdato3
			// 
			this->txtdato3->Location = System::Drawing::Point(305, 194);
			this->txtdato3->Name = L"txtdato3";
			this->txtdato3->Size = System::Drawing::Size(100, 22);
			this->txtdato3->TabIndex = 10;
			// 
			// btdivi
			// 
			this->btdivi->BackColor = System::Drawing::Color::Transparent;
			this->btdivi->Location = System::Drawing::Point(720, 321);
			this->btdivi->Name = L"btdivi";
			this->btdivi->Size = System::Drawing::Size(75, 23);
			this->btdivi->TabIndex = 12;
			this->btdivi->Text = L"Divición";
			this->btdivi->UseVisualStyleBackColor = false;
			this->btdivi->Click += gcnew System::EventHandler(this, &MyForm::btdivi_Click);
			// 
			// btmulti
			// 
			this->btmulti->BackColor = System::Drawing::Color::Transparent;
			this->btmulti->Location = System::Drawing::Point(544, 321);
			this->btmulti->Name = L"btmulti";
			this->btmulti->Size = System::Drawing::Size(109, 23);
			this->btmulti->TabIndex = 11;
			this->btmulti->Text = L"Multiplicación";
			this->btmulti->UseVisualStyleBackColor = false;
			this->btmulti->Click += gcnew System::EventHandler(this, &MyForm::btmulti_Click);
			// 
			// llam_f2
			// 
			this->llam_f2->Location = System::Drawing::Point(649, 106);
			this->llam_f2->Name = L"llam_f2";
			this->llam_f2->Size = System::Drawing::Size(105, 23);
			this->llam_f2->TabIndex = 13;
			this->llam_f2->Text = L"Redes";
			this->llam_f2->UseVisualStyleBackColor = true;
			this->llam_f2->Click += gcnew System::EventHandler(this, &MyForm::llam_f2_Click);
			// 
			// datos
			// 
			this->datos->Location = System::Drawing::Point(645, 142);
			this->datos->Name = L"datos";
			this->datos->Size = System::Drawing::Size(109, 30);
			this->datos->TabIndex = 14;
			this->datos->Text = L"Ingresar Datos";
			this->datos->UseVisualStyleBackColor = true;
			this->datos->Click += gcnew System::EventHandler(this, &MyForm::datos_Click);
			// 
			// bt_dtsingr
			// 
			this->bt_dtsingr->Location = System::Drawing::Point(629, 192);
			this->bt_dtsingr->Name = L"bt_dtsingr";
			this->bt_dtsingr->Size = System::Drawing::Size(125, 27);
			this->bt_dtsingr->TabIndex = 15;
			this->bt_dtsingr->Text = L"Datos Ingersados";
			this->bt_dtsingr->UseVisualStyleBackColor = true;
			this->bt_dtsingr->Click += gcnew System::EventHandler(this, &MyForm::bt_dtsingr_Click);
			// 
			// lb_tit
			// 
			this->lb_tit->AutoSize = true;
			this->lb_tit->Font = (gcnew System::Drawing::Font(L"Mistral", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_tit->Location = System::Drawing::Point(430, 18);
			this->lb_tit->Name = L"lb_tit";
			this->lb_tit->Size = System::Drawing::Size(191, 52);
			this->lb_tit->TabIndex = 16;
			this->lb_tit->Text = L"Calculadora";
			this->lb_tit->Click += gcnew System::EventHandler(this, &MyForm::lb_tit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(938, 418);
			this->Controls->Add(this->lb_tit);
			this->Controls->Add(this->bt_dtsingr);
			this->Controls->Add(this->datos);
			this->Controls->Add(this->llam_f2);
			this->Controls->Add(this->btdivi);
			this->Controls->Add(this->btmulti);
			this->Controls->Add(this->txtdato3);
			this->Controls->Add(this->lbdt3);
			this->Controls->Add(this->btresta);
			this->Controls->Add(this->btsuma);
			this->Controls->Add(this->txtdato2);
			this->Controls->Add(this->txtresul);
			this->Controls->Add(this->txtdato1);
			this->Controls->Add(this->lbdt2);
			this->Controls->Add(this->lbresul);
			this->Controls->Add(this->lbdt1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculadora y menú";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dato1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btsuma_Click(System::Object^ sender, System::EventArgs^ e) {
		int a, b, c, suma;
		a = Convert::ToInt32(txtdato1->Text);
		b = Convert::ToInt32(txtdato2->Text);
		c = Convert::ToInt32(txtdato3->Text);
		suma = a + b + c;
		
		this->txtresul->Text = suma.ToString();
	}
	private: System::Void btresta_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a, b, c, resta;
		a = Convert::ToInt32(txtdato1->Text);
		b = Convert::ToInt32(txtdato2->Text);
		c = Convert::ToInt32(txtdato3->Text);
		resta = a - b - c;

		this->txtresul->Text = resta.ToString();
	}

	private: System::Void btmulti_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a, b, c, multi;
		a = Convert::ToInt32(txtdato1->Text);
		b = Convert::ToInt32(txtdato2->Text);
		c = Convert::ToInt32(txtdato3->Text);
		multi = a * b * c;

		this->txtresul->Text = multi.ToString();
	}
	private: System::Void btdivi_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a, b, c;
		float divi;
		a = Convert::ToInt32(txtdato1->Text);
		b = Convert::ToInt32(txtdato2->Text);
		c = Convert::ToInt32(txtdato3->Text);
		divi = a / b / c;

		this->txtresul->Text = divi.ToString();
	}
private: System::Void llam_f2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ F2 = gcnew MyForm1();
	F2->ShowDialog();
}

private: System::Void datos_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ F3 = gcnew MyForm2();
	F3->ShowDialog();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bt_dtsingr_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ F4 = gcnew MyForm3();
	F4->ShowDialog();
}
private: System::Void lb_tit_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}