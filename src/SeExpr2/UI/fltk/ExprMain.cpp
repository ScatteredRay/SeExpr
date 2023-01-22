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
*/

#include <iostream>
#include <string>

#include <FL/FL.H>
#include "ExprDialog.h"


int main(int argc, char *argv[]) {
    //ExprDialog dialog(0);
    ExprDialog* dialog = new ExprDialog();
    dialog->label("Expression Editor 2");
    dialog->show();

    /*if (argc < 2 || std::string(argv[1]) != "-automatedTest") {
        if (dialog.exec() == QDialog::Accepted)
            std::cerr << "returned expression: " << dialog.getExpressionString() << std::endl;
    } else {
        std::string str = "$u + $v";
        dialog.setExpressionString(str);
        if (dialog.getExpressionString() != str) {
            std::cerr << "test failed: " << dialog.getExpressionString() << " != " << str << std::endl;
            return 1;
        }
    }*/

    Fl::run();
    delete dialog;
    return 0;
}
