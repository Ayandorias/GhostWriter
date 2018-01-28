#ifndef HEADER_GUARD_GhostWriter_GhostWriter__PROJECTITEM_H
#define HEADER_GUARD_GhostWriter_GhostWriter__PROJECTITEM_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
#include <QList>
#include <QVariant>
//// end includes

//// begin GhostWriter specific includes
#include <logging.h>
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
 * \class ProjectItem
 * \ingroup group_doc
 *
 * \brief
 *
 */
class ProjectItem
{
	//// begin ProjectItem public member methods
public:
	/// Constructor
	explicit ProjectItem(const QList<QVariant> &data, ProjectItem *parentItem = 0);
	/// Destructor
	virtual ~ProjectItem();

	void appendChild(ProjectItem *child);

	ProjectItem *child(int row);
	int childCount() const;
	int columnCount() const;
	QVariant data(int column) const;
	int row() const;
	ProjectItem *parentItem();
	//// end ProjectItem public member methods

	//// begin ProjectItem public member methods (internal use only)
public:
	//// end ProjectItem public member methods (internal use only)

	//// begin ProjectItem protected member methods
protected:
	//// end ProjectItem protected member methods

	//// begin ProjectItem protected member methods (internal use only)
protected:
	//// begin ProjectItem protected member methods (internal use only)

	//// begin ProjectItem private member methods
private:
	//// end ProjectItem private member methods

	//// begin ProjectItem public member
public:
	//// end ProjectItem public member

	//// begin ProjectItem protected member
protected:
	//// end ProjectItem protected member

	//// begin ProjectItem private member
private:
	QList<ProjectItem*> m_childItems;
	QList<QVariant> m_itemData;
	ProjectItem *m_parentItem;
	//// end ProjectItem private member

	//// begin ProjectItem public slots
public slots:
	//// end ProjectItem public slots

	//// begin ProjectItem protected slots
protected slots:
	//// end ProjectItem protected slots

	//// begin ProjectItem private slots
private slots:
	//// end ProjectItem private slots

	//// begin ProjectItem signals
signals:
	//// end ProjectItem signals
};
}    // namespace GW
#endif // HEADER_GUARD_GhostWriter_GhostWriter__PROJECTITEM_H
