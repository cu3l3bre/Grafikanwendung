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

	
	timer1->Start();
	timer1->Interval = trackBar_Speed->Value*10;
	button_LeinwandLeeren->PerformClick();
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
	System::Windows::Forms::DialogResult dialogErgebnis = colorDialog1->ShowDialog();

	// hier geht es erst weiter wenn das Dialog Fenster geschlossen wurde

	if (dialogErgebnis == System::Windows::Forms::DialogResult::OK)
	{
		// ausgewahelte Farbe anzeigen
		button_FarbeWaehlen->BackColor = colorDialog1->Color;
	}
}


System::Void Grafikanwendung::Hauptfenster::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	static int x1 = 0;
	static int y1 = 0;
	static int i1 = 0;
	static int x2 = 0;
	static int y2 = 495;
	// Leinwand / Zeichenfläche / Papier
	System::Drawing::Graphics^ leinwand = panel_Leinwand->CreateGraphics();

	
	System::Drawing::SolidBrush^ kreisPinsel = gcnew Drawing::SolidBrush(Color::Blue);


	if (x1 <= 500 || y1 <= 500)
	{
		leinwand->FillEllipse(kreisPinsel, x1, y1, 5, 5);
		x1 += 5;
		y1 += 5;
		i1++;
		if (i1 >= 10)
		{
			i1 = 0;
			button_LeinwandLeeren->PerformClick();
		}
		
	}

	if (x1 >= 500 || y1 >= 500)
	{
		if (x2 <= 500 || y2 >= 0)
		{
			leinwand->FillEllipse(kreisPinsel, x2, y2, 5, 5);
			x2 += 5;
			y2 -= 5;
			i1++;
			if (i1 >= 10)
			{
				i1 = 0;
				button_LeinwandLeeren->PerformClick();
			}
		}
		else
		{
			x1 = 0;
			y1 = 0;
			x2 = 0;
			y2 = 495;
			button_LeinwandLeeren->PerformClick();
		}
	}


	int punktx = Control::Cursor->Current->Position.X;
	int punkty = Control::Cursor->Current->Position.Y;



	label_punktx->Text = punktx.ToString();
	label_punkty->Text = punkty.ToString();



}



System::Void Grafikanwendung::Hauptfenster::trackBar_Speed_Scroll(System::Object^  sender, System::EventArgs^  e)
{
	timer1->Interval = trackBar_Speed->Value * 10;

}