/*
 * main.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#include "RemoteControl.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"

int main()
{
	LightOffCommand offcommand;
	LightOnCommand oncommand;
	RemoteControl* remotecontrolobj = new RemoteControl(&oncommand,
														&offcommand);

	remotecontrolobj->customCommand1_OFF->execute();
	remotecontrolobj->customCommand1_ON->execute();
	return 0;
}
