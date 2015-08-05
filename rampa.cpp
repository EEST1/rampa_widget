#include "rampa.h"
#include "rs232.h"
#include "ui_rampa.h"
#include <stdio.h>
#include <QMessageBox>
#include <QString>
#include <QDebug>





rampa::rampa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rampa)
{
    ui->setupUi(this);
}

rampa::~rampa()
{
    delete ui;
}

void rampa::on_Start_clicked(){

    unsigned char i=0;
    int cport_nr=16,        /* /dev/ttyUSB0  */
    bdrate=9600;       /* 9600 baud */

    char mode[]={'8','N','1',0},

            start[]="asf";



    if(RS232_OpenComport(cport_nr, bdrate, mode)){

        QMessageBox problema1;
        problema1.setText("No se puede abrir el puerto");
        problema1.setStandardButtons(QMessageBox::Ok);
        problema1.exec();
        }
        else{
            RS232_enableRTS(cport_nr);
            usleep(1000);

            RS232_cputs(cport_nr,&start[i]);
            usleep(5000);  /* sleep for 1 Second */

            RS232_disableRTS(cport_nr);

    }





 }

void rampa::on_Stop_clicked()
{


    unsigned char i=0;
    int cport_nr=16,        /* /dev/ttyUSB0  */
    bdrate=9600;       /* 9600 baud */

    char mode[]={'8','N','1',0},

            stop[]="adf";



    if(RS232_OpenComport(cport_nr, bdrate, mode)){

        QMessageBox problema1;
        problema1.setText("No se puede abrir el puerto");
        problema1.setStandardButtons(QMessageBox::Ok);
        problema1.exec();
        }
        else{
        RS232_enableRTS(cport_nr);
        usleep(1000);

        RS232_cputs(cport_nr,&stop[i]);
        usleep(5000);  /* sleep for 1 Second */

        RS232_disableRTS(cport_nr);

    }

}




void rampa::on_Reset_clicked()
{
    unsigned char i=0;
    int cport_nr=16;       /* 9600 baud */

    char    start[]="arf";

            RS232_enableRTS(cport_nr);
            usleep(1000);

            RS232_cputs(cport_nr,&start[i]);
            usleep(5000);  /* sleep for 5 miliSecond */

            RS232_disableRTS(cport_nr);


}

void rampa::on_Leer_clicked()
{

    unsigned char i=0;
    int n,
        cport_nr=16;

    char leer[]="alf",buf[12];

        n = RS232_PollComport(cport_nr, buf, 12);   //vacio el buffer
        n = RS232_PollComport(cport_nr, buf, 12);   //vacio el buffer

        RS232_enableRTS(cport_nr); //Captura el BUS
        usleep(1000);
        RS232_cputs(cport_nr,&leer[i]);
        usleep(5000);               //espera para asegurar el envío completo del comando

        RS232_disableRTS(cport_nr);  //libera el BUS
        usleep(100000);              //espero para leer el BUFFER


        n = RS232_PollComport(cport_nr, buf, 12);   //Leo EL BUFFER
        if(n>0) ui->lineEdit->setText(buf);         //C

}

void rampa::on_Conectar_clicked()
{
    int cport_nr=16,        /* /dev/ttyUSB0  */
        bdrate=9600;       /* 9600 baud */

    char mode[]={'8','N','1',0};


    if(RS232_OpenComport(cport_nr, bdrate, mode)){

        QMessageBox problema1;
        problema1.setText("No se puede abrir el puerto");
        problema1.setStandardButtons(QMessageBox::Ok);
        problema1.exec();
        }
    else{
        QMessageBox problema1;
        problema1.setText("Rampa en línea");
        problema1.setStandardButtons(QMessageBox::Ok);
        problema1.exec();
        }
}

