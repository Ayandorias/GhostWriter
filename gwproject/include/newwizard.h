#ifndef HEADER_GUARD_GhostWriter_GhostWriter__NEW_WIZARD_H
#define HEADER_GUARD_GhostWriter_GhostWriter__NEW_WIZARD_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
//// end includes

//// begin GhostWriter specific includes
#include <gwproject_global.h>
#include <QWizard>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GWProject
{
/**
 * \class NewWizard
 * \ingroup group_ghostwriter_project
 *
 * \brief
 *
 */
class GHOSTSDKSHARED_EXPORT NewWizard : public QWizard
{
    Q_OBJECT
    //// begin NewWizard public member methods
public:
    /// Constructor
    NewWizard();
    /// Destructor
    virtual ~NewWizard();
    //// end NewWizard public member methods

    //// begin NewWizard public member methods (internal use only)
public:
    //// end NewWizard public member methods (internal use only)

    //// begin NewWizard protected member methods
protected:
    //// end NewWizard protected member methods

    //// begin NewWizard protected member methods (internal use only)
protected:
    //// begin NewWizard protected member methods (internal use only)

    //// begin NewWizard private member methods
private:
    //// end NewWizard private member methods

    //// begin NewWizard public member
public:
    //// end NewWizard public member

    //// begin NewWizard protected member
protected:
    //// end NewWizard protected member

    //// begin NewWizard private member
private:
    //// end NewWizard private member

    //// begin NewWizard public slots
public slots:
    //// end NewWizard public slots

    //// begin NewWizard protected slots
protected slots:
    //// end NewWizard protected slots

    //// begin NewWizard private slots
private slots:
    //// end NewWizard private slots

    //// begin NewWizard signals
signals:
    //// end NewWizard signals
};
}    // namespace GWProject
#endif // HEADER_GUARD_GhostWriter_GhostWriter__NEW_WIZARD_H


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
GWProject::NewWizard::NewWizard()
    :QWizard() {
}
/**********************************************************************************************************************/
GWProject::NewWizard::~NewWizard() {
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


#ifndef NEWPROJECTWIZARD_H
#define NEWPROJECTWIZARD_H

#include <ghost-sdk_global.h>
#include <QWizard>

namespace Ui {
class NewProjectWizard;
}

class  NewProjectWizard : public QWizard
{
    Q_OBJECT

public:
    explicit NewProjectWizard(QWidget *parent = 0);
    ~NewProjectWizard();

private:
    Ui::NewProjectWizard *ui;
};

#endif // NEWPROJECTWIZARD_H
