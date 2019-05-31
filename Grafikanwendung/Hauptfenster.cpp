#include "Hauptfenster.h"


System::Void Grafikanwendung::Hauptfenster::panel_Leinwand_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
{
	// Leinwand / Zeichenfläche / Papier
	System::Drawing::Graphics^ leinwand = panel_Leinwand->CreateGraphics();

	// roten Stift anlegen
	System::Drawing::Pen^ roterStift = gcnew System::Drawing::Pen(Color::Red);
	roterStift->Width = 5;
	leinwand->DrawLine(roterStift, 10, 10, 400, 200);


	System::Drawing::Pen^ blauerStift = gcnew System::Drawing::Pen(Color::Blue, 5);
	leinwand->DrawLine(blauerStift, 20, 490, 490, 30);
	leinwand->DrawRectangle(blauerStift, (panel_Leinwand->Width/2)-50, (panel_Leinwand->Height/2)-50, 100, 100);


	System::Drawing::Pen^ gruenerStift = gcnew System::Drawing::Pen(Color::Green, 10);
	leinwand->DrawEllipse(gruenerStift, 350, 350, 100, 100);


	System::Drawing::SolidBrush^ gelberPinsel = gcnew System::Drawing::SolidBrush(Color::Yellow);
	leinwand->FillEllipse(gelberPinsel, 0, 0, 100, 100);


	System::Drawing::SolidBrush^ textPinsel = gcnew SolidBrush(Color::Violet);
	System::Drawing::Font^ schriftart = gcnew System::Drawing::Font("Arial", 60);
	leinwand->DrawString("Hallo", schriftart, textPinsel, 100, 100);
}


System::Void Grafikanwendung::Hauptfenster::button_LeinwandLeeren_Click(System::Object^  sender, System::EventArgs^  e)
{
	// Leinwand / Zeichenfläche / Papier
	System::Drawing::Graphics^ leinwand = panel_Leinwand->CreateGraphics();
	leinwand->Clear(Color::White);
}

System::Void Grafikanwendung::Hauptfenster::button_RechteckZeichnen_Click(System::Object^  sender, System::EventArgs^  e)
{
	// Leinwand / Zeichenfläche / Papier
	System::Drawing::Graphics^ leinwand = panel_Leinwand->CreateGraphics();
	Drawing::Color meineFarbe = button_FarbeWaehlen->BackColor;
	//Drawing::Color meineFarbe = colorDialog1->Color;
	System::Drawing::SolidBrush^ neuerPinsel = gcnew Drawing::SolidBrush(meineFarbe);
	leinwand->FillRectangle(neuerPinsel, 100, 100, 100, 100);
}

System::Void Grafikanwendung::Hauptfenster::button_FarbeWaehlen_Click(System::Object^  sender, System::EventArgs^  e)
{
	colorDialog1->ShowDialog();

	// hier geht es erst weiter wenn das Dialog Fenster geschlossen wurde

	// ausgewahelte Farbe anzeigen
	button_FarbeWaehlen->BackColor = colorDialog1->Color;

}