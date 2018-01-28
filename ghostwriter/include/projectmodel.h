#ifndef HEADER_GUARD_GhostWriter_GhostWriter__PROJECTMODEL_H
#define HEADER_GUARD_GhostWriter_GhostWriter__PROJECTMODEL_H

/*
 * GhostWriter
 *
 * Copyright (C) 2017 - 2020 Bruno Pierucki
 *
 * Author: Bruno Pierucki <bp@nebenwelten.net>
 *
 */
//// begin includes
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
//// end includes

//// begin GhostWriter specific includes
#include <logging.h>
#include <projectitem.h>
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
 * \class ProjectModel
 * \ingroup group_document
 *
 * \brief
 *
 */
class ProjectModel : public QAbstractItemModel
{
	Q_OBJECT
	//// begin ProjectModel public member methods
public:
	/// Constructor
	explicit ProjectModel(const QString &data, QObject *parent = 0);
	/// Destructor
	virtual ~ProjectModel();
	QVariant data(const QModelIndex &index, int role= Qt::DisplayRole) const override;
	Qt::ItemFlags flags(const QModelIndex &index) const override;
	QVariant headerData(int section, Qt::Orientation orientation,
						int role = Qt::DisplayRole) const override;
	QModelIndex index(int row, int column,
					  const QModelIndex &parent = QModelIndex()) const override;
	QModelIndex parent(const QModelIndex &index) const override;
	int rowCount(const QModelIndex &parent = QModelIndex()) const override;
	int columnCount(const QModelIndex &parent = QModelIndex()) const override;
	//// end ProjectModel public member methods

	//// begin ProjectModel public member methods (internal use only)
public:
	//// end ProjectModel public member methods (internal use only)

	//// begin ProjectModel protected member methods
protected:
	//// end ProjectModel protected member methods

	//// begin ProjectModel protected member methods (internal use only)
protected:
	//// begin ProjectModel protected member methods (internal use only)

	//// begin ProjectModel private member methods
private:
	void appendChild(QJsonValue obj, ProjectItem *parent);
	void setupModelData(QJsonObject &obj, ProjectItem *parent);
	//// end ProjectModel private member methods

	//// begin ProjectModel public member
public:
	//// end ProjectModel public member

	//// begin ProjectModel protected member
protected:
	//// end ProjectModel protected member

	//// begin ProjectModel private member
private:
	ProjectItem *rootItem;
	//// end ProjectModel private member

	//// begin ProjectModel public slots
public slots:
	//// end ProjectModel public slots

	//// begin ProjectModel protected slots
protected slots:
	//// end ProjectModel protected slots

	//// begin ProjectModel private slots
private slots:
	//// end ProjectModel private slots

	//// begin ProjectModel signals
signals:
	//// end ProjectModel signals
};
}    // namespace GW
#endif // HEADER_GUARD_GhostWriter_GhostWriter__PROJECTMODEL_H
