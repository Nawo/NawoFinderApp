#include "NawoFinderApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NawoFinderApp w;
    w.show();
    return a.exec();
}
