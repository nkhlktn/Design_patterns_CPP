/*
 * LightOnCommand.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef LIGHTONCOMMAND_H_
#define LIGHTONCOMMAND_H_

#include "Command.h"
#include "Light.h"
#include<iostream>
using namespace std;

class LightOnCommand: public Command {
private:
	Light* light;
public:
	LightOnCommand(Light* lightObj)
	{
		light = lightObj;
	}

	~LightOnCommand()
	{

	}

	virtual void execute()
	{
		light->lighton();
	}

	virtual void undo()
	{
		light->lightoff();
	}
};

#endif /* LIGHTONCOMMAND_H_ */
