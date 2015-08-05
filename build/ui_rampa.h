/********************************************************************************
** Form generated from reading UI file 'rampa.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPA_H
#define UI_RAMPA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rampa
{
public:
    QSplitter *splitter;
    QPushButton *Start;
    QPushButton *Stop;
    QSplitter *splitter_2;
    QPushButton *Reset;
    QPushButton *Leer;
    QLineEdit *lineEdit;
    QPushButton *Conectar;

    void setupUi(QWidget *rampa)
    {
        if (rampa->objectName().isEmpty())
            rampa->setObjectName(QStringLiteral("rampa"));
        rampa->resize(291, 254);
        splitter = new QSplitter(rampa);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(9, 9, 170, 31));
        splitter->setOrientation(Qt::Horizontal);
        Start = new QPushButton(splitter);
        Start->setObjectName(QStringLiteral("Start"));
        splitter->addWidget(Start);
        Stop = new QPushButton(splitter);
        Stop->setObjectName(QStringLiteral("Stop"));
        splitter->addWidget(Stop);
        splitter_2 = new QSplitter(rampa);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 60, 170, 31));
        splitter_2->setOrientation(Qt::Horizontal);
        Reset = new QPushButton(splitter_2);
        Reset->setObjectName(QStringLiteral("Reset"));
        splitter_2->addWidget(Reset);
        Leer = new QPushButton(splitter_2);
        Leer->setObjectName(QStringLiteral("Leer"));
        splitter_2->addWidget(Leer);
        lineEdit = new QLineEdit(rampa);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 120, 113, 33));
        Conectar = new QPushButton(rampa);
        Conectar->setObjectName(QStringLiteral("Conectar"));
        Conectar->setGeometry(QRect(190, 10, 81, 81));

        retranslateUi(rampa);

        QMetaObject::connectSlotsByName(rampa);
    } // setupUi

    void retranslateUi(QWidget *rampa)
    {
        rampa->setWindowTitle(QApplication::translate("rampa", "rampa", 0));
        Start->setText(QApplication::translate("rampa", "Start", 0));
        Stop->setText(QApplication::translate("rampa", "Stop", 0));
        Reset->setText(QApplication::translate("rampa", "Reset", 0));
        Leer->setText(QApplication::translate("rampa", "Leer", 0));
        Conectar->setText(QApplication::translate("rampa", "Conectar", 0));
    } // retranslateUi

};

namespace Ui {
    class rampa: public Ui_rampa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPA_H
