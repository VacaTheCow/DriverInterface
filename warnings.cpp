#include "warnings.h"

Warnings::Warnings(){ return; }

void Warnings::setup(Ui::MainWindow *ui) {
  this->ui = ui;
    WarningLabel battery(OFF,QPixmap(":/icons/battery.png"),ui->batteryWarning);
    WarningLabel motor(OFF,QPixmap(":/icons/motor.png"),ui->motorWarning);

//    std::make_pair<warnings,WarningLabel> BATTERY_WARNING(BATTERY,battery);
//    std::make_pair<warnings,WarningLabel> MOTOR_WARNING(MOTOR,motor);

    warning_labels.insert({BATTERY, battery});
    warning_labels.insert({MOTOR, motor});
}

void Warnings::on(warnings warning){
    warning_labels[warning].state = ON;
    warning_labels[warning].label->setPixmap(warning_labels[warning].image);
}

void Warnings::off(warnings warning){
    warning_labels[warning].state = OFF;
    warning_labels[warning].label->setText("OFF");
}
