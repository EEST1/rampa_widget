#include "rampa.h"
#include "rs232.h"
#include <stdio.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rampa w;
    w.show();

    return a.exec();
}
