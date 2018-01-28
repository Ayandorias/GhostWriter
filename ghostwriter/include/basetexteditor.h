#ifndef BASETEXTEDITOR_H
#define BASETEXTEDITOR_H

#include <QWidget>

namespace Ui {
class BaseTextEditor;
}

class BaseTextEditor : public QWidget
{
	Q_OBJECT

public:
	explicit BaseTextEditor(QWidget *parent = 0);
	~BaseTextEditor();

private:
	Ui::BaseTextEditor *ui;
};

#endif // BASETEXTEDITOR_H
