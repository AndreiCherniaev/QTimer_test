#include <QCoreApplication>
#include <signal.h>
#include "Rial.h"

void SigInt_Handler(int n_signal){
    printf("interrupted with code %u\n", n_signal); //Ctrl+C
    QCoreApplication::instance()->quit();  //exit(1);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Rial2 rial2(QCoreApplication::instance());
    Rial rial(QCoreApplication::instance());

    signal(SIGINT, &SigInt_Handler);

    int ret= QCoreApplication::exec();
    return ret;
}
