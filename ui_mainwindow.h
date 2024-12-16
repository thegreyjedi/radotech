/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *StackedWidget;
    QWidget *Menu;
    QGroupBox *groupBox;
    QLabel *title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *createProfileButton;
    QPushButton *loginButton;
    QWidget *CreateProfile;
    QGroupBox *container;
    QPushButton *saveButton;
    QWidget *gridLayoutWidget;
    QGridLayout *userInfo;
    QLineEdit *countryText;
    QLabel *heightLbl;
    QLabel *lNameLbl;
    QLabel *countryLbl;
    QLineEdit *emailText;
    QLineEdit *confirmPasswordText;
    QLineEdit *lastNameText;
    QLabel *birthdayLbl;
    QLineEdit *firstNameText;
    QLabel *emailLbl;
    QDateEdit *birthdayEdit;
    QLabel *phoneLbl;
    QLabel *genderLbl;
    QLabel *passwordLbl;
    QLabel *confirmPasswordLbl;
    QHBoxLayout *genderOptions;
    QRadioButton *maleButton;
    QRadioButton *femaleButton;
    QRadioButton *otherButton;
    QLabel *weightLbl;
    QLineEdit *passwordText;
    QLabel *fNameLbl;
    QLineEdit *phoneText;
    QSpinBox *weightBox;
    QSpinBox *heightBox;
    QPushButton *Homebtn;
    QWidget *loginProfile;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *emailLoginText;
    QLineEdit *passwordLoginText;
    QPushButton *enterButton;
    QLabel *title_2;
    QPushButton *Homebtn_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        StackedWidget = new QStackedWidget(centralwidget);
        StackedWidget->setObjectName(QString::fromUtf8("StackedWidget"));
        StackedWidget->setGeometry(QRect(0, 0, 801, 601));
        Menu = new QWidget();
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setStyleSheet(QString::fromUtf8("QWidget#Menu {\n"
"    background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255),\n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    );\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"    color: white;\n"
"    font-size: 50px;\n"
"    font-weight: bold;\n"
"    background: transparent;\n"
"    padding: 0;\n"
"    border: none;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: #2a2a2a;\n"
"    border: 2px solid rgba(255, 120, 0, 255);\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"    margin-bottom: 30px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background: qlineargradient(\n"
"        spread: pad, \n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255), \n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    );\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 18px;\n"
"    padding: 12px 25px;\n"
"    margin: 10p"
                        "x 0;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.6);\n"
"    background: rgba(255, 120, 0, 180);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 120, 0, 220);\n"
"    background: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"}\n"
""));
        groupBox = new QGroupBox(Menu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 80, 381, 421));
        title = new QLabel(groupBox);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(30, 20, 321, 121));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 170, 361, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 20, 0);
        createProfileButton = new QPushButton(verticalLayoutWidget);
        createProfileButton->setObjectName(QString::fromUtf8("createProfileButton"));

        verticalLayout->addWidget(createProfileButton);

        loginButton = new QPushButton(verticalLayoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout->addWidget(loginButton);

        StackedWidget->addWidget(Menu);
        CreateProfile = new QWidget();
        CreateProfile->setObjectName(QString::fromUtf8("CreateProfile"));
        CreateProfile->setStyleSheet(QString::fromUtf8("QWidget#CreateProfile{\n"
"background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255),\n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    );\n"
"	color:white;\n"
"}\n"
"\n"
"#container{\n"
"background-color: #2a2a2a;\n"
"    border: 2px solid rgba(255, 120, 0, 255);\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"    margin-bottom: 30px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background: qlineargradient(\n"
"        spread: pad, \n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255), \n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    );\n"
"    color: white;\n"
"    border: 2px solid rgb(46, 46, 46);\n"
"    border-radius: 12px;\n"
"    font-size: 18px;\n"
"    padding: 6px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.6);\n"
"    background: rgba(255, 120, 0, 180);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background"
                        "-color: rgba(255, 120, 0, 220);\n"
"    background: rgba(255, 255, 255, 0.2);\n"
"}"));
        container = new QGroupBox(CreateProfile);
        container->setObjectName(QString::fromUtf8("container"));
        container->setGeometry(QRect(160, 30, 511, 561));
        container->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QRadioButton{\n"
"color:white;\n"
"}"));
        saveButton = new QPushButton(container);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(160, 470, 201, 51));
        gridLayoutWidget = new QWidget(container);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 471, 441));
        userInfo = new QGridLayout(gridLayoutWidget);
        userInfo->setObjectName(QString::fromUtf8("userInfo"));
        userInfo->setContentsMargins(0, 0, 0, 0);
        countryText = new QLineEdit(gridLayoutWidget);
        countryText->setObjectName(QString::fromUtf8("countryText"));

        userInfo->addWidget(countryText, 6, 2, 1, 1);

        heightLbl = new QLabel(gridLayoutWidget);
        heightLbl->setObjectName(QString::fromUtf8("heightLbl"));

        userInfo->addWidget(heightLbl, 4, 0, 1, 1);

        lNameLbl = new QLabel(gridLayoutWidget);
        lNameLbl->setObjectName(QString::fromUtf8("lNameLbl"));

        userInfo->addWidget(lNameLbl, 1, 0, 1, 1);

        countryLbl = new QLabel(gridLayoutWidget);
        countryLbl->setObjectName(QString::fromUtf8("countryLbl"));

        userInfo->addWidget(countryLbl, 6, 0, 1, 1);

        emailText = new QLineEdit(gridLayoutWidget);
        emailText->setObjectName(QString::fromUtf8("emailText"));

        userInfo->addWidget(emailText, 8, 2, 1, 1);

        confirmPasswordText = new QLineEdit(gridLayoutWidget);
        confirmPasswordText->setObjectName(QString::fromUtf8("confirmPasswordText"));
        confirmPasswordText->setEchoMode(QLineEdit::Password);

        userInfo->addWidget(confirmPasswordText, 10, 2, 1, 1);

        lastNameText = new QLineEdit(gridLayoutWidget);
        lastNameText->setObjectName(QString::fromUtf8("lastNameText"));

        userInfo->addWidget(lastNameText, 1, 2, 1, 1);

        birthdayLbl = new QLabel(gridLayoutWidget);
        birthdayLbl->setObjectName(QString::fromUtf8("birthdayLbl"));

        userInfo->addWidget(birthdayLbl, 5, 0, 1, 1);

        firstNameText = new QLineEdit(gridLayoutWidget);
        firstNameText->setObjectName(QString::fromUtf8("firstNameText"));

        userInfo->addWidget(firstNameText, 0, 2, 1, 1);

        emailLbl = new QLabel(gridLayoutWidget);
        emailLbl->setObjectName(QString::fromUtf8("emailLbl"));

        userInfo->addWidget(emailLbl, 8, 0, 1, 1);

        birthdayEdit = new QDateEdit(gridLayoutWidget);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));

        userInfo->addWidget(birthdayEdit, 5, 2, 1, 1);

        phoneLbl = new QLabel(gridLayoutWidget);
        phoneLbl->setObjectName(QString::fromUtf8("phoneLbl"));

        userInfo->addWidget(phoneLbl, 7, 0, 1, 1);

        genderLbl = new QLabel(gridLayoutWidget);
        genderLbl->setObjectName(QString::fromUtf8("genderLbl"));

        userInfo->addWidget(genderLbl, 2, 0, 1, 1);

        passwordLbl = new QLabel(gridLayoutWidget);
        passwordLbl->setObjectName(QString::fromUtf8("passwordLbl"));

        userInfo->addWidget(passwordLbl, 9, 0, 1, 1);

        confirmPasswordLbl = new QLabel(gridLayoutWidget);
        confirmPasswordLbl->setObjectName(QString::fromUtf8("confirmPasswordLbl"));

        userInfo->addWidget(confirmPasswordLbl, 10, 0, 1, 1);

        genderOptions = new QHBoxLayout();
        genderOptions->setObjectName(QString::fromUtf8("genderOptions"));
        maleButton = new QRadioButton(gridLayoutWidget);
        maleButton->setObjectName(QString::fromUtf8("maleButton"));

        genderOptions->addWidget(maleButton);

        femaleButton = new QRadioButton(gridLayoutWidget);
        femaleButton->setObjectName(QString::fromUtf8("femaleButton"));

        genderOptions->addWidget(femaleButton);

        otherButton = new QRadioButton(gridLayoutWidget);
        otherButton->setObjectName(QString::fromUtf8("otherButton"));

        genderOptions->addWidget(otherButton);


        userInfo->addLayout(genderOptions, 2, 2, 1, 1);

        weightLbl = new QLabel(gridLayoutWidget);
        weightLbl->setObjectName(QString::fromUtf8("weightLbl"));

        userInfo->addWidget(weightLbl, 3, 0, 1, 1);

        passwordText = new QLineEdit(gridLayoutWidget);
        passwordText->setObjectName(QString::fromUtf8("passwordText"));
        passwordText->setEchoMode(QLineEdit::Password);

        userInfo->addWidget(passwordText, 9, 2, 1, 1);

        fNameLbl = new QLabel(gridLayoutWidget);
        fNameLbl->setObjectName(QString::fromUtf8("fNameLbl"));

        userInfo->addWidget(fNameLbl, 0, 0, 1, 1);

        phoneText = new QLineEdit(gridLayoutWidget);
        phoneText->setObjectName(QString::fromUtf8("phoneText"));

        userInfo->addWidget(phoneText, 7, 2, 1, 1);

        weightBox = new QSpinBox(gridLayoutWidget);
        weightBox->setObjectName(QString::fromUtf8("weightBox"));
        weightBox->setMaximum(999);

        userInfo->addWidget(weightBox, 3, 2, 1, 1);

        heightBox = new QSpinBox(gridLayoutWidget);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));
        heightBox->setMaximum(999);

        userInfo->addWidget(heightBox, 4, 2, 1, 1);

        Homebtn = new QPushButton(CreateProfile);
        Homebtn->setObjectName(QString::fromUtf8("Homebtn"));
        Homebtn->setGeometry(QRect(20, 30, 111, 41));
        StackedWidget->addWidget(CreateProfile);
        loginProfile = new QWidget();
        loginProfile->setObjectName(QString::fromUtf8("loginProfile"));
        loginProfile->setStyleSheet(QString::fromUtf8("QWidget#loginProfile {\n"
"    background: qlineargradient(\n"
"        spread: pad,\n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255),\n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    );\n"
"    border-radius: 15px;\n"
"    padding: 40px 30px;\n"
"}\n"
"\n"
"QLabel{\n"
"    color: white;\n"
"    font-size: 50px;\n"
"    font-weight: bold;\n"
"    background: transparent;\n"
"    padding: 0;\n"
"    border: none;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: #2a2a2a;\n"
"    border: 2px solid rgba(255, 120, 0, 255);\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"    margin-bottom: 30px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background: qlineargradient(\n"
"        spread: pad, \n"
"        x1: 1, y1: 0.045, \n"
"        x2: 1, y2: 1, \n"
"        stop: 0 rgba(255, 120, 0, 255), \n"
"        stop: 1 rgba(246, 97, 81, 255)\n"
"    );\n"
"    color: white;\n"
"    border: 2px solid rgb(46, 46, 46);\n"
"    border-radiu"
                        "s: 12px;\n"
"    font-size: 18px;\n"
"    padding: 6px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(255, 255, 255, 0.6);\n"
"    background: rgba(255, 120, 0, 180);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 120, 0, 220);\n"
"    background: rgba(255, 255, 255, 0.2);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"}\n"
""));
        groupBox_3 = new QGroupBox(loginProfile);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(210, 80, 381, 421));
        verticalLayoutWidget_2 = new QWidget(groupBox_3);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 100, 251, 206));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        emailLoginText = new QLineEdit(verticalLayoutWidget_2);
        emailLoginText->setObjectName(QString::fromUtf8("emailLoginText"));

        verticalLayout_2->addWidget(emailLoginText);

        passwordLoginText = new QLineEdit(verticalLayoutWidget_2);
        passwordLoginText->setObjectName(QString::fromUtf8("passwordLoginText"));
        passwordLoginText->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwordLoginText);

        enterButton = new QPushButton(groupBox_3);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(120, 330, 141, 41));
        title_2 = new QLabel(groupBox_3);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setGeometry(QRect(30, -10, 321, 121));
        title_2->setFont(font);
        title_2->setAlignment(Qt::AlignCenter);
        Homebtn_2 = new QPushButton(loginProfile);
        Homebtn_2->setObjectName(QString::fromUtf8("Homebtn_2"));
        Homebtn_2->setGeometry(QRect(20, 30, 111, 41));
        StackedWidget->addWidget(loginProfile);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        StackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "RaDoTech", nullptr));
        createProfileButton->setText(QCoreApplication::translate("MainWindow", "Create Profile", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        container->setTitle(QString());
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save and Continue", nullptr));
        countryText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Your country", nullptr));
        heightLbl->setText(QCoreApplication::translate("MainWindow", "Height, cm", nullptr));
        lNameLbl->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        countryLbl->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        emailText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        confirmPasswordText->setPlaceholderText(QCoreApplication::translate("MainWindow", "12345", nullptr));
        lastNameText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        birthdayLbl->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        firstNameText->setPlaceholderText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        emailLbl->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        birthdayEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        phoneLbl->setText(QCoreApplication::translate("MainWindow", "Phone Number, +", nullptr));
        genderLbl->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        passwordLbl->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        confirmPasswordLbl->setText(QCoreApplication::translate("MainWindow", "Confirm password", nullptr));
        maleButton->setText(QCoreApplication::translate("MainWindow", "Male", nullptr));
        femaleButton->setText(QCoreApplication::translate("MainWindow", "Female", nullptr));
        otherButton->setText(QCoreApplication::translate("MainWindow", "Other", nullptr));
        weightLbl->setText(QCoreApplication::translate("MainWindow", "Weight, kg", nullptr));
        passwordText->setPlaceholderText(QCoreApplication::translate("MainWindow", "12345", nullptr));
        fNameLbl->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        phoneText->setPlaceholderText(QCoreApplication::translate("MainWindow", "12223334444", nullptr));
        Homebtn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        emailLoginText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login (email)", nullptr));
        passwordLoginText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        title_2->setText(QCoreApplication::translate("MainWindow", "RaDoTech", nullptr));
        Homebtn_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
