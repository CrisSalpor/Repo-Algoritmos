#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

namespace Prueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nombre;
	protected:
	private: System::Windows::Forms::Label^ grado;
	private: System::Windows::Forms::Label^ apellido;
	private: System::Windows::Forms::TextBox^ txt_nomb;
	private: System::Windows::Forms::TextBox^ txt_apel;

	private: System::Windows::Forms::TextBox^ txt_grd;



	private: System::Windows::Forms::Button^ guardar;

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
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->grado = (gcnew System::Windows::Forms::Label());
			this->apellido = (gcnew System::Windows::Forms::Label());
			this->txt_nomb = (gcnew System::Windows::Forms::TextBox());
			this->txt_apel = (gcnew System::Windows::Forms::TextBox());
			this->txt_grd = (gcnew System::Windows::Forms::TextBox());
			this->guardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nombre
			// 
			this->nombre->AutoSize = true;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->Location = System::Drawing::Point(56, 54);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(101, 29);
			this->nombre->TabIndex = 0;
			this->nombre->Text = L"Nombre";
			// 
			// grado
			// 
			this->grado->AutoSize = true;
			this->grado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grado->Location = System::Drawing::Point(56, 176);
			this->grado->Name = L"grado";
			this->grado->Size = System::Drawing::Size(80, 29);
			this->grado->TabIndex = 1;
			this->grado->Text = L"Grado";
			// 
			// apellido
			// 
			this->apellido->AutoSize = true;
			this->apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellido->Location = System::Drawing::Point(56, 117);
			this->apellido->Name = L"apellido";
			this->apellido->Size = System::Drawing::Size(102, 29);
			this->apellido->TabIndex = 2;
			this->apellido->Text = L"Apellido";
			// 
			// txt_nomb
			// 
			this->txt_nomb->Location = System::Drawing::Point(172, 61);
			this->txt_nomb->Name = L"txt_nomb";
			this->txt_nomb->Size = System::Drawing::Size(411, 22);
			this->txt_nomb->TabIndex = 3;
			this->txt_nomb->TextChanged += gcnew System::EventHandler(this, &MyForm2::txt_nomb_TextChanged);
			// 
			// txt_apel
			// 
			this->txt_apel->Location = System::Drawing::Point(172, 124);
			this->txt_apel->Name = L"txt_apel";
			this->txt_apel->Size = System::Drawing::Size(411, 22);
			this->txt_apel->TabIndex = 4;
			this->txt_apel->TextChanged += gcnew System::EventHandler(this, &MyForm2::txt_apel_TextChanged);
			// 
			// txt_grd
			// 
			this->txt_grd->Location = System::Drawing::Point(172, 183);
			this->txt_grd->Name = L"txt_grd";
			this->txt_grd->Size = System::Drawing::Size(411, 22);
			this->txt_grd->TabIndex = 5;
			this->txt_grd->TextChanged += gcnew System::EventHandler(this, &MyForm2::txt_grd_TextChanged);
			// 
			// guardar
			// 
			this->guardar->Location = System::Drawing::Point(355, 248);
			this->guardar->Name = L"guardar";
			this->guardar->Size = System::Drawing::Size(99, 52);
			this->guardar->TabIndex = 6;
			this->guardar->Text = L"Guardar";
			this->guardar->UseVisualStyleBackColor = true;
			this->guardar->Click += gcnew System::EventHandler(this, &MyForm2::guardar_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(807, 335);
			this->Controls->Add(this->guardar);
			this->Controls->Add(this->txt_grd);
			this->Controls->Add(this->txt_apel);
			this->Controls->Add(this->txt_nomb);
			this->Controls->Add(this->apellido);
			this->Controls->Add(this->grado);
			this->Controls->Add(this->nombre);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alumnos";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^datos = gcnew StreamWriter("info.txt", "a+");

		datos->Write("\r\n");
		datos->Write(txt_nomb->Text); datos->Write(";");
		datos->Write(txt_apel->Text); datos->Write(";");
		datos->Write(txt_grd->Text); datos->Write(";");

		datos->Close();
	}
private: System::Void txt_nomb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_apel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_grd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
