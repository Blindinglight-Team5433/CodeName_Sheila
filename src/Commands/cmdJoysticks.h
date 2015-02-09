#ifndef Joysticks_H
#define Joysticks_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdJoysticks: public CommandBase
{
public:
	cmdJoysticks();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
