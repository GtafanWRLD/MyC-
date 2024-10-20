#include <wx/wx.h>
#include <wx/radiobut.h>
#include <wx/checkbox.h>

using namespace std;

class MyApp : public wxApp
{
public:
	wxRadioButton *przycisk1;
	wxRadioButton *przycisk2;
	wxRadioButton *przycisk3;
	wxCheckBox *pole1;
	wxCheckBox *pole2;
	wxCheckBox *pole4;
	wxCheckBox *pole3;
	wxListBox *cos;

	bool OnInit() override
	{
		auto window = new wxFrame(nullptr, wxID_ANY, "TERMINAL", wxPoint(-1, -1), wxSize(400, 400));
		window->SetBackgroundColour(wxColour("#ABABAB"));
		auto label1 = new wxStaticText(window, wxID_ANY, "Podaj ksztalt warzywa");
		label1->SetPosition(wxPoint(50, 50));
		przycisk1 = new wxRadioButton(window, wxID_ANY, "okragle warzywo");
		przycisk1->SetPosition(wxPoint(50, 70));
		przycisk2 = new wxRadioButton(window, wxID_ANY, "podluzne warzywo");
		przycisk2->SetPosition(wxPoint(50, 90));
		przycisk3 = new wxRadioButton(window, wxID_ANY, "dziwny ksztat");
		przycisk3->SetPosition(wxPoint(50, 110));

		auto label2 = new wxStaticText(window, wxID_ANY, "wybierz cechy ");
		label2->SetPosition(wxPoint(200, 50));
		pole1 = new wxCheckBox(window, wxID_ANY, "gladki", wxPoint(200, 70), wxDefaultSize, wxCHK_2STATE);
		pole2 = new wxCheckBox(window, wxID_ANY, "ogonek", wxPoint(200, 90), wxDefaultSize, wxCHK_2STATE);
		pole3 = new wxCheckBox(window, wxID_ANY, "kwiat", wxPoint(200, 130), wxDefaultSize, wxCHK_2STATE);
		pole4 = new wxCheckBox(window, wxID_ANY, " oczka", wxPoint(200, 110), wxDefaultSize, wxCHK_2STATE);
		auto label3 = new wxStaticText(window, wxID_ANY, "Jaki jest kolor warzywa?");
		label3->SetPosition(wxPoint(100, 180));
		const wxString choices[] = {"zielony", "zolty", "pomaranczowy", "bialy", "rozowy", "czerwony", "bordowy"};
		cos = new wxListBox(window, wxID_ANY, wxPoint(100, 200), wxDefaultSize, 7, choices);
		auto button1 = new wxButton(window, wxID_ANY, "sprawdz", wxPoint(10, 310), wxSize(60, 40));
		button1->Bind(wxEVT_BUTTON, &MyApp::checker, this);
		window->Show();
		return true;
	}
	void checker(wxCommandEvent&) {
		if (przycisk1->GetValue() == true && pole1->GetValue() == true && cos->GetSelection() == 5) {
			wxMessageBox("Pomidor!");
		}
		else if (przycisk2->GetValue() == true && pole1->GetValue() == true && cos->GetSelection() == 5) {
			wxMessageBox("Papryczka Chili!");
		}
		else if (przycisk2->GetValue() == true && pole2->GetValue() == true && cos->GetSelection() == 2) {
			wxMessageBox("Marchewka!");
		}
		else if (przycisk1->GetValue() == true && pole3->GetValue() == true && cos->GetSelection() == 3) {
			wxMessageBox("Kalafior!");
		}
		else if (przycisk1->GetValue() == true && pole2->GetValue() == true && cos->GetSelection() == 4) {
			wxMessageBox("Rzodkiewka");
		}
		else if (przycisk2->GetValue() == true && pole4->GetValue() == true && cos->GetSelection() == 0) {
			wxMessageBox("Groszek");
		}
		else if (przycisk2->GetValue() == true && pole2->GetValue() == true && cos->GetSelection() == 0) {
			wxMessageBox("Szparagi");
		}
		else if (przycisk3->GetValue() == true && pole1->GetValue() == true && cos->GetSelection() == 2) {
			wxMessageBox("zolta papryka");
		}
		else if (przycisk2->GetValue() == true && pole4->GetValue() == true && cos->GetSelection() == 2) {
			wxMessageBox("Kukurydza");
		}
		else if (przycisk3->GetValue() == true && pole4->GetValue() == true && cos->GetSelection() == 0) {
			wxMessageBox("Brokul!");
		}
		else if (przycisk1->GetValue() == true && pole2->GetValue() == true && cos->GetSelection() == 6) {
			wxMessageBox("Burak!");
		}
		else if (przycisk3->GetValue() == true && pole3->GetValue() == true && cos->GetSelection() == 0) {
			wxMessageBox("Kapusta!");
		}
		else if (przycisk2->GetValue() == true && pole1->GetValue() == true && cos->GetSelection() == 6) {
			wxMessageBox("Baklazan");
		}
		else if (przycisk1->GetValue() == true && pole1->GetValue() == true && cos->GetSelection() == 1) {
			wxMessageBox("Cebula");
		}
		else if (przycisk1->GetValue() == true && pole1->GetValue() == true && cos->GetSelection() == 0) {
			wxMessageBox("Ogórek");
		}
		else if (przycisk1->GetValue() == true && pole4->GetValue() == true && cos->GetSelection() == 1) {
			wxMessageBox("Ziemniak");
		}
		else {
			wxMessageBox("Nie ma takiego warzywa");
		}
	}
};
IMPLEMENT_APP(MyApp);
