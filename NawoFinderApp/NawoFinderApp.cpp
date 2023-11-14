#include "NawoFinderApp.h"

NawoFinderApp::NawoFinderApp(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    Ui_NawoFinderAppClass::FindButtom->show();
    Ui_NawoFinderAppClass::FindedValuesTable->show();
}

NawoFinderApp::~NawoFinderApp()
{}
