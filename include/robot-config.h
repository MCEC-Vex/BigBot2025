using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor MiddleLeft;
extern motor MiddleRight;
extern motor FrontRight;
extern motor BeltIntake2;
extern motor BackRight;
extern digital_out Piston;
extern motor BackLeft;
extern motor FrontLeft;
extern motor BeltIntake;
extern controller Controller1;
extern motor WallStack1;
extern limit goalChecker;
extern motor IntakeMotor;
extern inertial Inertia;
extern distance DistanceSensor;
extern optical OpticalSensor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );