#ifndef HEADER_GUARD_GhostWriter_GhostWriter__GW_PROJECT_H
#define HEADER_GUARD_GhostWriter_GhostWriter__GW_PROJECT_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2019 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
#include <QObject>
//// end includes

//// begin GhostWriter specific includes
#include <gwproject_global.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GW
{
/**
 * \class GWProject
 * \ingroup group_gwproject
 *
 * \brief
 *
 */
class GWPROJECTSHARED_EXPORT GWProject : public QObject
{
    Q_OBJECT
    //// begin GWProject public member methods
public:
    /// Constructor
    GWProject();
    /// Destructor
    virtual ~GWProject();
    //// end GWProject public member methods

    //// begin GWProject public member methods (internal use only)
public:
    //// end GWProject public member methods (internal use only)

    //// begin GWProject protected member methods
protected:
    //// end GWProject protected member methods

    //// begin GWProject protected member methods (internal use only)
protected:
    //// begin GWProject protected member methods (internal use only)

    //// begin GWProject private member methods
private:
    //// end GWProject private member methods

    //// begin GWProject public member
public:
    //// end GWProject public member

    //// begin GWProject protected member
protected:
    //// end GWProject protected member

    //// begin GWProject private member
private:
    //// end GWProject private member

    //// begin GWProject public slots
public slots:
    //// end GWProject public slots

    //// begin GWProject protected slots
protected slots:
    //// end GWProject protected slots

    //// begin GWProject private slots
private slots:
    //// end GWProject private slots

    //// begin GWProject signals
signals:
    //// end GWProject signals
};
}    // namespace GW
#endif // HEADER_GUARD_GhostWriter_GhostWriter__GW_PROJECT_H
