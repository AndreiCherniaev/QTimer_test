#include "Rial.h"
#include <QThread>

Rial::Rial(QObject *parent)
    : QObject(parent)
{
    connect(&tim, &QTimer::timeout, this, &Rial::closeApp);
    tim.start(3000);
    QObject().thread()->sleep(5); //for(volatile quint64 i=0;i<10000000000;i++);
}

void Rial::closeApp(){
    qDebug() << "good bye";
    QCoreApplication::quit();
}

Rial2::Rial2(QObject *parent)
    : QObject(parent)
{
    qDebug() << "rial2";
    connect(&tim, &QTimer::timeout, this, &Rial2::PrintMsg);
    tim.start(1000);
}

void Rial2::PrintMsg(){
    qDebug() << "hello from Rial2";
}
