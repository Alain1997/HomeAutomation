#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class Serial;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void lichtenUit();
    void lichtAan();
    ~MainWindow();
    int lampAan;
    int minuten1;
    int lampUit;
    int minuten2;
    bool maandag;
    bool dinsdag;
    bool woensdag;
    bool donderdag;
    bool vrijdag;
    bool zaterdag;
    bool zondag;

private slots:
    void on_Lamp1_aan_clicked();

    void on_Lamp1_uit_clicked();

    void on_lamp2_aan_clicked();

    void on_lamp2_uit_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Serial *serial;
    Serial *serial2;
};

#endif // MAINWINDOW_H
