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
* @file ExprDialog.cpp
* @brief A basic editor/browser/previewer for expression editing
* @author  iray
*/

#include "ExprDialog.h"
#include "ExprEditor.h"
#include "ExprBrowser.h"
#include "ExprGrapher2d.h"
#include "ExprDialog.h"
//#include "ExprControlCollection.h"

ExprDialog::ExprDialog() : Fl_Window(600, 800) {
    ExprGrapherWidget* grapher;
    ExprEditor* editor;
    ExprBrowser* browser;

    //grapher = new ExprGrapherWidget(200, 200);
    //this->add(grapher);

    //controls = new ExprControlCollection();
    editor = new ExprEditor(/*controls*/);
    this->add(editor);

    //browser = new ExprBrowser(editor);
    //this->add(browser);
}
