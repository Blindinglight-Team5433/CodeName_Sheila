#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;


#define JOYSTICK_1 (0)
#define JOYSTICK_2 (1)
#define JOYSTICK_3 (2)

typedef enum
{
	FRONT_LEFT_TALON = 0,
	FRONT_RIGHT_TALON,
	REAR_LEFT_TALON,
	REAR_RIGHT_TALON,
}TALON_CONTRLERS_t;


typedef enum{
	//the name of each type should follow this format
//	ButtonName_fButtonFunction - The f is NOT a typo
	TRIGGER=1,//button 1
	THUMB_BUTTON_DOWN, // Button Number 2
	THUMB_BUTTON_UP,//button 3
	THUMB_BUTTON_LEFT,//button 4
	THUMB_BUTTON_RIGHT, // Button Number 5
	TRIGGER_fTOGGLE,//button 6
	LEFT_SIDE_DOWN,//button 7
	FRONT_SIDE_LEFT,// 8
	FRONT_SIDE_RIGHT,//9
	RIGHT_SIDE_DOWN, // Button Number 10
	RIGHT_SIDE_UP,
	NUM_OF_JOYSTICK_BUTTONS
} JOYSTICE_BUTTONS_T;

// Can IDs for the lift controllers
const int LEFTLIFT = 0;     //Left Can ID for the lift
const int RIGHTLIFT = 1;	//Right Can ID for the lift

// String Pots analog ports
const int LEFTSTRING = 1;   //Left string pot
const int RIGHTSTRING = 2;	//Right string pot

// Encoder location
const int WHEELENCODER = 3;

#endif
