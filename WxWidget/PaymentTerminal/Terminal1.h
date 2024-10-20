#include <wx/wx.h>

class Simple : public wxFrame
{
public:
	static int cos1;
	static int cos2;
	static int cos3;
	static int cos4;
	
	Simple(const wxString& title);
	wxButton *zero1;
	wxButton *jeden1;
	wxButton *dwa1;
	wxButton *trzy1;
	wxButton *cztery1;
	wxButton *piec1;
	wxButton *szesc1;
	wxButton *siedem1;
	wxButton *osiem1;
	wxButton *dziewiec1;
	wxButton *red;
	wxButton *yellow;
	wxButton *blue;
	wxTextCtrl *text;																									
	
	void zero1(wxCommandEvent& event);
	void jeden1(wxCommandEvent& event);
	void dwa1(wxCommandEvent& event);
	void trzy1(wxCommandEvent& event);
	void cztery1(wxCommandEvent& event);
	void piec1(wxCommandEvent& event);
	void szesc1(wxCommandEvent& event);
	void siedem1(wxCommandEvent& event);
	void osiem1(wxCommandEvent& event);
	void dziewiec1(wxCommandEvent& event);
	void red(wxCommandEvent& event);
	void green(wxCommandEvent& event);
	void yellow(wxCommandEvent& event);







};
																									
