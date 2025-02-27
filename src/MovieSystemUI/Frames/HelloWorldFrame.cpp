#include "HelloWorldFrame.h"

MVS::HelloWorldFrame::HelloWorldFrame() : 
    wxFrame(NULL, wxID_ANY, "Hello World")
{
    wxMenu* menuFile = new wxMenu; 
    menuFile->Append(1, "&Hello...\tCtrl-H",
        "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");

    Bind(wxEVT_MENU, &HelloWorldFrame::OnHello, this, 1);
    Bind(wxEVT_MENU, &HelloWorldFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &HelloWorldFrame::OnExit, this, wxID_EXIT);
}

void MVS::HelloWorldFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

void MVS::HelloWorldFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}

void MVS::HelloWorldFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
        "About Hello World", wxOK | wxICON_INFORMATION);
}
