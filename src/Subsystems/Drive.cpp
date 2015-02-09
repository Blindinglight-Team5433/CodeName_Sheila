#include <Commands/cmdJoysticks.h>
#include <Subsystems/Drive.h>
#include "../CommandBase.h"
#include "../RobotMap.h"
#include "RobotDrive.h"

Drive_Base::Drive_Base() : Subsystem("Chassis")
{

	//creating four new instances of motor controllers that dictate the four mecanum wheels
	frontLeftTalon = new Talon(FRONT_LEFT_TALON);
	frontRightTalon = new Talon(FRONT_RIGHT_TALON);
	rearLeftTalon = new Talon(REAR_LEFT_TALON);
	rearRightTalon = new Talon(REAR_RIGHT_TALON);

	//Robot drive based on a definition of the motor configuration of each motor controller for the wheels
	robotDrive = new RobotDrive(frontLeftTalon, rearLeftTalon, frontRightTalon, rearRightTalon);
	accel = new BuiltInAccelerometer();
	robotDrive->SetSafetyEnabled(false);
	robotDrive->SetMaxOutput(.7);
}

void Drive_Base::InitDefaultCommand()
{
	SetDefaultCommand(new cmdJoysticks());
}

// These are called from commands
void Drive_Base::Joystick_Drive(Joystick *stickL, Joystick *stickR)
{
	robotDrive->MecanumDrive_Cartesian(stickR->GetX(), stickR->GetY(), stickL->GetX(), CommandBase::oi->getGyro()->GetAngle());
}

void Drive_Base::DriveForwardAutonomous()
{
	//drives the robot forward at half speed
	robotDrive->MecanumDrive_Cartesian(0, .5, 0, CommandBase::oi->getGyro()->GetAngle());
}
void Drive_Base::DriveBackwardAutonomous()
{
	//drives the robot backward at half speed
	robotDrive->MecanumDrive_Cartesian(0, -.5, 0, CommandBase::oi->getGyro()->GetAngle());
}
void Drive_Base::SlideLeftAutonomous()
{
	//slides the robot left at half speed
	robotDrive->MecanumDrive_Cartesian(-.5, 0, 0, CommandBase::oi->getGyro()->GetAngle());
}
void Drive_Base::SlideRightAutonomous()
{
	//slides the robot right at half speed
	robotDrive->MecanumDrive_Cartesian(.5, 0, 0, CommandBase::oi->getGyro()->GetAngle());
}

void Drive_Base::StopAutonomous()
{
	//stops the motion of the robot
	robotDrive->MecanumDrive_Cartesian(0, 0, 0, CommandBase::oi->getGyro()->GetAngle());
}
