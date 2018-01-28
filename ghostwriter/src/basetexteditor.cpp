#include "include/basetexteditor.h"
#include "ui_basetexteditor.h"

BaseTextEditor::BaseTextEditor(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::BaseTextEditor)
{
	ui->setupUi(this);
}

BaseTextEditor::~BaseTextEditor()
{
	delete ui;
}
