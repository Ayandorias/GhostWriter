/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes
#include <ui_projecttemplatesoverview.h>
#include <QDebug>
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
//// end includes

//// begin GhostWriter specific includes
#include <projecttemplatesoverview.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin SelectTemplatesOverview static definitions
//// end SelectTemplatesOverview static definitions

//// begin SelectTemplatesOverview static functions
//// end SelectTemplatesOverview static functions

//// begin SelectTemplatesOverview public member methods
/**********************************************************************************************************************/
GWProject::ProjectTemplatesOverview::ProjectTemplatesOverview(QWidget *parent) :
    WizardTemplate(parent) {

    init(":/json/projects.json");
}
/**********************************************************************************************************************/
GWProject::ProjectTemplatesOverview::~ProjectTemplatesOverview() {
}
//// end SelectTemplatesOverview public member methods

//// begin SelectTemplatesOverview public member methods (internal use only)
//// end SelectTemplatesOverview public member methods (internal use only)

//// begin SelectTemplatesOverview protected member methods
//// end SelectTemplatesOverview protected member methods

//// begin SelectTemplatesOverview protected member methods (internal use only)
//// begin SelectTemplatesOverview protected member methods (internal use only)

//// begin SelectTemplatesOverview private member methods
//// end SelectTemplatesOverview private member methods

//// begin SelectTemplatesOverview public slots
//// end SelectTemplatesOverview public slots

//// begin SelectTemplatesOverview protected slots
//// end SelectTemplatesOverview protected slots

//// begin SelectTemplatesOverview private slots
//// end SelectTemplatesOverview private slots
