// Copyright (c) 2019 The TradePlus_Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSSIGNMESSAGEWIDGETS_H
#define SETTINGSSIGNMESSAGEWIDGETS_H

#include <QWidget>
#include "qt/tradeplus_coin/pwidget.h"
#include "qt/tradeplus_coin/contactsdropdown.h"

namespace Ui {
class SettingsSignMessageWidgets;
}

class SettingsSignMessageWidgets : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsSignMessageWidgets(TradePlus_CoinGUI* _window, QWidget *parent = nullptr);
    ~SettingsSignMessageWidgets();

    void setAddress_SM(const QString& address);
protected:
    void resizeEvent(QResizeEvent *event) override;
public slots:
    void onSignMessageButtonSMClicked();
    void onVerifyMessage();
    void onPasteButtonSMClicked();
    void onAddressBookButtonSMClicked();
    void onGoClicked();
    void onClearAll();
    void onAddressesClicked();
    void onModeSelected(bool isSign);
    void updateMode();
private:
    Ui::SettingsSignMessageWidgets *ui;
    QAction *btnContact;
    ContactsDropdown *menuContacts = nullptr;
    bool isSign = true;
    void resizeMenu();
};

#endif // SETTINGSSIGNMESSAGEWIDGETS_H
