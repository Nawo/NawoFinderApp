#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NawoFinderApp.h"

class NawoFinderApp : public QMainWindow, public Ui::NawoFinderAppClass
{
    Q_OBJECT

public:
    NawoFinderApp(QWidget *parent = nullptr);
    ~NawoFinderApp();

private:
     
};
