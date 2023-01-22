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
* @file ExprBrowser.h
* @brief Browser for a library of expressions from a tree of files
* @author  iray
*/
#ifndef ExprBrowser_h
#define ExprBrowser_h

#include <FL/FL_Widget.H>

class ExprBrowser : public Fl_Widget {
public:
    ExprBrowser(class ExprEditor* editor) : Fl_Widget(0, 0, 100, 100) {
    }

    void draw() {
    }
};

#endif
