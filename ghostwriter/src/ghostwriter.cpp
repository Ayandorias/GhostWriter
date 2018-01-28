/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */



//// begin includes
#include <QFileDialog>
//// end includes

//// begin GhostWriter specific includes
#include <ghostwriter.h>
#include <newwizard.h>
#include <logging.h>
#include "ui_ghostwriter.h"
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin GhostWriter static definitions
//// end GhostWriter static definitions

//// begin GhostWriter static functions
//// end GhostWriter static functions

//// begin GhostWriter public member methods
/**********************************************************************************************************************/
/**
 * @brief GW::GhostWriter::GhostWriter
 * @param parent
 */
GW::GhostWriter::GhostWriter(QWidget *parent)
	:QMainWindow(parent),
	  _ui(new Ui::GhostWriter) {

	_ui->setupUi(this);

	_menuBar = new QMenuBar(this);
	setMenuBar(_menuBar);

	_fileMenu = new QMenu(_menuBar);
	_fileMenu->setTitle(tr("&Datei"));

	_fileNewProject = new QAction(this);
	_fileNewProject->setText(tr("&New"));
	_fileNewProject->setShortcut(tr("Ctrl+N"));
	connect(_fileNewProject, SIGNAL(triggered(bool)), this, SLOT(createNewProject(bool)));

	_fileOpenProject = new QAction(this);
	_fileOpenProject->setText(tr("&Open"));
	_fileOpenProject->setShortcut(tr("Ctrl+O"));
	connect(_fileOpenProject, SIGNAL(triggered(bool)), this, SLOT(fileOpenProject(bool)));

	_fileSaveProject = new QAction(this);
	_fileSaveProject->setText(tr("&Save"));
	_fileSaveProject->setShortcut(tr("Ctrl+S"));
	connect(_fileSaveProject, SIGNAL(triggered(bool)), this, SLOT(fileSaveProject(bool)));

	_menuBar->addAction(_fileMenu->menuAction());
	_fileMenu->addAction(_fileNewProject);
	_fileMenu->addAction(_fileOpenProject);
	_fileMenu->addAction(_fileSaveProject);
}
/**********************************************************************************************************************/
/**
 * @brief GW::GhostWriter::~GhostWriter
 */
GW::GhostWriter::~GhostWriter() {
	delete _ui;
}
//// end GhostWriter public member methods

//// begin GhostWriter public member methods (internal use only)
//// end GhostWriter public member methods (internal use only)

//// begin GhostWriter protected member methods
//// end GhostWriter protected member methods

//// begin GhostWriter protected member methods (internal use only)
//// begin GhostWriter protected member methods (internal use only)

//// begin GhostWriter private member methods
//// end GhostWriter private member methods

//// begin GhostWriter public slots
//// end GhostWriter public slots

//// begin GhostWriter protected slots
/**********************************************************************************************************************/
/**
 * @brief GW::GhostWriter::createNewProject
 * @param trigger
 */
void GW::GhostWriter::createNewProject(bool trigger) {
    Q_UNUSED(trigger)

    NewProjectWizard wizard(this);
    wizard.show();
    wizard.exec();
}
/**********************************************************************************************************************/
/**
 * @brief GW::GhostWriter::fileOpenProject
 * @param trigger
 */
void GW::GhostWriter::fileOpenProject(bool trigger) {
	Q_UNUSED(trigger)
	qDebug() << "Open Project Dialog";
	QString filename = QFileDialog::getOpenFileName(this, tr("Open GhostWriter Projects"), "",
								 tr("GhostWriter Project File (*.gwprj)"));
	qDebug() << filename;
	if(filename.isEmpty()) {
		qDebug() << "Leerer String";
		return;
	}

	_ui->_binder->setProjectData(filename);
}
/**********************************************************************************************************************/
/**
 * @brief GW::GhostWriter::fileSaveProject
 * @param trigger
 */
void GW::GhostWriter::fileSaveProject(bool trigger) {
	Q_UNUSED(trigger)

	qDebug() << "void GW::GhostWriter::fileSaveProject(bool trigger) {";

	GW::ProjectModel *model = _ui->_binder->model();
	if(model != nullptr) {

		QVariant var = model->headerData(0, Qt::Horizontal);
		qDebug() << var.toString();

		qDebug() << "COUNT: " << model->rowCount() << "|" << model->columnCount();

		for(int32_t i = 0; i < model->rowCount(); ++i){
			QVariant variant = model->data(model->index(i,0));
			qDebug() << "COUNT: " << model->rowCount(model->index(i,0)) << "|" << model->columnCount(model->index(i,0));
			qDebug() << variant.toString();
		}

	}
}
//// end GhostWriter protected slots

//// begin GhostWriter private slots
//// end GhostWriter private slots
