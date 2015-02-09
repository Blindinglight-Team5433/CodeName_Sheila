#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	// Process operator interface input here.

//	Sensors
//creates a new instance of Gyro
	gyro = new Gyro(0);
	gyro->InitGyro();
	gyro->SetSensitivity(.0125);
	gyro->Reset(); // Resets the gyro's heading


//Left Joystick
	Drive_Stick = new Joystick(JOYSTICK_1);


//Right Joystick
	Rotate_Stick = new Joystick(JOYSTICK_2);

}

//will return the location of the data of the user input at the left joystick
Gyro* OI::getGyro()
{
	return gyro;
}

Joystick* OI::getDrive_Stick()
{
	return Drive_Stick;
}

//will return the location of the data of the user input at the left joystick
Joystick* OI::getRotate_Stick()
{
	return Rotate_Stick;
}
