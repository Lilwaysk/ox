#ifndef NET_H
#define NET_H

#include <QNetworkInterface>
#include <QHostInfo>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QWidget>
#include <QMessageBox>

class Net : public QWidget
{
    Q_OBJECT
public:
    Net(QWidget *parent = 0);
    ~Net();
    void getHostInformation();
private:
    QLabel *hostLabel;
    QLineEdit *LineEditLocalHostName;
    QLabel *ipLabel;
    QLineEdit *LineEditAddr;
    QPushButton *detailBtn;
    QGridLayout *mainLayout;

private slots:
    void slotDetail();
};

#endif // NET_H
