#include <QCoreApplication>
#include "windowprotocol.h"
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QByteArray> testArray;
    testArray.append("02 80 30 31 31 31 31 03 42 33");
    testArray.append("02 80 06 03 38 33");
    testArray.append("02 80 30 31 31 31 30 03 42 32");
    testArray.append("02 80 06 03 38 35");
    testArray.append("02 80 38 31 32 30 03 38 38");
    testArray.append("02 80 38 31 32 30 20 20 20 31 2E 35 45 2D 30 38 03 45 32");
    testArray.append("02 80 38 31 30 30 03 38 41");
    testArray.append("02 80 38 31 30 30 30 30 33 30 30 30 03 38 39");
    testArray.append("02 80 38 31 31 30 03 38 42");
    testArray.append("02 80 38 31 31 30 20 20 20 32 2E 39 45 2D 30 35 03 45 33");

    foreach(QByteArray aQBArr, testArray)
    {
        qDebug() << "=================";
        WindowProtocol test = WindowProtocol::fromQByteArray(QByteArray::fromHex(aQBArr));
        qDebug() << "ORIGIN: " << aQBArr;
        qDebug() << test.getMSG().toHex() << " -- " << test.getMSGMean();
        qDebug() << test.getADDR() << " -- " << test.getAddress();
        qDebug() << test.getWINCode() << " -- " << test.getWINMean();
        qDebug() << test.getCOM() << " -- " << test.getCOMMean();
        qDebug() << test.getDATA() << " -- " << test.getDATAMean();
    }


    return a.exec();
}
