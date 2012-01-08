#ifndef ACTIONHANDLER_H
#define ACTIONHANDLER_H

#include <wx/wx.h>

class wxCommandEvent;

class MenuActionHandler : public wxEvtHandler
{
    public:
        MenuActionHandler();
        virtual void onActionFired(wxCommandEvent& event) = 0;
        virtual ~MenuActionHandler();
    protected:
    private:
};

#endif // ACTIONHANDLER_H
