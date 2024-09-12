#include "vex.h"

using namespace vex;

brain Brain;

//Example config
motor leftMotorA = motor(PORT11);
motor leftMotorB = motor(PORT12);
motor rightMotorA = motor(PORT19);
motor rightMotorB = motor(PORT20);

motor_group leftMotors = motor_group(leftMotorA, leftMotorB);
motor_group rightMotors = motor_group(rightMotorA, rightMotorB);

inertial Inertial = inertial(PORT1);

competition Competition;

void vexcodeInit(void)
{
    //Vex requires this to compile
    Inertial.calibrate(0);
}