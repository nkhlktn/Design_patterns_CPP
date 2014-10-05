/*
 * main.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#include "RemoteControl.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "GarageLightDim.h"
#include "GargeLightOn.h"
#include "Light.h"
#include "GarageLight.h"

int main()
{
	Light light;
	GarageLight garagelight;
	LightOffCommand lightoffcommand(&light);
	LightOnCommand lightoncommand(&light);
	GargeLightOn garagelighton(&garagelight);
	GarageLightDim garagelightdim(&garagelight);
	RemoteControl* remotecontrolobj = new RemoteControl();

	remotecontrolobj->setCommand(0, &lightoffcommand, &lightoncommand);
	remotecontrolobj->setCommand(3, &garagelightdim, &garagelighton);


	remotecontrolobj->offButtonPushed(0);
	remotecontrolobj->onButtonPushed(0);
	remotecontrolobj->undoButtonPushed();
	cout<<"------------------------------------------------"<<endl;

	remotecontrolobj->offButtonPushed(2);
	remotecontrolobj->undoButtonPushed();
	remotecontrolobj->onButtonPushed(2);

	cout<<"-------------------------------------------------"<<endl;

	remotecontrolobj->undoButtonPushed();
	remotecontrolobj->offButtonPushed(3);
	remotecontrolobj->undoButtonPushed();
	remotecontrolobj->onButtonPushed(3);

	return 0;
}
