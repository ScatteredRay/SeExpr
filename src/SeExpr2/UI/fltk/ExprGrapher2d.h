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
* @file ExprGrapher2d.h
* @brief A 2d image graph view for expression editing previewing
* @author  jlacewel
*/
#ifndef ExprGrapher2d_h
#define ExprGrapher2d_h

#include <FL/FL_Widget.H>

class ExprGrapherView : public Fl_Widget {
public:
};

class ExprGrapherWidget : public Fl_Widget {
public:
    ExprGrapherWidget(int w, int h) : Fl_Widget(0, 0, w, h) {
    }

    void draw() {
    }
};

#endif

