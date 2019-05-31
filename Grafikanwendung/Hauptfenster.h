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
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TrackBar^  trackBar_Speed;
	private: System::Windows::Forms::Label^  label_punktx;
	private: System::Windows::Forms::Label^  label_punkty;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_Leinwand = (gcnew System::Windows::Forms::Panel());
			this->button_LeinwandLeeren = (gcnew System::Windows::Forms::Button());
			this->button_RechteckZeichnen = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button_FarbeWaehlen = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->trackBar_Speed = (gcnew System::Windows::Forms::TrackBar());
			this->label_punktx = (gcnew System::Windows::Forms::Label());
			this->label_punkty = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar_Speed))->BeginInit();
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
			// timer1
			// 
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Hauptfenster::timer1_Tick);
			// 
			// trackBar_Speed
			// 
			this->trackBar_Speed->Location = System::Drawing::Point(596, 469);
			this->trackBar_Speed->Minimum = 1;
			this->trackBar_Speed->Name = L"trackBar_Speed";
			this->trackBar_Speed->Size = System::Drawing::Size(225, 45);
			this->trackBar_Speed->TabIndex = 5;
			this->trackBar_Speed->Value = 10;
			this->trackBar_Speed->Scroll += gcnew System::EventHandler(this, &Hauptfenster::trackBar_Speed_Scroll);
			// 
			// label_punktx
			// 
			this->label_punktx->AutoSize = true;
			this->label_punktx->Location = System::Drawing::Point(611, 521);
			this->label_punktx->Name = L"label_punktx";
			this->label_punktx->Size = System::Drawing::Size(58, 13);
			this->label_punktx->TabIndex = 6;
			this->label_punktx->Text = L"Cursor in X";
			// 
			// label_punkty
			// 
			this->label_punkty->AutoSize = true;
			this->label_punkty->Location = System::Drawing::Point(611, 551);
			this->label_punkty->Name = L"label_punkty";
			this->label_punkty->Size = System::Drawing::Size(58, 13);
			this->label_punkty->TabIndex = 7;
			this->label_punkty->Text = L"Cursor in Y";
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(865, 671);
			this->Controls->Add(this->label_punkty);
			this->Controls->Add(this->label_punktx);
			this->Controls->Add(this->trackBar_Speed);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar_Speed))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel_Leinwand_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e);
	private: System::Void button_LeinwandLeeren_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_RechteckZeichnen_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_FarbeWaehlen_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void trackBar_Speed_Scroll(System::Object^  sender, System::EventArgs^  e);
};
}
