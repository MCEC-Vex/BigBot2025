#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor MiddleLeft = motor(PORT1, ratio6_1, false);
motor MiddleRight = motor(PORT2, ratio6_1, true);
motor FrontRight = motor(PORT4, ratio6_1, true);
motor BeltIntake2 = motor(PORT6, ratio6_1, false);
motor BackRight = motor(PORT12, ratio6_1, true);
digital_out Piston = digital_out(Brain.ThreeWirePort.B);
motor BackLeft = motor(PORT11, ratio18_1, false);
motor FrontLeft = motor(PORT3, ratio6_1, false);
motor BeltIntake = motor(PORT10, ratio6_1, false);
controller Controller1 = controller(primary);
motor WallStack1 = motor(PORT16, ratio36_1, true);
limit PositionSensor = limit(Brain.ThreeWirePort.F);
motor IntakeMotor = motor(PORT17, ratio6_1, true);
inertial Inertia = inertial(PORT19);
optical SeeIt = optical(PORT8);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}