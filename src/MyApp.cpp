 
 
#include <wx/wx.h>
#include "MyFrame.h"
 #include "MyApp.h"

 

wxIMPLEMENT_APP(MyApp);
 
bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}
 


