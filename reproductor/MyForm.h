#pragma once
#include<iostream>

namespace reproductor {

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
	private: System::Windows::Forms::Button^ button1;

	protected:


//////////////////////////////IMPORTACIÓN DE ELEMENTOS EN LA BIBLIOTECA//////////////////////////////////

	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ fileAux;
	private: System::Windows::Forms::OpenFileDialog^ fileAux2;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>


//////////////////////////////FUNCIÓN PRINCIPAL DE INSTANCIAS DE OBJETOS //////////////////////////////////

		/*Función que está encargada de instanciar todos los componentes además de asimilarles parametros 
		iniciales.
		*/
		void InitializeComponent(void)
		{
			//PARTE DE INSTANCIAS 
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fileAux = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fileAux2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();

//////////////////////////////DECLARACIÓN DE LAS PROPIEDADES DE LOS OBJETOS//////////////////////////////////

			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Importar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Default;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(4, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 95);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Play";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(201, 130);
			this->trackBar1->Maximum = 50;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(175, 45);
			this->trackBar1->TabIndex = 4;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::TrackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Volumen";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L" ";
			// 
			// fileAuxn -> Sirve como archivo auxiliar al momento de leer los archivos de música
			// 
			this->fileAux->FileName = L" ";
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(4, 3);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(36, 36);
			this->axWindowsMediaPlayer1->TabIndex = 6;
			this->axWindowsMediaPlayer1->Visible = false;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &MyForm::AxWindowsMediaPlayer1_Enter);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(72, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(304, 121);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ListBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 156);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 10);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(4, 185);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(10, 10);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(4, 123);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(10, 10);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(104, 185);
			this->trackBar2->Maximum = 200;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(272, 45);
			this->trackBar2->TabIndex = 11;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::TrackBar2_Scroll);
			// 
			// MyForm -> Es el que hace referencia a la ventana principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(388, 237);
			//Parte donde se agregan los objetos en la ventana principal
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));//cambia icon
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Opacity = 0.9;
			this->Text = L"MikePlayer";

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


//////////////////////////////PARTE DE LA LÓGICA Y FUNCIONAMIENTO DE TODO EL PROGRAMA//////////////////////////////////

#pragma endregion
	//evento al dar click sobre el boton de importar
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { 
		openFileDialog1->ShowDialog();  //buscar archivo 
		//Parte de modificación del listbox 
		listBox1->Items->Add(openFileDialog1->FileName); //metodo que añade a la listbox el nombre del archivo mp3
		button4->Text = "Play";    
		this->button4->BackgroundImage = pictureBox3->Image;  
		this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;  //ajusta imagen 
		
		
	}

//Función de uso genérico del objeto encargado de reproducción de música
private: System::Void AxWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}

//Función DE ASIGNACIÓN E ARCHIVOS A ARCHIVO DE MÚSICA
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 //abertura del archivo y posterior reproduccion 
	 fileAux->FileName = openFileDialog1->FileName;
	 axWindowsMediaPlayer1->URL = fileAux->FileName;
	 axWindowsMediaPlayer1->Ctlcontrols->play();
}

//boton del funcionamiento play,pause y resume 
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// manejo de 3 casos 
	if (button4->Text == "Play") {
		button4->Text = "Pause";
		fileAux->FileName = openFileDialog1->FileName;

		axWindowsMediaPlayer1->URL = fileAux->FileName;
		axWindowsMediaPlayer1->Ctlcontrols->play();

		//Para la duración - problema 1 
		double songDuration = axWindowsMediaPlayer1->currentMedia->duration;
		this->trackBar2->Maximum = (int)songDuration;

		try {
			//cambio imagen boton 
			this->button4->BackgroundImage = pictureBox1->Image;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		}
		catch (...) {
		}
	
	}
	else if (button4->Text == "Pause") {
		 button4->Text = "Resume";
		 axWindowsMediaPlayer1->Ctlcontrols->pause();
		 //cambio imagen boton
		 this->button4->BackgroundImage = pictureBox2->Image;
		 this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

		 //Problema 1
		 double songDuration = axWindowsMediaPlayer1->currentMedia->duration;
		 this->trackBar2->Maximum = (int)songDuration;
	}
	 else{
		button4->Text = "Pause";
		 axWindowsMediaPlayer1->Ctlcontrols->play();
		 //cambio imagen boton
		 this->button4->BackgroundImage = pictureBox1->Image;
		 this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 //Problema 1
		 double songDuration = axWindowsMediaPlayer1->currentMedia->duration;
		 this->trackBar2->Maximum = (int)songDuration;
	}
}


//evento de trackbar que se origina al desplazar el selector , cambia volumen 
private: System::Void TrackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->settings->volume = trackBar1->Value;
}


//evento que se origina al desplazarse por la lista de la listbox
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 
	//abre el archivo 
	openFileDialog1->FileName = listBox1->SelectedItem->ToString();
	fileAux->FileName = openFileDialog1->FileName;

	axWindowsMediaPlayer1->URL = fileAux->FileName;
	
	if (button4->Text == "Resume" || button4->Text=="Play") {
		 
		 button4->Text = "Pause";
		//cambia la imagen del boton  
		 this->button4->BackgroundImage = pictureBox1->Image;
		 this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	}	 
	axWindowsMediaPlayer1->Ctlcontrols->play();

}

//Función que hace la asignación del tiempo a través del trackbar para modificar la reproducción en tiempo real
private: System::Void TrackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->currentPosition = (trackBar2->Value);
}
};
}
