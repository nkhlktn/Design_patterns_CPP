/*
 * main.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#include "ChocolateBoiler.h"

int main()
{
	ChocolateBoiler * cb , *cb2;
	cb = ChocolateBoiler::getInstance();
	cb->Boil();

	cb2 = ChocolateBoiler::getInstance();
	cb2->StopBoiling();
	return 0;
}


// Problem faced: Static instance variable has to be defined otherwise
// it is not linked.


// Singletons are not thread-safe therefore synchronization is required
// on the create method.
