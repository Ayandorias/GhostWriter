/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 */

//// begin includes

#include <QDebug>

#include <QStringList>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
//// end includes

//// begin GhostWriter specific includes
#include <projectmodel.h>
//// end GhostWriter specific includes

//// begin using namespaces
//// end using namespaces

//// begin global definition
//// end global definition

//// begin extern declaration
//// end extern declaration

//// begin ProjectModel static definitions
//// end ProjectModel static definitions

//// begin ProjectModel static functions
//// end ProjectModel static functions

//// begin ProjectModel public member methods
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::ProjectModel
 * @param data
 * @param parent
 */
GW::ProjectModel::ProjectModel(const QString &data, QObject *parent)
	: QAbstractItemModel(parent)
{
	QList<QVariant> rootData;

	QJsonParseError error;
	QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8().data(), &error);
	if(doc.isObject()) {
		QJsonObject obj = doc.object();
		rootData << obj["root"].toString();
		rootItem = new ProjectItem(rootData);
		setupModelData(obj, rootItem);
	}

}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::~ProjectModel
 */
GW::ProjectModel::~ProjectModel()
{
	delete rootItem;
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::columnCount
 * @param parent
 * @return
 */
int GW::ProjectModel::columnCount(const QModelIndex &parent) const
{
	if (parent.isValid())
		return static_cast<ProjectItem*>(parent.internalPointer())->columnCount();
	else
		return rootItem->columnCount();
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::data
 * @param index
 * @param role
 * @return
 */
QVariant GW::ProjectModel::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
		return QVariant();

	if (role != Qt::DisplayRole)
		return QVariant();

	ProjectItem *item = static_cast<ProjectItem*>(index.internalPointer());

	return item->data(index.column());
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::flags
 * @param index
 * @return
 */
Qt::ItemFlags GW::ProjectModel::flags(const QModelIndex &index) const
{
	if (!index.isValid())
		return 0;

	return QAbstractItemModel::flags(index);
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::headerData
 * @param section
 * @param orientation
 * @param role
 * @return
 */
QVariant GW::ProjectModel::headerData(int section, Qt::Orientation orientation,
							   int role) const
{
	if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
		return rootItem->data(section);

	return QVariant();
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::index
 * @param row
 * @param column
 * @param parent
 * @return
 */
QModelIndex GW::ProjectModel::index(int row, int column, const QModelIndex &parent)
			const
{
	if (!hasIndex(row, column, parent))
		return QModelIndex();

	ProjectItem *parentItem;

	if (!parent.isValid())
		parentItem = rootItem;
	else
		parentItem = static_cast<ProjectItem*>(parent.internalPointer());

	ProjectItem *childItem = parentItem->child(row);
	if (childItem)
		return createIndex(row, column, childItem);
	else
		return QModelIndex();
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::parent
 * @param index
 * @return
 */
QModelIndex GW::ProjectModel::parent(const QModelIndex &index) const
{
	if (!index.isValid())
		return QModelIndex();

	ProjectItem *childItem = static_cast<ProjectItem*>(index.internalPointer());
	ProjectItem *parentItem = childItem->parentItem();

	if (parentItem == rootItem)
		return QModelIndex();

	return createIndex(parentItem->row(), 0, parentItem);
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::rowCount
 * @param parent
 * @return
 */
int GW::ProjectModel::rowCount(const QModelIndex &parent) const
{
	ProjectItem *parentItem;
	if (parent.column() > 0)
		return 0;

	if (!parent.isValid())
		parentItem = rootItem;
	else
		parentItem = static_cast<ProjectItem*>(parent.internalPointer());

	return parentItem->childCount();
}
//// end ProjectModel public member methods

//// begin ProjectModel public member methods (internal use only)
//// end ProjectModel public member methods (internal use only)

//// begin ProjectModel protected member methods
//// end ProjectModel protected member methods

//// begin ProjectModel protected member methods (internal use only)
//// begin ProjectModel protected member methods (internal use only)

//// begin ProjectModel private member methods
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::appendChild
 * @param obj
 * @param parent
 */
void GW::ProjectModel::appendChild(QJsonValue obj, ProjectItem *parent) {
	if(obj.isObject()) {
		QJsonObject item = obj.toObject();
		QJsonValue category = item["category"];
		if(category.isString()) {
			QString cat = category.toString();
			QJsonValue name = item["name"];

			QList<QVariant> columnData;
			if(name.isString()) {
				columnData << name.toString();
				qDebug() << name.toString();
				ProjectItem *subitem = new ProjectItem(columnData, parent);
				parent->appendChild(subitem);
				if(cat == "folder") {
					QJsonValue child = item["children"];
					if(child.isArray()) {
						QJsonArray array = child.toArray();
						for(QJsonArray::iterator iter = array.begin(); iter != array.end(); ++iter) {
							QJsonValue value = *iter;
							appendChild(value, subitem);
						}
					}
				}
			}
		}
	}
}
/**********************************************************************************************************************/
/**
 * @brief GW::ProjectModel::setupModelData
 * @param data
 * @param parent
 */
void GW::ProjectModel::setupModelData(QJsonObject &obj, ProjectItem *parent)
{
	QList<ProjectItem*> parents;
	parents << parent;

	QJsonValue tree = obj["tree"];
	if(tree.isArray()) {
		QJsonArray array = tree.toArray();
		for(QJsonArray::iterator iter = array.begin(); iter != array.end(); ++iter) {
			appendChild(*iter, parents.last());
		}
	}
}
//// end ProjectModel private member methods

//// begin ProjectModel public slots
//// end ProjectModel public slots

//// begin ProjectModel protected slots
//// end ProjectModel protected slots

//// begin ProjectModel private slots
//// end ProjectModel private slots
