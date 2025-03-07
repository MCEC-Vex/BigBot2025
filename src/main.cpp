// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// MiddleLeft           motor         1               
// MiddleRight          motor         2               
// FrontRight           motor         4               
// BeltIntake2          motor         6               
// BackRight            motor         12              
// Piston               digital_out   B               
// BackLeft             motor         11              
// FrontLeft            motor         3               
// BeltIntake           motor         10              
// Controller1          controller                    
// WallStack1           motor         16              
// PositionSensor       limit         F               
// IntakeMotor          motor         17              
// Inertia              inertial      19              
// SeeIt                optical       8               
// DistanceSensor       distance      7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGUblue DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// MiddleLeft           motor         1               
// MiddleRight          motor         2               
// FrontRight           motor         4               
// BeltIntake2          motor         6               
// BackRight            motor         12              
// Piston               digital_out   B               
// BackLeft             motor         11              
// FrontLeft            motor         3               
// BeltIntake           motor         10              
// Controller1          controller                    
// WallStack1           motor         16              
// PositionSensor       limit         F               
// IntakeMotor          motor         17              
// Inertia              inertial      19              
// SeeIt                optical       8               
// ---- END VEXCODE CONFIGUblue DEVICES ----
// ---- START VEXCODE CONFIGUblue DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// MiddleLeft           motor         1               
// MiddleRight          motor         2               
// FrontRight           motor         4               
// BeltIntake2          motor         6               
// BackRight            motor         12              
// Piston               digital_out   B               
// BackLeft             motor         11              
// FrontLeft            motor         3               
// BeltIntake           motor         10              
// Controller1          controller                    
// WallStack1           motor         16              
// PositionSensor       limit         F               
// IntakeMotor          motor         17              
// Inertia              inertial      19              
// ---- END VEXCODE CONFIGUblue DEVICES ----
// ---- START VEXCODE CONFIGUblue DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// MiddleLeft           motor         1               
// MiddleRight          motor         2               
// FrontRight           motor         4               
// BeltIntake2          motor         6               
// BackRight            motor         12              
// Piston               digital_out   B               
// BackLeft             motor         11              
// FrontLeft            motor         3               
// BeltIntake           motor         10              
// Controller1          controller                    
// WallStack1           motor         16              
// PositionSensor       limit         F               
// IntakeReal           motor         17              
// Inertia              inertial      19              
// ---- END VEXCODE CONFIGUblue DEVICES ----
// ---- START VEXCODE CONFIGUblue DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// MiddleLeft           motor         1               
// MiddleRight          motor         2               
// FrontRight           motor         4               
// IntakeMotor          motor         6               
// BackRight            motor         12              
// Piston               digital_out   B               
// BackLeft             motor         11              
// FrontLeft            motor         3               
// BeltIntake           motor         10              
// Controller1          controller                    
// WallStack1           motor         16              
// PositionSensor       limit         F               
// IntakeReal           motor         17              
// Inertia              inertial      19              
// ---- END VEXCODE CONFIGUblue DEVICES ----
// ---- START VEXCODE CONFIGUblue DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// MiddleLeft           motor         1               
// MiddleRight          motor         2               
// FrontRight           motor         4               
// IntakeMotor          motor         6               
// BackRight            motor         12              
// Piston               digital_out   B               
// BackLeft             motor         11              
// FrontLeft            motor         3               
// BeltIntake           motor         10              
// Controller1          controller                    
// WallStack1           motor         16              
// PositionSensor       limit         F               
// IntakeReal           motor         17              
// ---- END VEXCODE CONFIGUblue DEVICES ----


//!BIG BOTTTT
#include "vex.h"

using namespace vex;
competition Competition;

/*---------------------------------------------------------------------------*/
/*                             VEXcode Config                                */
/*                                                                           */
/*  Before you do anything else, start by configuring your motors and        */
/*  sensors. In VEXcode Pro V5, you can do this using the graphical          */
/*  configurer port icon at the top right. In the VSCode extension, you'll   */
/*  need to go to robot-config.cpp and robot-config.h and create the         */
/*  motors yourself by following the style shown. All motors must be         */
/*  properly reversed, meaning the drive should drive forward when all       */
/*  motors spin forward.                                                     */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                             JAR-Template Config                           */
/*                                                                           */
/*  Where all the magic happens. Follow the instructions below to input      */
/*  all the physical constants and values for your robot. You should         */
/*  already have configublue your motors.                                     */
/*---------------------------------------------------------------------------*/

