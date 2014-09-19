/*
 * FlyNoWay.h
 *
 *  Created on: Sep 18, 2014
 *      Author: Nikhil
 */

#ifndef FLYNOWAY_H_
#define FLYNOWAY_H_

#include "Flybehaviour.h"

class FlyNoWay: public FlyBehaviour {
public:
	virtual void fly();
	FlyNoWay();
	~FlyNoWay();
};

#endif /* FLYNOWAY_H_ */
