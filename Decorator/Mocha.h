/*
 * Mocha.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef MOCHA_H_
#define MOCHA_H_

#include "CondimentDecorator.h"

class Mocha: public CondimentDecorator {
public:
	Mocha(Beverage* beverage);
	~Mocha();
	virtual  float getCost();
	virtual string getDescription();;
};

#endif /* MOCHA_H_ */
