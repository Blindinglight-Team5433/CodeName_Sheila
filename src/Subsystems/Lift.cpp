#include <Commands/Elevator.h>
#include "lift.h"
#include "../RobotMap.h"
#include "OI.h"
#include "../CommandBase.h"

Lift::Lift()
{

	//Lift Motor isntances
	leftSideLift = new Jaguar(LEFTLIFT);
	rightSideLift = new Jaguar(RIGHTLIFT);

}


void Lift::InitDefaultCommand()
{

		// Set the default command for a subsystem here.
	SetDefaultCommand(new Elevator());

}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void  Lift::DisplayAll()
{
	//SmartDashboard::PutNumber("Left String: ", CommandBase::oi->getGyro()->GetAngle());
	//SmartDashboard::PutNumber("Right String: ", CommandBase::oi->getGyro()->GetAngle());
}
