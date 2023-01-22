/*
* Copyright Disney Enterprises, Inc.  All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License
* and the following modification to it: Section 6 Trademarks.
* deleted and replaced with:
*
* 6. Trademarks. This License does not grant permission to use the
* trade names, trademarks, service marks, or product names of the
* Licensor and its affiliates, except as required for reproducing
* the content of the NOTICE file.
*
* You may obtain a copy of the License at
* http://www.apache.org/licenses/LICENSE-2.0
*
* @file ExprEditor.h
* @brief This provides an expression editor for SeExpr syntax with auto ui features
* @author  iray
*/
#ifndef ExprEditor_h
#define ExprEditor_h

#include <FL/FL_Text_Editor.H>

class ExprEditor : public Fl_Text_Editor {
public:
    ExprEditor() : Fl_Text_Editor(0, 0, 400, 200) {
        Fl_Text_Buffer* buff = new Fl_Text_Buffer();
        this->buffer(buff);
    }
};

#endif
