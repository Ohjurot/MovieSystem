#pragma once

#include <MovieSystem/Common/OS.h>
#include <MovieSystemUI/Frames/HelloWorldFrame.h>

#include <wx/wx.h>

namespace MVS
{
    /*!
     * @brief Main application class for the UI 
     */
    class MovieSystemApp : public wxApp
    {
        public:
            bool OnInit() override;
            void OnUnhandledException() override;
    };
}
