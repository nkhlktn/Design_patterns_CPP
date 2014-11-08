/*
 * main.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: Nikhil
 */
#include "GumBallMachine.h"

int main()
{
	GumBallMachine* gumballMachine = new GumBallMachine(1);

	gumballMachine->insertCoin();

	gumballMachine->turnCrank();

	gumballMachine->insertCoin();
	return 0;
}



