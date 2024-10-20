#include <wx/wxprec.h>
#include <wx/richtext/richtextctrl.h>

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};
class MyFrame : public wxFrame
{
public:
	MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	wxPanel *must = new wxPanel;
	wxRichTextCtrl *text = new wxRichTextCtrl;
	void nonum(wxCommandEvent& event);
	void num(wxCommandEvent& event);
	void akapity(wxCommandEvent& event);
	void bloki(wxCommandEvent& event);
	void shot(wxCommandEvent& event);
	void open(wxCommandEvent& event);
	void save(wxCommandEvent& event);
	void close(wxCommandEvent& event);
	void left(wxCommandEvent& event);
	void right(wxCommandEvent& event);
	void mid(wxCommandEvent& event);
	void just(wxCommandEvent& event);
	void pogrubienie(wxCommandEvent& event);
	void pochylenie(wxCommandEvent& event);
	void podkreslenie(wxCommandEvent& event);
	void przekreslenie(wxCommandEvent& event);
	void kroj(wxCommandEvent& event);
	void rozmiar(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};


enum																									
{
	ID_open = 11
};
enum
{
	ID_zapisz = 12
};
enum
{
	ID_zamknij = 13
};
																									
enum
{
	ID_pogrub = 21
};
enum
{
	ID_pochyl = 22
};
enum
{
	ID_podkresl = 23
};
enum
{
	ID_przekresl = 24
};
enum
{
	ID_kroj = 25
};
enum
{
	ID_wielkosc = 26
};
																									
enum
{
	ID_qleft = 31
};
enum
{
	ID_qright = 32
};
enum
{
	ID_mid = 33
};
enum
{
	ID_just = 34
};

enum																							
{
	ID_nonum = 41
};
enum
{
	ID_num = 42
};

enum
{
	ID_akapit = 51
};
enum
{
	ID_blok = 52
};
enum
{
	ID_shot = 53
};

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_MENU(ID_open, MyFrame::open)
EVT_MENU(ID_zapisz, MyFrame::save)
EVT_MENU(ID_zamknij, MyFrame::close)
EVT_MENU(ID_pogrub, MyFrame::pogrubienie)
EVT_MENU(ID_pochyl, MyFrame::pochylenie)
EVT_MENU(ID_podkresl, MyFrame::podkreslenie)
EVT_MENU(ID_przekresl, MyFrame::przekreslenie)
EVT_MENU(ID_kroj, MyFrame::kroj)
EVT_MENU(ID_wielkosc, MyFrame::rozmiar)
EVT_MENU(ID_qleft, MyFrame::left)
EVT_MENU(ID_qright, MyFrame::right)
EVT_MENU(ID_mid, MyFrame::mid)
EVT_MENU(ID_just, MyFrame::just)
EVT_MENU(ID_nonum, MyFrame::nonum)
EVT_MENU(ID_num, MyFrame::num)
EVT_MENU(ID_akapit, MyFrame::akapity)
EVT_MENU(ID_blok, MyFrame::bloki)
EVT_MENU(ID_shot, MyFrame::shot)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	MyFrame *frame = new MyFrame("Edytor txt", wxPoint(0, 0), wxSize(800, 800));
	frame->Show(true);
	return true;
}

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size)
{
	must = new wxPanel(this, 0);
	text = new wxRichTextCtrl(
		must, 1, wxEmptyString, wxDefaultPosition,
		wxSize(800, 800));
	Center();

	wxMenu *menuPlik = new wxMenu;
	menuPlik->Append(ID_open, "&Otwórz");
	menuPlik->AppendSeparator();
	menuPlik->Append(ID_zapisz, "&Zapisz");
	menuPlik->AppendSeparator();
	menuPlik->Append(ID_zamknij, "&Zamknij");
	wxMenu *menuTekst = new wxMenu;
	menuTekst->Append(ID_pogrub, "&Pogrubienie");
	menuTekst->AppendSeparator();
	menuTekst->Append(ID_pochyl, "&Pochylenie");
	menuTekst->AppendSeparator();
	menuTekst->Append(ID_podkresl, "&Podkreœlenie");
	menuTekst->AppendSeparator();
	menuTekst->Append(ID_przekresl, "Przekreslenie");
	menuTekst->AppendSeparator();
	menuTekst->Append(ID_kroj, "&Krój czcionki");
	menuTekst->AppendSeparator();
	menuTekst->Append(ID_wielkosc, "&Wielkosc czcionki");
	wxMenu *menuAkapit = new wxMenu;
	menuAkapit->Append(ID_qleft, "&Wyrównaj do lewej");
	menuAkapit->AppendSeparator();
	menuAkapit->Append(ID_qright, "&Wyrównaj do prawej");
	menuAkapit->AppendSeparator();
	menuAkapit->Append(ID_mid, "&Wysrodkowanie");
	menuAkapit->AppendSeparator();
	menuAkapit->Append(ID_just, "&Justowanie");
	wxMenu *menuPunktory = new wxMenu;
	menuPunktory->Append(ID_nonum, "&Nienumerowane");
	menuPunktory->AppendSeparator();
	menuPunktory->Append(ID_num, "&Numerowane");
	wxMenu *menuElementy = new wxMenu;
	menuElementy->Append(ID_akapit, "&Akapit");
	menuElementy->AppendSeparator();
	menuElementy->Append(ID_blok, "&Blok");
	menuElementy->AppendSeparator();
	menuElementy->Append(ID_shot, "&Zdjêcie");
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append(menuPlik, "&Plik");
	menuBar->Append(menuTekst, "&Tekst");
	menuBar->Append(menuAkapit, "&Akapit");
	menuBar->Append(menuPunktory, "&Punktory");
	menuBar->Append(menuElementy, "&Elementy");



	SetMenuBar(menuBar);

void MyFrame::open(wxCommandEvent& event)
{
}
void MyFrame::save(wxCommandEvent& event)
{
}
void MyFrame::close(wxCommandEvent& event)
{
	Close(true);
}

																						
void MyFrame::pogrubienie(wxCommandEvent& event)
{
	wxString a = MyFrame::MyFrame::text->GetStringSelection();
	wxString b = "<b>" + a + "</b>";
	wxString c = text->GetValue();
	long ilosc = a.length();
	wxString start = "<b>";
	wxString end = "</b>";
	long poczatekzazn = c.find(a, 0);
	long sub = a.Length();
	long konieczazn = poczatekzazn + sub;
	long check = a.find(start, 0);
	long it = a.find(end, 0);
		if (check >-1 and it > -1) {
			long onermstart = a.find(start, 0);
			wxString f = a.SubString(0, onermstart-1);
			long onermend = onermstart + 3;		
			long twormstart = a.find(end, 0);
			long twormend = twormstart + 4;
			wxString d = a.SubString(onermend, twormstart-1);
			wxString e = a.substr(twormend, sub);
			f.append("");
			f.append(d);
			f.append("");
			f.append(e);
			text->Replace(poczatekzazn, konieczazn, f);
		}
		else {
			text->Replace(poczatekzazn, konieczazn, b);
		}
}

void MyFrame::pochylenie(wxCommandEvent& event)
{
	wxString a = MyFrame::MyFrame::text->GetStringSelection();
	wxString b = "<i>" + a + "</i>";
	wxString c = text->GetValue();
	long ilosc = a.length();
	wxString start = "<i>";
	wxString end = "</i>";
	long poczatekzazn = c.find(a, 0);
	long sub = a.Length();
	long konieczazn = poczatekzazn + sub;
	long check = a.find(start, 0);
	long it = a.find(end, 0);
	if (check > -1 and it > -1) {
		long onermstart = a.find(start, 0);
		wxString f = a.SubString(0, onermstart - 1);
		long onermend = onermstart + 3;
		long twormstart = a.find(end, 0);
		long twormend = twormstart + 4;
		wxString d = a.SubString(onermend, twormstart - 1);
		wxString e = a.substr(twormend, sub);
		f.append("");
		f.append(d);
		f.append("");
		f.append(e);
		text->Replace(poczatekzazn, konieczazn, f);
	}
	else {
		text->Replace(poczatekzazn, konieczazn, b);
	}
}
void MyFrame::podkreslenie(wxCommandEvent& event)
{
	wxString a = MyFrame::MyFrame::text->GetStringSelection();
	wxString b = "<u>" + a + "</u>";
	wxString c = text->GetValue();
	long ilosc = a.length();
	wxString start = "<u>";
	wxString end = "</u>";
	long poczatekzazn = c.find(a, 0);
	long sub = a.Length();
	long konieczazn = poczatekzazn + sub;
	long check = a.find(start, 0);
	long it = a.find(end, 0);
	if (check > -1 and it > -1) {
		long onermstart = a.find(start, 0);
		wxString f = a.SubString(0, onermstart - 1);
		long onermend = onermstart + 3;
		long twormstart = a.find(end, 0);
		long twormend = twormstart + 4;
		wxString d = a.SubString(onermend, twormstart - 1);
		wxString e = a.substr(twormend, sub);
		f.append("");
		f.append(d);
		f.append("");
		f.append(e);
		text->Replace(poczatekzazn, konieczazn, f);
	}
	else {
		text->Replace(poczatekzazn, konieczazn, b);
	}
}


void MyFrame::przekreslenie(wxCommandEvent& event)
{
	wxString a = MyFrame::MyFrame::text->GetStringSelection();
	wxString b = "<s>" + a + "</s>";
	wxString c = text->GetValue();
	long ilosc = a.length();
	wxString start = "<s>";
	wxString end = "</s>";
	long poczatekzazn = c.find(a, 0);
	long sub = a.Length();
	long konieczazn = poczatekzazn + sub;
	long check = a.find(start, 0);
	long it = a.find(end, 0);
	if (check > -1 and it > -1) {
		long onermstart = a.find(start, 0);
		wxString f = a.SubString(0, onermstart - 1);
		long onermend = onermstart + 3;
		long twormstart = a.find(end, 0);
		long twormend = twormstart + 4;
		wxString d = a.SubString(onermend, twormstart - 1);
		wxString e = a.substr(twormend, sub);
		f.append("");
		f.append(d);
		f.append("");
		f.append(e);
		text->Replace(poczatekzazn, konieczazn, f);
	}
	else {
		text->Replace(poczatekzazn, konieczazn, b);
}
}

void MyFrame::nonum(wxCommandEvent& event)
{
}
void MyFrame::num(wxCommandEvent& event)
{
}																					
void MyFrame::akapity(wxCommandEvent& event)
{
}
void MyFrame::bloki(wxCommandEvent& event)
{
}
void MyFrame::shot(wxCommandEvent& event)
{
}
void MyFrame::kroj(wxCommandEvent& event)
{
}
void MyFrame::rozmiar(wxCommandEvent& event)
{
}
void MyFrame::left(wxCommandEvent& event)
{
}
void MyFrame::right(wxCommandEvent& event)
{
}
void MyFrame::mid(wxCommandEvent& event)
{
}
void MyFrame::just(wxCommandEvent& event)
{
}