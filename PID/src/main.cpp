/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Logan Dresel                                              */
/*    Created:      8/28/2024, 10:20:55 PM                                    */
/*    Description:  PID Class                                                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

int main() 
{
    vexcodeInit();
    
    while (Inertial.isCalibrating())
    {
        wait(150, msec);
    }
    wait(100, msec);

    Competition.autonomous(auton);
    Competition.drivercontrol(drive);

}
