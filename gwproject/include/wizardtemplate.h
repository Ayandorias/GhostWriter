#ifndef HEADER_GUARD_GhostWriter_GhostWriter__WIZARD_TEMPLATE_H
#define HEADER_GUARD_GhostWriter_GhostWriter__WIZARD_TEMPLATE_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
#include <QJsonDocument>
#include <QWidget>
//// end includes

//// begin GhostWriter specific includes
#include <gwproject_global.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
namespace Ui {
    class WizardTemplateForm;
}
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GWProject
{
/**
 * \class WizardTemplate
 * \ingroup group_projects_oder_so
 *
 * \brief
 *
 */
class WizardTemplate : public QWidget
{
    Q_OBJECT
    //// begin WizardTemplate public member methods
public:
    /// Constructor
    WizardTemplate(QWidget *parent = 0);
    /// Destructor
    virtual ~WizardTemplate();
    //// end WizardTemplate public member methods

    //// begin WizardTemplate public member methods (internal use only)
public:
    //// end WizardTemplate public member methods (internal use only)

    //// begin WizardTemplate protected member methods
protected:
    void init(const QString &filename);
    //// end WizardTemplate protected member methods

    //// begin WizardTemplate protected member methods (internal use only)
protected:
    //// begin WizardTemplate protected member methods (internal use only)

    //// begin WizardTemplate private member methods
private:
    //// end WizardTemplate private member methods

    //// begin WizardTemplate public member
public:
    //// end WizardTemplate public member

    //// begin WizardTemplate protected member
protected:
    Ui::WizardTemplateForm *_form;
    QJsonDocument _document;
    //// end WizardTemplate protected member

    //// begin WizardTemplate private member
private:
    //// end WizardTemplate private member

    //// begin WizardTemplate public slots
public slots:
    //// end WizardTemplate public slots

    //// begin WizardTemplate protected slots
protected slots:
    //// end WizardTemplate protected slots

    //// begin WizardTemplate private slots
private slots:
    //// end WizardTemplate private slots

    //// begin WizardTemplate signals
signals:
    //// end WizardTemplate signals
};
}    // namespace GWProject
#endif // HEADER_GUARD_GhostWriter_GhostWriter__WIZARD_TEMPLATE_H
