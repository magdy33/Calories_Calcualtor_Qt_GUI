/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calory_calculator
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *CaloryCountLabel;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *TimeLabel;
    QDoubleSpinBox *TimeSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *SlopLabel;
    QComboBox *SlopComboBox;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *WightLabel;
    QDoubleSpinBox *WeightSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *SpeedLabel;
    QDoubleSpinBox *SpeedSpinBox;

    void setupUi(QWidget *Calory_calculator)
    {
        if (Calory_calculator->objectName().isEmpty())
            Calory_calculator->setObjectName("Calory_calculator");
        Calory_calculator->resize(454, 184);
        verticalLayout = new QVBoxLayout(Calory_calculator);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(Calory_calculator);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_7->addWidget(label);

        CaloryCountLabel = new QLabel(Calory_calculator);
        CaloryCountLabel->setObjectName("CaloryCountLabel");
        QFont font1;
        font1.setPointSize(18);
        CaloryCountLabel->setFont(font1);

        horizontalLayout_7->addWidget(CaloryCountLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        TimeLabel = new QLabel(Calory_calculator);
        TimeLabel->setObjectName("TimeLabel");
        QFont font2;
        font2.setPointSize(11);
        TimeLabel->setFont(font2);

        horizontalLayout->addWidget(TimeLabel);

        TimeSpinBox = new QDoubleSpinBox(Calory_calculator);
        TimeSpinBox->setObjectName("TimeSpinBox");
        TimeSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(TimeSpinBox);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        SlopLabel = new QLabel(Calory_calculator);
        SlopLabel->setObjectName("SlopLabel");
        SlopLabel->setFont(font2);

        horizontalLayout_3->addWidget(SlopLabel);

        SlopComboBox = new QComboBox(Calory_calculator);
        SlopComboBox->addItem(QString());
        SlopComboBox->setObjectName("SlopComboBox");

        horizontalLayout_3->addWidget(SlopComboBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        WightLabel = new QLabel(Calory_calculator);
        WightLabel->setObjectName("WightLabel");
        WightLabel->setFont(font2);

        horizontalLayout_2->addWidget(WightLabel);

        WeightSpinBox = new QDoubleSpinBox(Calory_calculator);
        WeightSpinBox->setObjectName("WeightSpinBox");
        WeightSpinBox->setValue(80.000000000000000);

        horizontalLayout_2->addWidget(WeightSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        SpeedLabel = new QLabel(Calory_calculator);
        SpeedLabel->setObjectName("SpeedLabel");
        SpeedLabel->setFont(font2);

        horizontalLayout_4->addWidget(SpeedLabel);

        SpeedSpinBox = new QDoubleSpinBox(Calory_calculator);
        SpeedSpinBox->setObjectName("SpeedSpinBox");
        SpeedSpinBox->setValue(6.000000000000000);

        horizontalLayout_4->addWidget(SpeedSpinBox);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(Calory_calculator);

        QMetaObject::connectSlotsByName(Calory_calculator);
    } // setupUi

    void retranslateUi(QWidget *Calory_calculator)
    {
        Calory_calculator->setWindowTitle(QCoreApplication::translate("Calory_calculator", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Calory_calculator", "Claory Count:", nullptr));
        CaloryCountLabel->setText(QCoreApplication::translate("Calory_calculator", "100", nullptr));
        TimeLabel->setText(QCoreApplication::translate("Calory_calculator", "Time (H) :", nullptr));
        SlopLabel->setText(QCoreApplication::translate("Calory_calculator", "Slop:", nullptr));
        SlopComboBox->setItemText(0, QCoreApplication::translate("Calory_calculator", "Level", nullptr));

        WightLabel->setText(QCoreApplication::translate("Calory_calculator", "Wight (KGM):", nullptr));
        SpeedLabel->setText(QCoreApplication::translate("Calory_calculator", "Speed(KMH)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calory_calculator: public Ui_Calory_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