Drive chassis(

//Pick your drive setup from the list below:
//ZERO_TRACKER_NO_ODOM
// ZERO_TRACKER_ODOM
//TANK_ONE_FORWARD_ENCODER
//TANK_ONE_FORWARD_ROTATION
//TANK_ONE_SIDEWAYS_ENCODER
//TANK_ONE_SIDEWAYS_ROTATION
//TANK_TWO_ENCODER
//TANK_TWO_ROTATION
//HOLONOMIC_TWO_ENCODER
//HOLONOMIC_TWO_ROTATION
//
//Write it here:
ZERO_TRACKER_ODOM,

//Add the names of your Drive motors into the motor groups below, separated by commas, i.e. motor_group(Motor1,Motor2,Motor3).
//You will input whatever motor names you chose when you configublue your robot using the sidebar configurer, they don't have to be "Motor1" and "Motor2".

//Left Motors:
motor_group(
  FrontRight,
  MiddleRight,
  BackRight
),

//Right Motors:
motor_group(
  FrontLeft,
  MiddleLeft,
  BackLeft 
),

//Specify the PORT NUMBER of your inertial sensor, in PORT format (i.e. "PORT1", not simply "1"):
PORT19,

//Input your wheel diameter. (4" omnis are actually closer to 4.125"):
3.25,

//External ratio, must be in decimal, in the format of input teeth/output teeth.
//If your motor has an 84-tooth gear and your wheel has a 60-tooth gear, this value will be 1.4.
//If the motor drives the wheel directly, this value is 1:
0.6,

//Gyro scale, this is what your gyro reads when you spin the robot 360 degrees.
//For most cases 360 will do fine here, but this scale factor can be very helpful when precision is necessary.
360,

/*---------------------------------------------------------------------------*/
/*                                  PAUSE!                                   */
/*                                                                           */
/*  The rest of the drive constructor is for robots using POSITION TRACKING. */
/*  If you are not using position tracking, leave the rest of the values as  */
/*  they are.                                                                */
/*---------------------------------------------------------------------------*/

//If you are using ZERO_TRACKER_ODOM, you ONLY need to adjust the FORWARD TRACKER CENTER DISTANCE.

//FOR HOLONOMIC DRIVES ONLY: Input your drive motors by position. This is only necessary for holonomic drives, otherwise this section can be left alone.
//LF:      //RF:    
PORT1,     -PORT2,

//LB:      //RB: 
PORT3,     -PORT4,

//If you are using position tracking, this is the Forward Tracker port (the tracker which runs parallel to the direction of the chassis).
//If this is a rotation sensor, enter it in "PORT1" format, inputting the port below.
//If this is an encoder, enter the port as an integer. Triport A will be a "1", Triport B will be a "2", etc.
3,

//Input the Forward Tracker diameter (reverse it to make the direction switch):
2.75,

//Input Forward Tracker center distance (a positive distance corresponds to a tracker on the right side of the robot, negative is left.)
//For a zero tracker tank drive with odom, put the positive distance from the center of the robot to the right side of the drive.
//This distance is in inches:
-2,

//Input the Sideways Tracker Port, following the same steps as the Forward Tracker Port:
1,

//Sideways tracker diameter (reverse to make the direction switch):
-2.75,

//Sideways tracker center distance (positive distance is behind the center of the robot, negative is in front):
5.5

);

int current_auton_selection = 0;
bool auto_started = false;

/**
 * Function before autonomous. It prints the current auton number on the screen
 * and tapping the screen cycles the selected auton by 1. Add anything else you
 * may need, like resetting pneumatic components. You can rename these autons to
 * be more descriptive, if you like.
 */

void pre_auton() {
  // Initializing Robot Configuration. DO NOT REMOVE!


  vexcodeInit();
  default_constants();

  while(!auto_started){
    Brain.Screen.clearScreen();
    Brain.Screen.printAt(5, 80, "Chassis Heading Reading:");
    Brain.Screen.printAt(5, 100, "%f", chassis.get_absolute_heading());
    Brain.Screen.printAt(5, 120, "%f", Inertia.heading() );
    switch(current_auton_selection){
      case 0:
        Brain.Screen.printAt(5, 140, "Auton 1");
        break;
      case 1:
        Brain.Screen.printAt(5, 140, "Auton 2");
        break;
      case 2:
        Brain.Screen.printAt(5, 140, "Auton 3");
        break;
      case 3:
        Brain.Screen.printAt(5, 140, "Auton 4");
        break;
      case 4:
        Brain.Screen.printAt(5, 140, "Auton 5");
        break;
      case 5:
        Brain.Screen.printAt(5, 140, "Auton 6");
        break;
      case 6:
        Brain.Screen.printAt(5, 140, "Auton 7");
        break;
      case 7:
        Brain.Screen.printAt(5, 140, "Auton 8");
        break;
    }
    if(Brain.Screen.pressing()){
      while(Brain.Screen.pressing()) {}
      current_auton_selection ++;
    } else if (current_auton_selection == 8){
      current_auton_selection = 0;
    }
    task::sleep(10);
  }
}

