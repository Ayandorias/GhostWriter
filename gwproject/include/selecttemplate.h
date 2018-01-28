#ifndef HEADER_GUARD_GhostWriter_GhostWriter__SELECT_TEMPLATE_H
#define HEADER_GUARD_GhostWriter_GhostWriter__SELECT_TEMPLATE_H

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
#include <QWizardPage>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
namespace Ui {
    class SelectTemplateForm;
}
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GWProject
{
/**
 * \class SelectTemplate
 * \ingroup group_project
 *
 * \brief
 *
 */
class SelectTemplate : public QWizardPage
{
    Q_OBJECT
    //// begin SelectTemplate public member methods
public:
    /// Constructor
    SelectTemplate(QWidget *parent = nullptr);
    /// Destructor
    virtual ~SelectTemplate();
    //// end SelectTemplate public member methods

    //// begin SelectTemplate public member methods (internal use only)
public:
    //// end SelectTemplate public member methods (internal use only)

    //// begin SelectTemplate protected member methods
protected:
    //// end SelectTemplate protected member methods

    //// begin SelectTemplate protected member methods (internal use only)
protected:
    //// begin SelectTemplate protected member methods (internal use only)

    //// begin SelectTemplate private member methods
private:
    //// end SelectTemplate private member methods

    //// begin SelectTemplate public member
public:
    //// end SelectTemplate public member

    //// begin SelectTemplate protected member
protected:
    //// end SelectTemplate protected member

    //// begin SelectTemplate private member
private:
    Ui::SelectTemplateForm *_form;
    //// end SelectTemplate private member

    //// begin SelectTemplate public slots
public slots:
    //// end SelectTemplate public slots

    //// begin SelectTemplate protected slots
protected slots:
    //// end SelectTemplate protected slots

    //// begin SelectTemplate private slots
private slots:
    //// end SelectTemplate private slots

    //// begin SelectTemplate signals
signals:
    //// end SelectTemplate signals
};
}    // namespace GWProject
#endif // HEADER_GUARD_GhostWriter_GhostWriter__SELECT_TEMPLATE_H
