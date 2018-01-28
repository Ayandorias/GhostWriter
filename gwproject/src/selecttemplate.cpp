/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes
//// end includes

//// begin GhostWriter specific includes
#include <selecttemplate.h>
#include <ui_selecttemplate.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin SelectTemplate static definitions
//// end SelectTemplate static definitions

//// begin SelectTemplate static functions
//// end SelectTemplate static functions

//// begin SelectTemplate public member methods
/**********************************************************************************************************************/
GWProject::SelectTemplate::SelectTemplate(QWidget *parent) :
    QWizardPage(parent),
    _form(new Ui::SelectTemplateForm) {
    _form->setupUi(this);
}
/**********************************************************************************************************************/
GWProject::SelectTemplate::~SelectTemplate() {
    delete _form;
}
//// end SelectTemplate public member methods

//// begin SelectTemplate public member methods (internal use only)
//// end SelectTemplate public member methods (internal use only)

//// begin SelectTemplate protected member methods
//// end SelectTemplate protected member methods

//// begin SelectTemplate protected member methods (internal use only)
//// begin SelectTemplate protected member methods (internal use only)

//// begin SelectTemplate private member methods
//// end SelectTemplate private member methods

//// begin SelectTemplate public slots
//// end SelectTemplate public slots

//// begin SelectTemplate protected slots
//// end SelectTemplate protected slots

//// begin SelectTemplate private slots
//// end SelectTemplate private slots
