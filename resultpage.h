#ifndef RESULTPAGE_H
#define RESULTPAGE_H

#include <QMainWindow>
#include <QStringListModel>

namespace Ui {
class ResultPage;
}

class ResultPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResultPage(QWidget *parent = nullptr);
    ~ResultPage();
    QStringList convertToQStringList(const std::vector<std::string>&);

private:
    Ui::ResultPage *ui;
    QStringListModel *modelComplete;
    QStringListModel *modelFailed;
};

#endif // RESULTPAGE_H
