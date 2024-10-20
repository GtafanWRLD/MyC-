#include "terminal1.h"

int Simple::cos1 = 11;
int Simple::cos2 = 11;
int Simple::cos3 = 11;
int Simple::cos4 = 11;


Simple::Simple(const wxString& title)
	: wxFrame(NULL, 1, title, wxDefaultPosition, wxSize(500, 500))
{

	Connect(12, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::zero1));

	Connect(14, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::jeden1));

	Connect(15, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::dwa1));

	Connect(16, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::trzy1));

	Connect(17, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::cztery1));

	Connect(18, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::piec1));

	Connect(19, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::szesc1));

	Connect(20, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::siedem1));

	Connect(21, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::osiem1));

	Connect(22, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::dziewiec1));

	Connect(2, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::red));

	Connect(4, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::green));


	Connect(3, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(Simple::yellow));

	


	wxPanel *panel = new wxPanel(this, 9);

	wxPanel *terminal_platniczy = new wxPanel(panel, 9, wxPoint(140, 20), wxSize(220, 430));



																																						

	zero1 = new wxButton(terminal_platniczy, 12, wxT("0"), wxPoint(85, 280), wxSize(50, 50));

	jeden1 = new wxButton(terminal_platniczy, 14, wxT("1"), wxPoint(25, 100), wxSize(50, 50));

	dwa1 = new wxButton(terminal_platniczy, 15, wxT("2"), wxPoint(85, 100), wxSize(50, 50));

	trzy1 = new wxButton(terminal_platniczy, 16, wxT("3"), wxPoint(145, 100), wxSize(50, 50));

	cztery1 = new wxButton(terminal_platniczy, 17, wxT("4"), wxPoint(25, 160), wxSize(50, 50));

	piec1 = new wxButton(terminal_platniczy, 18, wxT("5"), wxPoint(85, 160), wxSize(50, 50));

	szesc = new wxButton(terminal_platniczy, 19, wxT("6"), wxPoint(145, 160), wxSize(50, 50));

	siedem = new wxButton(terminal_platniczy, 20, wxT("7"), wxPoint(25, 220), wxSize(50, 50));

	osiem = new wxButton(terminal_platniczy, 21, wxT("8"), wxPoint(85, 220), wxSize(50, 50));

	dziewiec = new wxButton(terminal_platniczy, 22, wxT("9"), wxPoint(145, 220), wxSize(50, 50));

	red = new wxButton(terminal_platniczy, 2, wxT("R"), wxPoint(25, 340), wxSize(50, 50));

	yellow = new wxButton(terminal_platniczy, 3, wxT("Y"), wxPoint(85, 340), wxSize(50, 50));

	blue = new wxButton(terminal_platniczy, 4, wxT("G"), wxPoint(145, 340), wxSize(50, 50));

	text = new wxTextCtrl(terminal_platniczy, 9, wxT(""), wxPoint(25, 40), wxSize(170, 25));




	terminal_platniczy->SetBackgroundColour(wxColor("grey"));
	red->SetBackgroundColour(wxColor("red"));
	yellow->SetBackgroundColour(wxColor("yellow"));
	blue->SetBackgroundColour(wxColor("green"));
	text->SetForegroundColour(wxColour("orange"));

	Center();

}

void Simple::zero1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 0;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 0;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 0;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 0;
		text->AppendText("*");
	}
	else { Close(true); }
	
}

void Simple::jeden1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 1;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 1;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 1;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 1;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::dwa1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 2;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 2;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 2;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 2;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::trzy1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 3;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 3;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 3;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 3;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::cztery1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 4;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 4;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 4;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 4;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::piec1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 5;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 5;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 5;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 5;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::szesc1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 6;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 6;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 6;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 6;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::siedem1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 7;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 7;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 7;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 7;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::osiem1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 8;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 8;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 8;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 8;
		text->AppendText("*");
	}
	else { Close(true); }

}


void Simple::dziewiec1(wxCommandEvent& event)
{
	if (cos1 == 11) {
		cos1 = 9;
		text->AppendText("*");
	}
	else if (cos2 == 11) {
		cos2 = 9;
		text->AppendText("*");
	}
	else if (cos3 == 11) {
		cos3 = 9;
		text->AppendText("*");
	}
	else if (cos4 == 11) {
		cos4 = 9;
		text->AppendText("*");
	}
	else { Close(true); }

}

void Simple::red(wxCommandEvent& event)											
{
	if (cos1 == 11) {
		wxMessageDialog *dial = new wxMessageDialog(NULL,
			wxT("Nie wprowadzono zadniej liczby"), wxT("Info"), wxOK);
		dial->ShowModal();
	}
	cos1 = 11;
	cos2 = 11;
	cos3 = 11;
	cos4 = 11;
	text->SetValue("");
}
									
void Simple::green(wxCommandEvent& event)
{
	if (cos4 != 11) {
		cos1 = 11;
		cos2 = 11;
		cos3 = 11;
		cos4 = 11;
		text->SetValue("");
		wxMessageDialog *dial = new wxMessageDialog(NULL,
			wxT("Potwierdzono"), wxT("Info"), wxOK);
		dial->ShowModal();
	}
	else

	if (cos1 == 11) {
			cos1 = 11;
			cos2 = 11;
			cos3 = 11;
			cos4 = 11;
			text->SetValue("");
			wxMessageDialog *dial = new wxMessageDialog(NULL,
				wxT("Nie wprowadzono zadnej liczby"), wxT("Info"), wxOK);
			dial->ShowModal();
		}
	else
	if (cos2 == 11) {
				cos1 = 11;
				cos2 = 11;
				cos3 = 11;
				cos4 = 11;
				text->SetValue("");
				wxMessageDialog *dial = new wxMessageDialog(NULL,
					wxT("Za malo liczb"), wxT("Info"), wxOK);
				dial->ShowModal();
			}
	else
	if (cos3 == 11) {
					cos1 = 11;
					cos2 = 11;
					cos3 = 11;
					cos4 = 11;
					text->SetValue("");
					wxMessageDialog *dial = new wxMessageDialog(NULL,
						wxT("Za malo liczb"), wxT("Info"), wxOK);
					dial->ShowModal();
				}
	else
	if (cos4 == 11) {
		cos1 = 11;
		cos2 = 11;
		cos3 = 11;
		cos4 = 11;
		text->SetValue("");
		wxMessageDialog *dial = new wxMessageDialog(NULL,
			wxT("Za malo liczb"), wxT("Info"), wxOK);
		dial->ShowModal();
	}


}
																								
void Simple::yellow(wxCommandEvent& event)
{
	if (cos4 != 11) {

		cos4 = 11;
		text->SetValue("***");
	}
	else
		if (cos3 != 11) {
			cos3 = 11;
			text->SetValue("**");
	}
	else
	if (cos2 != 11) {
				cos2 = 11;
				text->SetValue("*");
			}
	else
	if (cos1 != 11) {
					cos1 = 11;
					text->SetValue("");
				}
	else {
					wxMessageDialog *dial = new wxMessageDialog(NULL,
						wxT("Nie podano zadnej liczby"), wxT("Info"), wxOK);
					dial->ShowModal();
				}
}