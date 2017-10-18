#include <QCoreApplication>
#include "src/windowprotocol.h"
#include "shared/commonthings.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     WindowProtocol aTest;
     QString TestContent;
     QByteArray SampleCommand;
     QByteArray ReGenCommand;
     int tmpInt;

    //The WindowProtocol Test Commands Below Are Taken From The DataSheet Of UHV4
    qDebug() << "===WINDOW PROTOCOL TESTER=========================================================";

    QList<QPair<QString,QByteArray>> testArray;
    testArray.append(QPair<QString,QByteArray>(QString("TURN ON CHANNEL 1, PC->CONTROLLER, PDF-Page 78/114|02803031313131034233"),
                                               aTest.setWPNo(0).HVOnOffCh1().Write().setON().genMSG()));
    testArray.append(QPair<QString,QByteArray>(QString("TURN ON CHANNEL 1, CONTROLLER->PC, PDF-Page 78/114|028006033833"),
                                               QByteArray()));
    testArray.append(QPair<QString,QByteArray>(QString("TURN OFF CHANNEL 1, PC->CONTROLLER, PDF-Page 78/114|02803031313130034232"),
                                               aTest.setWPNo(0).HVOnOffCh1().Write().setOFF().genMSG()));
    testArray.append(QPair<QString,QByteArray>(QString("TURN OFF CHANNEL 1, CONTROLLER->PC, PDF-Page 78/114|028006033835"),
                                               QByteArray()));
    testArray.append(QPair<QString,QByteArray>(QString("READ PRESSURE (WIN 812) CHANNEL 1, PC->CONTROLLER, PDF-Page 78/114|028038313230033838"),
                                               aTest.setWPNo(0).Read().PMeasured().setChNo(1).clearDATA().genMSG()));
                                             //aTest.setWPNo(0).Read().PMeasuredCh1().clearDATA().genMSG() IS THE SAME
    testArray.append(QPair<QString,QByteArray>(QString("READ PRESSURE (WIN 812) CHANNEL 1, CONTROLLER->PC, PDF-Page 78/114|028038313230202020312E35452D3038034532"),
                                               QByteArray()));
    testArray.append(QPair<QString,QByteArray>(QString("READ VOLTAGE (WIN 810) CHANNEL 1, PC->CONTROLLER, PDF-Page 79/114|028038313030033841"),
                                               aTest.setWPNo(0).Read().VMeasuredCh1().clearDATA().genMSG()));
                                             //aTest.setWPNo(0).Read().VMeasured().setChNo(1).clearDATA().genMSG() IS THE SAME
    testArray.append(QPair<QString,QByteArray>(QString("READ VOLTAGE (WIN 810) CHANNEL 1, CONTROLLER->PC, PDF-Page 79/114|028038313030303033303030033839"),
                                               QByteArray()));
    testArray.append(QPair<QString,QByteArray>(QString("READ CURRENT (WIN 811) CHANNEL 1, PC->CONTROLLER, PDF-Page 79/114|028038313130033842"),
                                               aTest.setWPNo(0).Read().IMeasured().setChNo(1).clearDATA().genMSG()));
                                             //aTest.setWPNo(0).Read().IMeasuredCh1().clearDATA().genMSG() IS THE SAME
    testArray.append(QPair<QString,QByteArray>(QString("READ CURRENT (WIN 811) CHANNEL 1, CONTROLLER->PC, PDF-Page 79/114|028038313130202020322E39452D3035034533"),
                                               QByteArray()));

    for (quint8 i=0; i<testArray.size(); ++i)
    {
        tmpInt = testArray.at(i).first.indexOf('|');
        TestContent = testArray.at(i).first.left(tmpInt);
        SampleCommand = testArray.at(i).first.mid(tmpInt+1).toLocal8Bit();
        ReGenCommand = testArray.at(i).second;
        qDebug().noquote() << TestContent;
        qDebug().noquote() << "   Sample Command:" << SampleCommand;
        qDebug().noquote() << "   Try Regenerate:" << (ReGenCommand.isEmpty()?"NOT APPLICABLE":ReGenCommand.toHex());
        aTest = WindowProtocol::fromQByteArray(QByteArray::fromHex(SampleCommand));
        qDebug().noquote() << "   Try Translate :" << aTest.getMSGMean();
        qDebug().noquote() << "            ADDR :" << QByteArray().append(aTest.getADDR()).toHex() << " -- " << aTest.getAddress();
        qDebug().noquote() << "             WIN :" << aTest.getWINCode()<< " -- " << aTest.getWINMean();
        qDebug().noquote() << "             COM :" << QByteArray().append(aTest.getCOM()).toHex() << " -- " << aTest.getCOMMean();
        qDebug().noquote() << "            DATA :" << aTest.getDATA().toHex() << " -- " << aTest.getDATAMean();
    }

    qDebug() << "===END OF TEST====================================================================";


    return a.exec();
}
