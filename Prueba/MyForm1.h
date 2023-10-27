#pragma once

namespace Prueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ log_face;
	protected:

	private: System::Windows::Forms::Button^ act_img;
	protected:

	private: System::Windows::Forms::Label^ titulo;
	private: System::Windows::Forms::Label^ texto;
	private: System::Windows::Forms::PictureBox^ log_whats;



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
			this->log_face = (gcnew System::Windows::Forms::PictureBox());
			this->act_img = (gcnew System::Windows::Forms::Button());
			this->titulo = (gcnew System::Windows::Forms::Label());
			this->texto = (gcnew System::Windows::Forms::Label());
			this->log_whats = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_face))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_whats))->BeginInit();
			this->SuspendLayout();
			// 
			// log_face
			// 
			this->log_face->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->log_face->Location = System::Drawing::Point(373, 47);
			this->log_face->Name = L"log_face";
			this->log_face->Size = System::Drawing::Size(72, 66);
			this->log_face->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->log_face->TabIndex = 0;
			this->log_face->TabStop = false;
			this->log_face->Click += gcnew System::EventHandler(this, &MyForm1::log_face_Click);
			// 
			// act_img
			// 
			this->act_img->Location = System::Drawing::Point(75, 145);
			this->act_img->Name = L"act_img";
			this->act_img->Size = System::Drawing::Size(153, 23);
			this->act_img->TabIndex = 1;
			this->act_img->Text = L"Mostrar redes sociales";
			this->act_img->UseVisualStyleBackColor = true;
			this->act_img->Click += gcnew System::EventHandler(this, &MyForm1::act_img_Click);
			// 
			// titulo
			// 
			this->titulo->AutoSize = true;
			this->titulo->BackColor = System::Drawing::Color::Black;
			this->titulo->ForeColor = System::Drawing::Color::White;
			this->titulo->Location = System::Drawing::Point(285, 77);
			this->titulo->Name = L"titulo";
			this->titulo->Size = System::Drawing::Size(0, 16);
			this->titulo->TabIndex = 2;
			// 
			// texto
			// 
			this->texto->AutoSize = true;
			this->texto->BackColor = System::Drawing::Color::Black;
			this->texto->ForeColor = System::Drawing::SystemColors::Control;
			this->texto->Location = System::Drawing::Point(285, 173);
			this->texto->Name = L"texto";
			this->texto->Size = System::Drawing::Size(0, 16);
			this->texto->TabIndex = 3;
			// 
			// log_whats
			// 
			this->log_whats->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->log_whats->Location = System::Drawing::Point(373, 145);
			this->log_whats->Name = L"log_whats";
			this->log_whats->Size = System::Drawing::Size(72, 66);
			this->log_whats->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->log_whats->TabIndex = 4;
			this->log_whats->TabStop = false;
			this->log_whats->Click += gcnew System::EventHandler(this, &MyForm1::log_whats_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(724, 416);
			this->Controls->Add(this->log_whats);
			this->Controls->Add(this->texto);
			this->Controls->Add(this->titulo);
			this->Controls->Add(this->act_img);
			this->Controls->Add(this->log_face);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Redes Sociales";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_face))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_whats))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void act_img_Click(System::Object^ sender, System::EventArgs^ e) {
		log_face->Load("logo_facebook.png");
		log_whats->Load("logo_whatsapp.jpg");
		titulo->Text = "Facebook";
		texto->Text = "WhatsApp";
	}
	private: System::Void log_face_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void log_whats_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
