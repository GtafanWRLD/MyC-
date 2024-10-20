#include "terminal 1.2.h"
#include "terminal1.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
	Simple *simple = new Simple(wxT("Simple"));
	simple->Show(true);

	return true;
}