/**
 * Auton function, which runs the selected auton. Case 0 is the default,
 * 
 * and will run in the brain screen goes untouched during preauton. Replace
 * drive_test(), for example, with your own auton function you created in
 * autons.cpp and declablue in autons.h.
 */


void autonomous(void) {
  default_constants();


  // Skills
  // WallStack1.spinToPosition(180, deg);
  IntakeMotor.spin(fwd, 100, percent);
  chassis.drive_distance(-45, 0, 20, 0);
  chassis.turn_to_angle(-90);
  chassis.drive_distance(30, 0, 5, 0);
  Piston.set(true);
  wait(500, msec);
  BeltIntake.spin(fwd, 100, percent);
  BeltIntake2.spin(fwd, 100, percent);
  chassis.turn_to_angle(0);
  chassis.drive_distance(-60, 0, 20, 0);
  chassis.turn_to_angle(130);
  chassis.drive_distance(-20, 0, 10, 0);
  chassis.turn_to_angle(190);
  chassis.drive_distance(-80, 0, 20, 0);
  chassis.turn_to_angle(125);
  chassis.drive_distance(-30, 0, 20, 0);
  chassis.drive_distance(25, 0, 20, 0);
  chassis.turn_to_angle(-60);
  chassis.drive_distance(30, 0, 10, 0);
    IntakeMotor.spin(fwd, 0, percent);
  BeltIntake.spin(fwd, 0, percent);
  BeltIntake2.spin(fwd, 0, percent);
  Piston.set(false);
  wait(500,  msec);
  chassis.drive_distance(-60, 0, 20, 0);
  chassis.turn_to_angle(210);
     IntakeMotor.spin(fwd, 100, percent);
  chassis.drive_distance(-50);
  wait(500,  msec);
  // chassis.drive_distance(90, 0, 20, 0);
  // chassis.turn_to_angle(135);

  
  // chassis.drive_distance(20, 0, 5, 0);
  // Piston.set(true);
  // wait(500, msec);
  // chassis.turn_to_angle(-15);
  // IntakeMotor.spin(fwd,100, percent);
  // chassis.drive_distance(-40, 0, 30, 0);
  //       SeeIt.setLightPower(50, percent);
  //     // for blue make it blue
  //       if(SeeIt.color() == blue ){
  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 100, percent);
  //       BeltIntake.spin(fwd, 100, percent);
  //       wait(500, msec);
  //     // Test.spin(fwd, 100, percent);
  //   } else {

  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 50, percent);
  //       BeltIntake.spin(fwd, 50, percent);
  //     // Test.spin(fwd, 0, percent);
  //   }
  // chassis.drive_distance(-20, 0, 30, 0);
  // chassis.turn_to_angle(155);
  // chassis.drive_distance(-50, 0, 30, 0);
  //         SeeIt.setLightPower(50, percent);
  //     // for blue make it blue
  //       if(SeeIt.color() == blue && SeeIt.isNearObject()) {
  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 100, percent);
  //       BeltIntake.spin(fwd, 100, percent);
  //       wait(500, msec);
  //     // Test.spin(fwd, 100, percent);
  //   } else {

  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 50, percent);
  //       BeltIntake.spin(fwd, 50, percent);
  //     // Test.spin(fwd, 0, percent);
  //   }
  // chassis.drive_distance(-20, 0, 5, 0);
  // Inertia.calibrate();
  // chassis.drive_distance(20, 0, 30, 0);
  //         SeeIt.setLightPower(50, percent);
  //     // for blue make it blue
  //       if(SeeIt.color() == blue && SeeIt.isNearObject()) {
  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 100, percent);
  //       BeltIntake.spin(fwd, 100, percent);
  //       wait(500, msec);
  //     // Test.spin(fwd, 100, percent);
  //   } else {

  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 50, percent);
  //       BeltIntake.spin(fwd, 50, percent);
  //     // Test.spin(fwd, 0, percent);
  //   }
  //   wait(1, sec);
  // chassis.turn_to_angle(180);
  // chassis.drive_distance(-30, 0, 10, 0);
  //         SeeIt.setLightPower(50, percent);
  //     // for blue make it blue
  //       if(SeeIt.color() == blue && SeeIt.isNearObject()) {
  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 100, percent);
  //       BeltIntake.spin(fwd, 100, percent);
  //       wait(500, msec);
  //     // Test.spin(fwd, 100, percent);
  //   } else {

  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 50, percent);
  //       BeltIntake.spin(fwd, 50, percent);
  //     // Test.spin(fwd, 0, percent);
  //   }
  //   wait(1, sec);
  // chassis.turn_to_angle(-80);
  // chassis.drive_distance(50, 0, 10, 0);
  // chassis.drive_distance(30, 0, 5, 0);
  //           SeeIt.setLightPower(50, percent);
  //     // for blue make it blue
  //       if(SeeIt.color() == blue && SeeIt.isNearObject()) {
  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 100, percent);
  //       BeltIntake.spin(fwd, 100, percent);
  //       wait(500, msec);
  //     // Test.spin(fwd, 100, percent);
  //   } else {

  //       IntakeMotor.spin(fwd, 100, percent);
  //       BeltIntake2.spin(fwd, 50, percent);
  //       BeltIntake.spin(fwd, 50, percent);
  //     // Test.spin(fwd, 0, percent);
  //   }
  // chassis.drive_distance(20, 0, 5, 0);
  // chassis.turn_to_angle(-100);
  // chassis.drive_distance(30, 0, 10, 0);



    // wait(200, msec);
    // chassis.turn_to_angle(-30);
    // chassis.drive_distance(-40);
    // chassis.drive_to_point(0, 60);
    // chassis.turn_to_angle(45);
    //   IntakeMotor.spin(fwd, 100, percent);
    // chassis.set_coordinates(0, 0, 0);
    // chassis.drive_distance(-43);
    // wait(200, msec);
    // chassis.turn_to_angle(60);
    // chassis.drive_distance(-25);
    // wait(200, msec);
    // chassis.turn_to_angle(-45);
    // chassis.turn_to_angle(-90);
  // auto_started = true;
