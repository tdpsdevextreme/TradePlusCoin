// Copyright (c) 2019 The TradePlus_Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLTDPSWIDGET_H
#define COINCONTROLTDPSWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlTdpsWidget;
}

class CoinControlTdpsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlTdpsWidget(QWidget *parent = nullptr);
    ~CoinControlTdpsWidget();

private:
    Ui::CoinControlTdpsWidget *ui;
};

#endif // COINCONTROLTDPSWIDGET_H
