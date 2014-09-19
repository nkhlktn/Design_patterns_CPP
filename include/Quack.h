/*
 * Quack.h
 *
 *  Created on: Sep 18, 2014
 *      Author: Nikhil
 */

#ifndef QUACK_H_
#define QUACK_H_

#include "QuackBehviour.h"

class Quack: public QuackBehaviour {
public:
	virtual void quack();
	Quack();
	~Quack();
};

#endif /* QUACK_H_ */
