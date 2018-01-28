#ifndef HEADER_GUARD_GhostWriter_GhostWriter__GHOSTWRITER_H
#define HEADER_GUARD_GhostWriter_GhostWriter__GHOSTWRITER_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
//// end includes

//// begin GhostWriter specific includes
#include <logging.h>
#include <QAction>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
namespace Ui {
class GhostWriter;
}
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GW
{
/**
 * \class GhostWriter
 * \ingroup group_ghostwriter
 *
 * \brief
 *
 */
class GhostWriter : public QMainWindow
{
	Q_OBJECT
	//// begin GhostWriter public member methods
public:
	/// Constructor
	GhostWriter(QWidget *parent = 0);
	/// Destructor
	virtual ~GhostWriter();
	//// end GhostWriter public member methods

	//// begin GhostWriter public member methods (internal use only)
public:
	//// end GhostWriter public member methods (internal use only)

	//// begin GhostWriter protected member methods
protected:
	//// end GhostWriter protected member methods

	//// begin GhostWriter protected member methods (internal use only)
protected:
	//// begin GhostWriter protected member methods (internal use only)

	//// begin GhostWriter private member methods
private:
	//// end GhostWriter private member methods

	//// begin GhostWriter public member
public:
	//// end GhostWriter public member

	//// begin GhostWriter protected member
protected:
	//// end GhostWriter protected member

	//// begin GhostWriter private member
private:
		Ui::GhostWriter *_ui;
		QAction *_fileNewProject;
		QAction *_fileOpenProject;
		QAction *_fileSaveProject;
		QMenuBar *_menuBar;
		QMenu *_fileMenu;
	//// end GhostWriter private member

	//// begin GhostWriter public slots
public slots:
	//// end GhostWriter public slots

	//// begin GhostWriter protected slots
protected slots:
		void createNewProject(bool trigger);
		void fileOpenProject(bool trigger);
		void fileSaveProject(bool trigger);
	//// end GhostWriter protected slots

	//// begin GhostWriter private slots
private slots:
	//// end GhostWriter private slots

	//// begin GhostWriter signals
signals:
	//// end GhostWriter signals
};
}    // namespace GW
#endif // HEADER_GUARD_GhostWriter_GhostWriter__GHOSTWRITER_H
