#ifndef TIREPRESSURE_H
#define TIREPRESSURE_H

#include "ui_mainwindow.h"
#include "states.h"

class TirePressure
{
public:
    TirePressure();
    void setup(Ui::MainWindow*);
    void front_left_bad();
    void front_right_bad();
    void back_left_bad();
    void back_right_bad();
    void front_left_good();
    void front_right_good();
    void back_left_good();
    void back_right_good();
    ~TirePressure() {};
//private slots:
//    void on_rightIndicatorON_objectNameChanged(const QString &objectName);

private:
    condition front_left;
    condition front_right;
    condition back_left;
    condition back_right;
//    QPixmap front_left_bad_label;
//    QPixmap front_right_bad_label;
//    QPixmap back_left_bad_label;
//    QPixmap back_right_bad_label;
    QPixmap warning_label;
    QPixmap car_label;
    Ui::MainWindow *ui;
};


#endif // TIREPRESSURE_H
