#ifndef HEADER_GUARD_Ghostwriter_Ghostwriter__SDK_HPP
#define HEADER_GUARD_Ghostwriter_Ghostwriter__SDK_HPP

/*
 * Ghostwriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
//// end includes

//// begin Ghostwriter specific includes
#include <ghostsdk.h>
#include <QObject>
#include <QDebug>
//// end Ghostwriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin forward declarations
//// end forward declarations

//// begin extern declaration
//// end extern declaration

namespace GhostSDK
{
#define ghInfo qInfo

#if 0
/**
 * \class Logging
 * \ingroup group_logging
 *
 * \brief
 *
 */
class Logging : public QObject
{
	Q_OBJECT
	//// begin Logging public member methods
public:
	/// Constructor
	Logging(QObject *parent = nullptr);
	/// Destructor
	virtual ~Logging();
	///
	QDebug& operator << (const QString &message);
	//// end Logging public member methods

	//// begin Logging public member methods (internal use only)
public:
	//// end Logging public member methods (internal use only)

	//// begin Logging protected member methods
protected:
	//// end Logging protected member methods

	//// begin Logging protected member methods (internal use only)
protected:
	//// begin Logging protected member methods (internal use only)

	//// begin Logging private member methods
private:
	//// end Logging private member methods

	//// begin Logging public member
public:
	//// end Logging public member

	//// begin Logging protected member
protected:
	//// end Logging protected member

	//// begin Logging private member
private:
	//// end Logging private member

	//// begin Logging public slots
public slots:
	//// end Logging public slots

	//// begin Logging protected slots
protected slots:
	//// end Logging protected slots

	//// begin Logging private slots
private slots:
	//// end Logging private slots

	//// begin Logging signals
signals:
	//// end Logging signals
};
#endif
}    // namespace GhostSDK
#endif // HEADER_GUARD_Ghostwriter_Ghostwriter__SDK_HPP
