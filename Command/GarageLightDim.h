/*
 * GarageLightDim.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef GARAGELIGHTDIM_H_
#define GARAGELIGHTDIM_H_
#include "Command.h"
using namespace std;
#include "GarageLight.h"

class GarageLightDim: public Command {
private:
	GarageLight* garagelight;
public:
	GarageLightDim(GarageLight* garagelightobj)
	{
		garagelight = garagelightobj;
	}
	~GarageLightDim()
	{

	}
	virtual void execute()
	{
		garagelight->garageLightDim();
	}

	virtual void undo()
	{
		garagelight->garageLightOn();
	}
};

#endif /* GARAGELIGHTDIM_H_ */
