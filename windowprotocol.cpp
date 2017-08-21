#include "windowprotocol.h"

WindowProtocol::WindowProtocol()
{

}

quint8 WindowProtocol::getWPNo() const
{
    return ADDR-OffsetADDR;
}

const QString &WindowProtocol::getAddress() const
{
    return QString::number(ADDR-OffsetADDR);
}

const QString &WindowProtocol::getWINMean() const
{
    return WINCode2WINMean.value(WIN);
}

const QString &WindowProtocol::getCOMMean() const
{
    if (COM==RD)
        return QString("read");
    else if (COM==WR)
        return QString("write");
    else
        return QString("null");
}

const QString &WindowProtocol::getDATAMean() const
{
    switch (WIN) {
    case 11:
    {
        break;
    }
    default:
        break;
    }
}

WindowProtocol &WindowProtocol::setWCNo(const quint8 num)
{
    ADDR=num+OffsetADDR;
    return *this;
}

WindowProtocol &WindowProtocol::setADDR(const quint8 addr)
{
    ADDR=addr;
    return *this;
}

WindowProtocol &WindowProtocol::setWIN(const quint16 win)
{
    WIN=win;
    return *this;
}

WindowProtocol &WindowProtocol::HVOnOffCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::HVOnOffCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::HVOnOffCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::HVOnOffCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::BaudRate(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::Status(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::ErrorCode(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::ControllerModel(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::ControllerSerialNumber(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::RS485SerialAddress(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::SerialTypeSelect(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::ChannelSelection(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::UnitPressure(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::Protect(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::FixedStep(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::DeviceNumberCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PowerMaxCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VTargetCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IProtectCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::SetPointCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::DeviceNumberCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PowerMaxCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VTargetCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IProtectCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::SetPointCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::DeviceNumberCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PowerMaxCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VTargetCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IProtectCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::SetPointCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::DeviceNumberCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PowerMaxCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VTargetCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IProtectCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::SetPointCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::TempFAN(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::TempHV1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::TempHV2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::InterlockStatus(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::StatusSetPoint(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::TempHV3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::TempHV4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VMeasuredCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IMeasuredCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PMeasuredCh1(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VMeasuredCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IMeasuredCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PMeasuredCh2(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VMeasuredCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IMeasuredCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PMeasuredCh3(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::VMeasuredCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::IMeasuredCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}
WindowProtocol &WindowProtocol::PMeasuredCh4(){return this->setWIN(WINMean2WINCode.value(__func__));}

WindowProtocol &WindowProtocol::setCOM(const quint8 com)
{
    COM=com;
    return *this;
}

WindowProtocol &WindowProtocol::Read()
{
    COM=RD;
    return *this;
}

WindowProtocol &WindowProtocol::Write()
{
    COM=WR;
    return *this;
}

WindowProtocol &WindowProtocol::setDATA(const quint8 aByte)
{
    DATA.clear();
    DATA<<aByte;
    return *this;
}

WindowProtocol &WindowProtocol::setDATA(const QByteArray &data)
{
    DATA.clear();
    DATA<<data;
    return *this;
}

const WindowProtocol &WindowProtocol::genMSG()
{
    MSG.clear();
    MSG<<ADDR<<IntStr2QBArr0Pad(WIN,szWIN)<<COM;
    if (COM!=RD)
        MSG<<DATA;
    MSG<<ETX;
    CRC=XORofAllBytesInQByteArr(MSG);
    MSG<<CRC;
    MSG.prepend(STX);
    return MSG;
}

WindowProtocol &WindowProtocol::fromQByteArray(const QByteArray &aMsg)
{
    WindowProtocol * tmpReturn = new WindowProtocol();
    quint8 pos=szSTX;
    tmpReturn->setADDR(aMsg.mid(pos,szADDR));
    pos+=szADDR;
    quint16 tmpWINCode=aMsg.mid(pos,szWIN).toInt();
    if (WINCode2WINMean.contains(tmpWINCode))
        tmpReturn->setWIN(tmpWINCode);
    return *tmpReturn;
}

quint8 WindowProtocol::getADDR() const
{
    return ADDR;
}

quint16 WindowProtocol::getWINCode() const
{
    return WIN;
}

quint8 WindowProtocol::getCOM() const
{
    return COM;
}

const QByteArray &WindowProtocol::getDATA() const
{
    return DATA;
}

quint16 WindowProtocol::getCRC() const
{
    return CRC;
}

const QByteArray &WindowProtocol::getMSG() const
{
    return MSG;
}

const QHash<QString , quint16> &WindowProtocol::WINMean2WINCode = * new QHash<QString, quint16>
({
     {"HVOnOffCh1", 11},
     {"HVOnOffCh2", 12},
     {"HVOnOffCh3", 13},
     {"HVOnOffCh4", 14},
     {"BaudRate", 108},
     {"Status", 205},
     {"ErrorCode", 206},
     {"ControllerModel", 319},
     {"ControllerSerialNumber", 323},
     {"RS485SerialAddress", 503},
     {"SerialTypeSelect", 504},
     {"ChannelSelection", 505},
     {"UnitPressure", 600},
     {"Protect", 602},
     {"FixedStep", 603},
     {"DeviceNumberCh1", 610},
     {"PowerMaxCh1", 612},
     {"VTargetCh1", 613},
     {"IProtectCh1", 614},
     {"SetPointCh1", 615},
     {"DeviceNumberCh2", 620},
     {"PowerMaxCh2", 622},
     {"VTargetCh2", 623},
     {"IProtectCh2", 624},
     {"SetPointCh2", 625},
     {"DeviceNumberCh3", 630},
     {"PowerMaxCh3", 632},
     {"VTargetCh3", 633},
     {"IProtectCh3", 634},
     {"SetPointCh3", 635},
     {"DeviceNumberCh4", 640},
     {"PowerMaxCh4", 642},
     {"VTargetCh4", 643},
     {"IProtectCh4", 644},
     {"SetPointCh4", 645},
     {"TempFAN", 800},
     {"TempHV1", 801},
     {"TempHV2", 802},
     {"InterlockStatus", 803},
     {"StatusSetPoint", 804},
     {"TempHV3", 808},
     {"TempHV4", 809},
     {"VMeasuredCh1", 810},
     {"IMeasuredCh1", 811},
     {"PMeasuredCh1", 812},
     {"VMeasuredCh2", 820},
     {"IMeasuredCh2", 821},
     {"PMeasuredCh2", 822},
     {"VMeasuredCh3", 830},
     {"IMeasuredCh3", 831},
     {"PMeasuredCh3", 832},
     {"VMeasuredCh4", 840},
     {"IMeasuredCh4", 841},
     {"PMeasuredCh4", 842}
});

const QHash<quint16, QString > &WindowProtocol::WINCode2WINMean = SwapKeyValOnOneToOneQHash(WindowProtocol::WINMean2WINCode);
