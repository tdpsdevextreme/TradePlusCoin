// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2019 The TradePlus_Coin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZTDPSCONTROLDIALOG_H
#define ZTDPSCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "ztdps/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZTdpsControlDialog;
}

class CZTdpsControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZTdpsControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZTdpsControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZTdpsControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZTdpsControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZTdpsControlDialog(QWidget *parent);
    ~ZTdpsControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZTdpsControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZTdpsControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZTDPSCONTROLDIALOG_H
