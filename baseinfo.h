#ifndef BASEINFO_H
#define BASEINFO_H

#include <QWidget>
#include <QComboBox>
#include <QTextEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>

class BaseInfo : public QWidget
{
public:
    explicit BaseInfo(QWidget *parent = nullptr);

signals:

private:
    // Left
    QLabel *UserNameLabel;
    QLabel *NameLabel;
    QLabel *SexLabel;
    QLabel *DepartmentLabel;
    QLabel *AgeLabel;
    QLabel *OtherLabel;
    QLineEdit *UserNameLineEdit;
    QLineEdit *NameLineEdit;
    QComboBox *SexComboBox;
    QTextEdit *DepartmentTextEdit;
    QLineEdit *AgeLineEdit;
    QGridLayout *LeftLayout;
    // Right
    QLabel *HeadLabel;
    QLabel *HeadIconLabel;
    QPushButton *UpdateHeadBtn;
    QHBoxLayout *TopRightLayout;
    QLabel *IntroductionTextEdit;
    QVBoxLayout *RightLayout;
};

#endif // BASEINFO_H
