/********************************************************************************
** Form generated from reading UI file 'createwalletdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWALLETDIALOG_H
#define UI_CREATEWALLETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateWalletDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *wallet_name_line_edit;
    QLabel *label;
    QCheckBox *encrypt_wallet_checkbox;
    QCheckBox *disable_privkeys_checkbox;
    QCheckBox *blank_wallet_checkbox;
    QCheckBox *descriptor_checkbox;

    void setupUi(QDialog *CreateWalletDialog)
    {
        if (CreateWalletDialog->objectName().isEmpty())
            CreateWalletDialog->setObjectName(QString::fromUtf8("CreateWalletDialog"));
        CreateWalletDialog->resize(364, 213);
        buttonBox = new QDialogButtonBox(CreateWalletDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 170, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        wallet_name_line_edit = new QLineEdit(CreateWalletDialog);
        wallet_name_line_edit->setObjectName(QString::fromUtf8("wallet_name_line_edit"));
        wallet_name_line_edit->setGeometry(QRect(120, 20, 231, 24));
        label = new QLabel(CreateWalletDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 101, 21));
        encrypt_wallet_checkbox = new QCheckBox(CreateWalletDialog);
        encrypt_wallet_checkbox->setObjectName(QString::fromUtf8("encrypt_wallet_checkbox"));
        encrypt_wallet_checkbox->setGeometry(QRect(20, 50, 171, 22));
        encrypt_wallet_checkbox->setChecked(true);
        disable_privkeys_checkbox = new QCheckBox(CreateWalletDialog);
        disable_privkeys_checkbox->setObjectName(QString::fromUtf8("disable_privkeys_checkbox"));
        disable_privkeys_checkbox->setEnabled(false);
        disable_privkeys_checkbox->setGeometry(QRect(20, 80, 171, 22));
        blank_wallet_checkbox = new QCheckBox(CreateWalletDialog);
        blank_wallet_checkbox->setObjectName(QString::fromUtf8("blank_wallet_checkbox"));
        blank_wallet_checkbox->setGeometry(QRect(20, 110, 171, 22));
        descriptor_checkbox = new QCheckBox(CreateWalletDialog);
        descriptor_checkbox->setObjectName(QString::fromUtf8("descriptor_checkbox"));
        descriptor_checkbox->setGeometry(QRect(20, 140, 171, 22));
        QWidget::setTabOrder(wallet_name_line_edit, encrypt_wallet_checkbox);
        QWidget::setTabOrder(encrypt_wallet_checkbox, disable_privkeys_checkbox);
        QWidget::setTabOrder(disable_privkeys_checkbox, blank_wallet_checkbox);

        retranslateUi(CreateWalletDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateWalletDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateWalletDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateWalletDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateWalletDialog)
    {
        CreateWalletDialog->setWindowTitle(QCoreApplication::translate("CreateWalletDialog", "Create Wallet", nullptr));
        label->setText(QCoreApplication::translate("CreateWalletDialog", "Wallet Name", nullptr));
#if QT_CONFIG(tooltip)
        encrypt_wallet_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Encrypt the wallet. The wallet will be encrypted with a passphrase of your choice.", nullptr));
#endif // QT_CONFIG(tooltip)
        encrypt_wallet_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Encrypt Wallet", nullptr));
#if QT_CONFIG(tooltip)
        disable_privkeys_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Disable private keys for this wallet. Wallets with private keys disabled will have no private keys and cannot have an HD seed or imported private keys. This is ideal for watch-only wallets.", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_privkeys_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Disable Private Keys", nullptr));
#if QT_CONFIG(tooltip)
        blank_wallet_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Make a blank wallet. Blank wallets do not initially have private keys or scripts. Private keys and addresses can be imported, or an HD seed can be set, at a later time.", nullptr));
#endif // QT_CONFIG(tooltip)
        blank_wallet_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Make Blank Wallet", nullptr));
#if QT_CONFIG(tooltip)
        descriptor_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Use descriptors for scriptPubKey management", nullptr));
#endif // QT_CONFIG(tooltip)
        descriptor_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Descriptor Wallet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWalletDialog: public Ui_CreateWalletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWALLETDIALOG_H
