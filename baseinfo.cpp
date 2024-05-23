#include "baseinfo.h"
#include <QLineEdit>
#include <QTextEdit>

BaseInfo::BaseInfo(QWidget *parent) : QWidget(parent)
{
    /*左侧*/
    UserNameLabel = new QLabel("用户名:");
    UserNameLineEdit = new QLineEdit;
    NameLabel = new QLabel("姓名:");
    NameLineEdit = new QLineEdit;
    SexLabel = new QLabel("性别:");
    SexComboBox = new QComboBox;
    SexComboBox->addItem(tr("女"));
    SexComboBox->addItem(tr("男"));
    DepartmentLabel = new QLabel("部门:");
    DepartmentTextEdit = new QTextEdit;
    AgeLabel = new QLabel("年龄:");
    AgeLineEdit = new QLineEdit;
    OtherLabel = new QLabel("备注:");
    OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    LeftLayout = new QGridLayout();
    LeftLayout->addWidget(UserNameLabel,0,0);
    LeftLayout->addWidget(UserNameLineEdit,0,1);
    LeftLayout->addWidget(NameLabel,1,0);
    LeftLayout->addWidget(NameLineEdit,1,1);
    LeftLayout->addWidget(SexLabel,2,0);
    LeftLayout->addWidget(SexComboBox,2,1);
    LeftLayout->addWidget(DepartmentLabel,3,0);
    LeftLayout->addWidget(DepartmentTextEdit,3,1);
    LeftLayout->addWidget(AgeLabel,4,0);
    LeftLayout->addWidget(AgeLineEdit,4,1);
    LeftLayout->addWidget(OtherLabel,5,0,1,2);
    LeftLayout->setColumnStretch(0,1);
    LeftLayout->setColumnStretch(1,3);
    /*右侧*/
    HeadLabel = new QLabel("头像");
    HeadIconLabel = new QLabel;
    QPixmap icon(":/new/prefix1/pic/laoda.png");
    HeadIconLabel->setPixmap(icon);
    HeadIconLabel->resize(icon.width(),icon.height());
    UpdateHeadBtn = new QPushButton("更新");
    TopRightLayout = new QHBoxLayout();
    TopRightLayout->setSpacing(20);
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadIconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);
    IntroductionLabel = new QLabel("个人说明:");
    IntroductionTextEdit = new QTextEdit;
    RightLayout = new QVBoxLayout();
    RightLayout->setMargin(10);
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);

    /*----------------------------------------------*/
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(LeftLayout,0,0);
    mainLayout->addLayout(RightLayout,0,1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
