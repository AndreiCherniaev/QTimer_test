#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class Rial : public QObject
{
    Q_OBJECT
    QTimer tim;
public:
    Rial(QObject *parent);

public slots:
    void closeApp();
};

class Rial2 : public QObject
{
    Q_OBJECT
    QTimer tim;
public:
    Rial2(QObject *parent);

public slots:
    void PrintMsg();
};
