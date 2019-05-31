#pragma once

namespace Grafikanwendung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel_Leinwand;
	private: System::Windows::Forms::Button^  button_LeinwandLeeren;
	private: System::Windows::Forms::Button^  button_RechteckZeichnen;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button_FarbeWaehlen;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_Leinwand = (gcnew System::Windows::Forms::Panel());
			this->button_LeinwandLeeren = (gcnew System::Windows::Forms::Button());
			this->button_RechteckZeichnen = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button_FarbeWaehlen = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(653, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel_Leinwand
			// 
			this->panel_Leinwand->BackColor = System::Drawing::Color::White;
			this->panel_Leinwand->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Leinwand->Location = System::Drawing::Point(50, 50);
			this->panel_Leinwand->Name = L"panel_Leinwand";
			this->panel_Leinwand->Size = System::Drawing::Size(500, 500);
			this->panel_Leinwand->TabIndex = 1;
			this->panel_Leinwand->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Hauptfenster::panel_Leinwand_Paint);
			// 
			// button_LeinwandLeeren
			// 
			this->button_LeinwandLeeren->Location = System::Drawing::Point(596, 314);
			this->button_LeinwandLeeren->Name = L"button_LeinwandLeeren";
			this->button_LeinwandLeeren->Size = System::Drawing::Size(152, 23);
			this->button_LeinwandLeeren->TabIndex = 2;
			this->button_LeinwandLeeren->Text = L"Leinwamd leeren";
			this->button_LeinwandLeeren->UseVisualStyleBackColor = true;
			this->button_LeinwandLeeren->Click += gcnew System::EventHandler(this, &Hauptfenster::button_LeinwandLeeren_Click);
			// 
			// button_RechteckZeichnen
			// 
			this->button_RechteckZeichnen->Location = System::Drawing::Point(596, 377);
			this->button_RechteckZeichnen->Name = L"button_RechteckZeichnen";
			this->button_RechteckZeichnen->Size = System::Drawing::Size(152, 23);
			this->button_RechteckZeichnen->TabIndex = 3;
			this->button_RechteckZeichnen->Text = L"Rechteck zeichnen";
			this->button_RechteckZeichnen->UseVisualStyleBackColor = true;
			this->button_RechteckZeichnen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_RechteckZeichnen_Click);
			// 
			// button_FarbeWaehlen
			// 
			this->button_FarbeWaehlen->Location = System::Drawing::Point(596, 417);
			this->button_FarbeWaehlen->Name = L"button_FarbeWaehlen";
			this->button_FarbeWaehlen->Size = System::Drawing::Size(118, 23);
			this->button_FarbeWaehlen->TabIndex = 4;
			this->button_FarbeWaehlen->Text = L"Farbe waehlen";
			this->button_FarbeWaehlen->UseVisualStyleBackColor = true;
			this->button_FarbeWaehlen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_FarbeWaehlen_Click);
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(865, 671);
			this->Controls->Add(this->button_FarbeWaehlen);
			this->Controls->Add(this->button_RechteckZeichnen);
			this->Controls->Add(this->button_LeinwandLeeren);
			this->Controls->Add(this->panel_Leinwand);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Grafikanwendung";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel_Leinwand_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e);
	private: System::Void button_LeinwandLeeren_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_RechteckZeichnen_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_FarbeWaehlen_Click(System::Object^  sender, System::EventArgs^  e);
};
}
