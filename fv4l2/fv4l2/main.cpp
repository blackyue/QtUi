#include "fv4l2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fv4l2 w;
    w.show();

    return a.exec();
}
