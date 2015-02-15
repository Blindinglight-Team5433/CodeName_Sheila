#include <Subsystems/Drive.h>
#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/DataDisplay.h"



// Initialize a single static instance of all of your subsystems to NULL
OI* CommandBase::oi = NULL;
Drive_Base* CommandBase::drive_base = NULL;
DataDisplay* CommandBase::driverDisplay = NULL;
Lift* CommandBase::elevatorLift = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{

}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	oi = new OI();
	drive_base = new Drive_Base();
	driverDisplay = new DataDisplay();
	elevatorLift = new Lift();

}
