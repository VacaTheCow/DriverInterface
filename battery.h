#ifndef BATTERY_H
#define BATTERY_H

#include "ui_mainwindow.h"
#include "states.h"

class Battery
{
public:
    Battery();
    void setup(Ui::MainWindow *);
    void decrease_battery(int);
    void increase_battery(int);
    int get_battery();
    int get_range();
    void check_range(warnings warning);
    void on(warnings warning);
    void off(warnings warning);
    ~Battery() {};

private:
    int battery;
    double range;
    /* Efficency is (Miles traveled) per (Unit of Battery)*/
    const double efficiency_constant = .85;
    QPixmap low_battery;
    Ui::MainWindow *ui;
};

#endif // BATTERY_H
