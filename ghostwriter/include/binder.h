#ifndef HEADER_GUARD_GhostWriter_GhostWriter__BINDER_H
#define HEADER_GUARD_GhostWriter_GhostWriter__BINDER_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
#include <QWidget>
//// end includes

//// begin GhostWriter specific includes
#include <ghostwriter.h>
#include <projectitem.h>
#include <projectmodel.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
namespace Ui {
class Binder;
}
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GW
{
/**
 * \class Binder
 * \ingroup group_gui
 *
 * \brief
 *
 */
class Binder : public QWidget
{
    Q_OBJECT
    //// begin Binder public member methods
public:
    /// Constructor
    explicit Binder(QWidget *parent = 0);
    virtual ~Binder();
    GW::ProjectModel* model();
    bool setProjectData(const QString &data);
    /// Destructor
    //// end Binder public member methods

    //// begin Binder public member methods (internal use only)
public:
    //// end Binder public member methods (internal use only)

    //// begin Binder protected member methods
protected:
    //// end Binder protected member methods

    //// begin Binder protected member methods (internal use only)
protected:
    //// begin Binder protected member methods (internal use only)

    //// begin Binder private member methods
private:
    //// end Binder private member methods

    //// begin Binder public member
public:
    //// end Binder public member

    //// begin Binder protected member
protected:
    //// end Binder protected member

    //// begin Binder private member
private:
    Ui::Binder *ui;
    GW::ProjectModel *_model;
    //// end Binder private member

    //// begin Binder public slots
public slots:
    //// end Binder public slots

    //// begin Binder protected slots
protected slots:
    void test(QModelIndex index);
    //// end Binder protected slots

    //// begin Binder private slots
private slots:
    //// end Binder private slots

    //// begin Binder signals
signals:
    //// end Binder signals
};
}    // namespace GW
#endif // HEADER_GUARD_GhostWriter_GhostWriter__BINDER_H
