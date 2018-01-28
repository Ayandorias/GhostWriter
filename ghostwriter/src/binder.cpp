/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes

#include <QDebug>
#include <QTreeView>
//// end includes

//// begin GhostWriter specific includes
#include <binder.h>
#include "ui_binder.h"
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin Binder static definitions
//// end Binder static definitions

//// begin Binder static functions
//// end Binder static functions

//// begin Binder public member methods
/**********************************************************************************************************************/
/**
 * @brief GW::Binder::Binder
 * @param parent
 */
GW::Binder::Binder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Binder),
    _model(nullptr)
{
    ui->setupUi(this);
}
/**********************************************************************************************************************/
/**
 * @brief GW::Binder::~Binder
 */
GW::Binder::~Binder()
{
    delete ui;
}
/**********************************************************************************************************************/
/**
 * @brief GW::Binder::model
 * @return
 */
GW::ProjectModel* GW::Binder::model() {
    return static_cast<GW::ProjectModel*>(ui->_binder->model());
}
/**********************************************************************************************************************/
/**
 * @brief GW::Binder::setProjectData
 * @param data
 * @return
 */
bool GW::Binder::setProjectData(const QString &data) {
    qDebug() << data;

    GW::ProjectModel *gwModel = model();
    if(gwModel != nullptr) {
        delete gwModel;
        gwModel = nullptr;
    }
    disconnect(ui->_binder, 0, 0, 0);

    QFile file(data);
    file.open(QIODevice::ReadOnly);
    _model = new GW::ProjectModel(file.readAll());
    file.close();

    ui->_binder->setModel(_model);
    ui->_binder->expandAll();
    ui->_binder->show();

    connect(ui->_binder, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(test(QModelIndex)));

    return true;
}
//// end Binder public member methods

//// begin Binder public member methods (internal use only)
//// end Binder public member methods (internal use only)

//// begin Binder protected member methods
//// end Binder protected member methods

//// begin Binder protected member methods (internal use only)
//// begin Binder protected member methods (internal use only)

//// begin Binder private member methods
//// end Binder private member methods

//// begin Binder public slots
/**********************************************************************************************************************/
/**
 * @brief GW::Binder::test
 * @param index
 */
void GW::Binder::test(QModelIndex index) {
    Q_UNUSED(index)

    qDebug() << "Hello World";
    GW::ProjectModel *model = static_cast<GW::ProjectModel*>(ui->_binder->model());

    QVariant variant = model->data(index);
    qDebug() << variant.toString();
}
//// end Binder public slots

//// begin Binder protected slots
//// end Binder protected slots

//// begin Binder private slots
//// end Binder private slots




