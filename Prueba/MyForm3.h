#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
namespace Prueba {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ col_nomb;
	private: System::Windows::Forms::ColumnHeader^ col_apel;
	private: System::Windows::Forms::ColumnHeader^ col_grado;
	private: System::Windows::Forms::Button^ bt_mostr;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->col_nomb = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_apel = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_grado = (gcnew System::Windows::Forms::ColumnHeader());
			this->bt_mostr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->col_nomb, this->col_apel,
					this->col_grado
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(325, 32);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(403, 258);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// col_nomb
			// 
			this->col_nomb->Text = L"Nombre";
			// 
			// col_apel
			// 
			this->col_apel->Text = L"Apellido";
			// 
			// col_grado
			// 
			this->col_grado->Text = L"Grado";
			// 
			// bt_mostr
			// 
			this->bt_mostr->Location = System::Drawing::Point(90, 153);
			this->bt_mostr->Name = L"bt_mostr";
			this->bt_mostr->Size = System::Drawing::Size(115, 42);
			this->bt_mostr->TabIndex = 1;
			this->bt_mostr->Text = L"Mostrar";
			this->bt_mostr->UseVisualStyleBackColor = true;
			this->bt_mostr->Click += gcnew System::EventHandler(this, &MyForm3::bt_mostr_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(781, 304);
			this->Controls->Add(this->bt_mostr);
			this->Controls->Add(this->listView1);
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mostrar Datos";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_mostr_Click(System::Object^ sender, System::EventArgs^ e) {
		char mystring[100];
		FILE* fe;
		fe = fopen("info.txt", "r");

		char cadena[50], * dato1, * dato2, * dato3;
		rewind(fe);
		listView1->Items->Clear();
		bool found = false;
		do
		{
			fgets(mystring, 100, fe);
			dato1 = strtok(mystring, ";");
			dato2 = strtok(NULL, ";");
			dato3 = strtok(NULL, ";");
			String^ srtNew1 = gcnew String(dato1);
			String^ srtNew2 = gcnew String(dato2);
			String^ srtNew3 = gcnew String(dato3);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			this->listView1->Items->Add(listView1);
		} while (feof(fe) == 0);
	}
	};
}