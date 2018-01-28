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
namespace Ui {
    class NewWizardForm;
}
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
class GWPROJECTSHARED_EXPORT NewWizard : public QWizard
{
    Q_OBJECT
    //// begin NewWizard public member methods
public:
    /// Constructor
    NewWizard(QWidget *parent = nullptr);
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
    Ui::NewWizardForm *_form;
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
