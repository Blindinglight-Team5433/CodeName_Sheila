#include <Commands/cmdJoysticks.h>
//
cmdJoysticks::cmdJoysticks()
{
	// Requires the subsystem chassis
	Requires(drive_base);
}

// Called just before this Command runs the first time
void cmdJoysticks::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdJoysticks::Execute()
{
	//points to chassis' function that will use the positions of each joystick to either drive tank or mecanum style
	drive_base->Joystick_Drive(oi->getDrive_Stick(), oi->getRotate_Stick());
}

// Make this return true when this Command no longer needs to run execute()
bool cmdJoysticks::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void cmdJoysticks::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdJoysticks::Interrupted()
{

}
