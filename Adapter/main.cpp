/*
 * main.cpp
 *
 *  Created on: Oct 29, 2014
 *      Author: Nikhil
 */


#include "TurkeyAdapter.h"
#include "MallardDuck.h"
#include "Turkey.h"

int main()
{
	MallardDuck* mallardObj = new MallardDuck();
	Turkey* turkeyObj = new TurkeyAdapter(mallardObj);
	turkeyObj->gobble();
	turkeyObj->shortFly();
	return 0;
}