//   switch(current_auton_selection){ 
//     case 0:
//       drive_test();
//       break;
//     case 1:         
//       drive_test();
//       break;
//     case 2:
//       turn_test();
//       break;
//     case 3:
//       swing_test();
//       break;
//     case 4:
//       full_test();
//       break;
//     case 5:
//       odom_test();
//       break;
//     case 6:
//       tank_odom_test();
//       break;
//     case 7:
//       holonomic_odom_test();
//       break;
//  }
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

  void wallStackScore(){
      WallStack1.spinToPosition(350, degrees, 300, rpm);
      wait(500, msec);
}

void usercontrol(void) {
  bool PistonOpen = false;
  Piston.set(false);
  bool wantWallStack = false;

  // User control code here, inside the loop
  while (1) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................

if(!wantWallStack) {

  if(Controller1.ButtonR1.pressing()) {
    if(wantWallStack && DistanceSensor.objectDistance(inches) <= 4) {

        IntakeMotor.spin(fwd, 0, percent);
        BeltIntake2.spin(fwd, 0, percent);
        BeltIntake.spin(fwd, 0, percent);
        wantWallStack = false;
    } else {

        IntakeMotor.spin(fwd, 100, percent);
        BeltIntake2.spin(fwd, 100, percent);
        BeltIntake.spin(fwd, 100, percent);
    }
    } else if(Controller1.ButtonR2.pressing()){
      BeltIntake.spin(reverse, 100, percent);
        BeltIntake2.spin(reverse, 50, percent);
        IntakeMotor.spin(reverse, 50, percent);
    } else {
        IntakeMotor.spin(reverse, 0, percent);
        BeltIntake2.spin(fwd, 0, percent);
        BeltIntake.spin(fwd, 0, percent);
    }
} else {
  SeeIt.setLightPower(50);
  
        IntakeMotor.spin(fwd, 100, percent);
        BeltIntake2.spin(fwd, 100, percent);
        BeltIntake.spin(fwd, 100, percent);
        if(SeeIt.color() == red) {
          wantWallStack = false;
              IntakeMotor.spin(fwd, 0, percent);
        BeltIntake2.spin(fwd, 0, percent);
        BeltIntake.spin(fwd, 0, percent);
        }
}

    if(Controller1.ButtonX.pressing()){
    wantWallStack = !wantWallStack;
      wait(300, msec);    
    }

    // Control intake motor manually
  
    if(Controller1.ButtonA.pressing()) {
      PistonOpen = !PistonOpen;
      Piston.set(PistonOpen);
      wait(300, msec);
    }

    if(Controller1.ButtonUp.pressing()){
      WallStack1.spinToPosition(350, degrees, 60, rpm);
    }

    if(Controller1.ButtonL1.pressing()){
      WallStack1.spin(fwd, 100, percent);

    } else if(Controller1.ButtonL2.pressing()){
      WallStack1.spin(reverse, 100, percent);
    } else {
      WallStack1.stop();
    }

    //Replace this line with chassis.control_tank(); for tank drive 
    //or chassis.control_holonomic(); for holo drive.
    chassis.control_arcade();

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  Piston.set(false);
  WallStack1.setBrake(hold);
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  // pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
