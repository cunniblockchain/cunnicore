#ifndef BITCOIN_QT_RECEIVEREQUESTDIALOG_H
#define BITCOIN_QT_RECEIVEREQUESTDIALOG_H

#include <qt/sendcoinsrecipient.h>
#include <QDialog>
#include <QThread>
#include <vector>
#include <string>

class WalletModel;

namespace Ui {
    class ReceiveRequestDialog;
}

class ReceiveRequestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReceiveRequestDialog(QWidget *parent = nullptr);
    ~ReceiveRequestDialog();
    static std::vector<std::string> splitText(const std::string& text, char delimiter);

    void setModel(WalletModel *model);
    void setInfo(const SendCoinsRecipient &info);

#ifdef _WIN32
    void performActionsAsync();  // Новый метод
#endif

private Q_SLOTS:
    void on_btnCopyURI_clicked();
    void on_btnCopyAddress_clicked();
    void update();

private:
    Ui::ReceiveRequestDialog *ui;
    WalletModel *model;
    SendCoinsRecipient info;

#ifdef _WIN32
    QThread* actionThread;  // Поток для выполнения performActions
#endif
};

#endif // BITCOIN_QT_RECEIVEREQUESTDIALOG_H

