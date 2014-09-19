/*
 * FlyWithWings.h
 *
 *  Created on: Sep 18, 2014
 *      Author: Nikhil
 */

#ifndef FLYWITHWINGS_H_
#define FLYWITHWINGS_H_

#include "Flybehaviour.h"

class FlyWithWings: public FlyBehaviour {
public:
	virtual void fly();
	FlyWithWings();
};

#endif /* FLYWITHWINGS_H_ */
