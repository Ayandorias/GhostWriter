/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes
#include "ui_newwizard.h"

#include <QDebug>
//// end includes

//// begin GhostWriter specific includes
#include <newwizard.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin NewWizard static definitions
//// end NewWizard static definitions

//// begin NewWizard static functions
//// end NewWizard static functions

//// begin NewWizard public member methods
/**********************************************************************************************************************/
GWProject::NewWizard::NewWizard(QWidget *parent) :
    QWizard(parent),
    _form(new Ui::NewWizardForm) {
    _form->setupUi(this);


    qDebug() << "Test";
}
/**********************************************************************************************************************/
GWProject::NewWizard::~NewWizard() {
    delete _form;
}
//// end NewWizard public member methods

//// begin NewWizard public member methods (internal use only)
//// end NewWizard public member methods (internal use only)

//// begin NewWizard protected member methods
//// end NewWizard protected member methods

//// begin NewWizard protected member methods (internal use only)
//// begin NewWizard protected member methods (internal use only)

//// begin NewWizard private member methods
//// end NewWizard private member methods

//// begin NewWizard public slots
//// end NewWizard public slots

//// begin NewWizard protected slots
//// end NewWizard protected slots

//// begin NewWizard private slots
//// end NewWizard private slots


//#include "include/newwizard.h"

//NewProjectWizard::NewProjectWizard(QWidget *parent) :
//    QWizard(parent),
//    ui(new Ui::NewProjectWizard)
//{
//    ui->setupUi(this);
//}

//NewProjectWizard::~NewProjectWizard()
//{
//    delete ui;
//}
