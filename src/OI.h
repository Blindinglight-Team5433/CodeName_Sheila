#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick *Drive_Stick, *Rotate_Stick;
	Gyro *gyro;
public:
	OI();
	//Sensors
	Gyro* getGyro();

	//Rotate JoyStick
	Joystick* getRotate_Stick();

	//Drive JoyStick
	Joystick* getDrive_Stick();
};

#endif
