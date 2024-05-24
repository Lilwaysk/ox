#include "detail.h"

Detail::Detail(QWidget *parent) : QWidget(parent)
{
    NationalLabel = new QLabel("Coutry:");
    NationalComboBox = new QComboBox;
    NationalComboBox->insertItem(0,"CN");
    NationalComboBox->insertItem(1,"US");
    NationalComboBox->insertItem(2,"JP");
    ProvinceLabel = new QLabel("Province:");
    ProvinceComboBox = new QComboBox;
    ProvinceComboBox->insertItem(0,"Guangd");
    ProvinceComboBox->insertItem(1,"Beij");
    ProvinceComboBox->insertItem(2,"Guangx");
    CityLabel = new QLabel("City:");
    CityLineEdit = new QLineEdit;
    IntroductLabel = new QLabel("Personal Introduce:");
    IntroductTextEdit = new QTextEdit;
    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addWidget(NationalLabel,0,0);
    mainLayout->addWidget(NationalComboBox,0,1);
    mainLayout->addWidget(ProvinceLabel,1,0);
    mainLayout->addWidget(ProvinceComboBox,1,1);
    mainLayout->addWidget(CityLabel,2,0);
    mainLayout->addWidget(CityLineEdit,2,1);
    mainLayout->addWidget(IntroductLabel,3,0);
    mainLayout->addWidget(IntroductTextEdit,3,1);
}
