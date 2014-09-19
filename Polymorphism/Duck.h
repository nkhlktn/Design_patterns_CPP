/*
 * Duck.h
 *
 *  Created on: Sep 18, 2014
 *      Author: Nikhil
 */

#ifndef DUCK_H_
#define DUCK_H_

#include "Flybehaviour.h"
#include "QuackBehviour.h"

class Duck
{
public:
	FlyBehaviour* flybehaviour;
	QuackBehaviour* quackbehaviour;

public:
	Duck();
	void performfly();
	void performQuack();
	void swim();
};



#endif /* DUCK_H_ */
