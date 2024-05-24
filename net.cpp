#include "net.h"

#include <QNetworkInterface>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QWidget>
#include <QMessageBox>

Net::~Net(){}

Net::Net(QWidget *parent) :
    QWidget(parent)
{
    hostLabel = new QLabel("主机名：");
    LineEditLocalHostName = new QLineEdit;
    ipLabel = new QLabel("IP 地址:");
    LineEditAddr = new QLineEdit;
    detailBtn = new QPushButton("详细");
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(hostLabel,0,0);
    mainLayout->addWidget(LineEditLocalHostName,0,1);
    mainLayout->addWidget(ipLabel,1,0);
    mainLayout->addWidget(LineEditAddr,1,1);
    mainLayout->addWidget(detailBtn,2,0,1,2);
    getHostInformation();
    connect(detailBtn,SIGNAL(clicked()),this,SLOT(slotDetail()));
}

void Net::getHostInformation()
{
    QString localHostName = QHostInfo::localHostName();
    LineEditLocalHostName->setText(localHostName);
    QHostInfo hostInfo = QHostInfo::fromName(localHostName);
    QList<QHostAddress> listAddress = hostInfo.addresses();
    if (!listAddress.isEmpty())
        LineEditAddr->setText(listAddress.at(2).toString());
}

void Net::slotDetail()
{
    QString detail = "";
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();

    for(int i = 0;i < list.count(); ++i)
    {
        QNetworkInterface interface = list.at(i);
        detail += tr("设备:") + interface.name() + "\n";
        detail += tr("硬件地址:") + interface.hardwareAddress() + "\n";
        QList<QNetworkAddressEntry> entryList = interface.addressEntries();

        for(int j = 1;j < entryList.count(); ++j)
        {
            QNetworkAddressEntry entry = entryList.at(j);
            detail += "\t" + tr("IP 地址:") + entry.ip().toString() + "\n";
            detail += "\t" + tr("子网掩码:") + entry.netmask().toString() + "\n";
            detail += "\t" + tr("广播地址:") + entry.broadcast().toString() + "\n";
        }
    }
    QMessageBox::information(this,"Detail",detail);
}
