#ifndef Drive_H
#define Drive_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Drive_Base: public Subsystem
{
private:
	// Everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *frontLeftTalon, *frontRightTalon, *rearLeftTalon, *rearRightTalon;
	RobotDrive *robotDrive;
	Accelerometer *accel;


public:
	Drive_Base();
	void InitDefaultCommand();
	void Joystick_Drive(Joystick *stickL, Joystick *stickR);
	void DriveForwardAutonomous();
	void DriveBackwardAutonomous();
	void SlideLeftAutonomous();
	void SlideRightAutonomous();
	void StopAutonomous();
};

#endif
