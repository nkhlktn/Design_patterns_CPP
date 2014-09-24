/*
 * HouseBlend.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef HOUSEBLEND_H_
#define HOUSEBLEND_H_

#include "Beverage.h"

class HouseBlend: public Beverage {
public:
	HouseBlend();
	~HouseBlend();
	virtual  float getCost();
	virtual string getDescription();
};

#endif /* HOUSEBLEND_H_ */
