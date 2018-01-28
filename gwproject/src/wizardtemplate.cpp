/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes
#include <wizardtemplate.h>
#include <ui_wizardtemplate.h>
//// end includes

//// begin GhostWriter specific includes
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin WizardTemplate static definitions
//// end WizardTemplate static definitions

//// begin WizardTemplate static functions
//// end WizardTemplate static functions

//// begin WizardTemplate public member methods
/**********************************************************************************************************************/
GWProject::WizardTemplate::WizardTemplate(QWidget *parent) :
    QWidget(parent),
    _form(new Ui::WizardTemplateForm) {
    _form->setupUi(this);
}
/**********************************************************************************************************************/
GWProject::WizardTemplate::~WizardTemplate() {
    delete _form;
}
//// end WizardTemplate public member methods

//// begin WizardTemplate public member methods (internal use only)
//// end WizardTemplate public member methods (internal use only)

//// begin WizardTemplate protected member methods
void GWProject::WizardTemplate::init(const QString &filename) {
    QFile file(filename);
    if(file.exists()) {
        if(file.open(QIODevice::ReadOnly)) {
            _document = QJsonDocument::fromJson(file.readAll());
            if(_document.isObject()) {
                 QJsonObject obj = _document.object();
                 QJsonValue val = obj["templates"];
                 if(val.isArray()) {
                     QJsonArray array = val.toArray();
                     QJsonArray::iterator iter;
                     for(iter = array.begin(); iter != array.end();  ++iter) {
                         QJsonValue item = *iter;
                         if(item.isObject()) {
                             QJsonObject pro_temp = item.toObject();
                             QJsonValue item_name = pro_temp["name"];
                             if(item_name.isString()) {
                                 QListWidgetItem *listItem = new QListWidgetItem();
                                 listItem->setText(pro_temp["name"].toString());
                                 _form->listWidget->addItem(listItem);
                             }
                         }
                     }
                 }
            }
        }
    }
}
//// end WizardTemplate protected member methods

//// begin WizardTemplate protected member methods (internal use only)
//// begin WizardTemplate protected member methods (internal use only)

//// begin WizardTemplate private member methods
//// end WizardTemplate private member methods

//// begin WizardTemplate public slots
//// end WizardTemplate public slots

//// begin WizardTemplate protected slots
//// end WizardTemplate protected slots

//// begin WizardTemplate private slots
//// end WizardTemplate private slots
