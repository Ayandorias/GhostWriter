#include "ghostwriter.h"
#include <QApplication>

#include <iostream>
#include <QDebug>

#include <logging.h>

#include <QWizard>
#include <QLabel>
#include <QVBoxLayout>
//QWizardPage *createIntroPage()
//{
//    QWizardPage *page = new QWizardPage;
//    page->setTitle("Introduction");

//    QLabel *label = new QLabel("This wizard will help you register your copy "
//                               "of Super Product Two.");
//    label->setWordWrap(true);

//    QVBoxLayout *layout = new QVBoxLayout;
//    layout->addWidget(label);
//    page->setLayout(layout);

//    return page;
//}

int main(int argc, char *argv[])
{
	ghInfo() << "Starting Ghostwriter rev 1 - Qt" << qVersion();

	QApplication a(argc, argv);
    GW::GhostWriter w;
    w.show();

//    QWizard wizard;
//    wizard.addPage(createIntroPage());
//    wizard.show();

	return a.exec();
}
