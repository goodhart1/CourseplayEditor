/***************************************************************
 * Name:      Courseplay_EditorApp.h
 * Purpose:   Defines Application Class
 * Author:    Claus G. Pedersen aka Satis (satissis@gmail.com)
 * Created:   2013-06-08
 * Copyright: Claus G. Pedersen aka Satis (https://github.com/Satissis/CourseplayEditor)
 * License:
 **************************************************************/

#ifndef COURSEPLAY_EDITORAPP_H
#define COURSEPLAY_EDITORAPP_H

#include <wx/app.h>

class Courseplay_EditorApp : public wxApp
{
    public:
        virtual bool OnInit();
        virtual int OnExit();
        //void RecreateGUI();

#ifdef __WXDEBUGLOG__
        wxLog *logWindow;
#endif
};

DECLARE_APP(Courseplay_EditorApp);

#endif // COURSEPLAY_EDITORAPP_H
