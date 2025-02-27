#pragma once

#include <wx/wx.h>

namespace MVS
{
    class HelloWorldFrame : public wxFrame
    {
        public:
            HelloWorldFrame();

        private:
            void OnHello(wxCommandEvent& event);
            void OnExit(wxCommandEvent& event);
            void OnAbout(wxCommandEvent& event);
    };
}
