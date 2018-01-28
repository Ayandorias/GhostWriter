/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes
//// end includes

//// begin GhostWriter specific includes
#include <projectitem.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin ProjectItem static definitions
//// end ProjectItem static definitions

//// begin ProjectItem static functions
//// end ProjectItem static functions

//// begin ProjectItem public member methods
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::ProjectItem
 * @param data
 * @param parent
 */
GW::ProjectItem::ProjectItem(const QList<QVariant> &data, ProjectItem *parent) {
	m_parentItem = parent;
	m_itemData = data;
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::~ProjectItem
 */
GW::ProjectItem::~ProjectItem() {
	qDeleteAll(m_childItems);
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::appendChild
 * @param item
 */
void GW::ProjectItem::appendChild(ProjectItem *item) {
	m_childItems.append(item);
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::child
 * @param row
 * @return
 */
GW::ProjectItem* GW::ProjectItem::child(int row) {
	return m_childItems.value(row);
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::childCount
 * @return
 */
int GW::ProjectItem::childCount() const {
	return m_childItems.count();
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::columnCount
 * @return
 */
int GW::ProjectItem::columnCount() const {
	return m_itemData.count();
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::data
 * @param column
 * @return
 */
QVariant GW::ProjectItem::data(int column) const {
	return m_itemData.value(column);
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::parentItem
 * @return
 */
GW::ProjectItem* GW::ProjectItem::parentItem() {
	return m_parentItem;
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectItem::row
 * @return
 */
int GW::ProjectItem::row() const {
	if (m_parentItem)
		return m_parentItem->m_childItems.indexOf(const_cast<ProjectItem*>(this));

	return 0;
}
//// end ProjectItem public member methods

//// begin ProjectItem public member methods (internal use only)
//// end ProjectItem public member methods (internal use only)

//// begin ProjectItem protected member methods
//// end ProjectItem protected member methods

//// begin ProjectItem protected member methods (internal use only)
//// begin ProjectItem protected member methods (internal use only)

//// begin ProjectItem private member methods
//// end ProjectItem private member methods

//// begin ProjectItem public slots
//// end ProjectItem public slots

//// begin ProjectItem protected slots
//// end ProjectItem protected slots

//// begin ProjectItem private slots
//// end ProjectItem private slots
