#include "MovieSystemApp.h"

bool MVS::MovieSystemApp::OnInit()
{
    SetAppDisplayName("MovieSystemUI");

    if (SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2) == FALSE)
    {
        wxLogWarning("Can't set process DPI awareness.\nUI issues might occur!");
    }

    auto* helloWorld = new HelloWorldFrame();
    helloWorld->Show();

    return true;
}

void MVS::MovieSystemApp::OnUnhandledException()
{
    try
    {
        std::rethrow_exception(std::current_exception());
    }
    catch (const std::exception& exception)
    {
        wxLogFatalError("Unhandled exception occured:\n%s", exception.what());
    }
}
