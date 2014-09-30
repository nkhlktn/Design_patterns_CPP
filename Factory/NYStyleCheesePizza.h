/*
 * NYStyleCheesePizza.h
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#ifndef NYSTYLECHEESEPIZZA_H_
#define NYSTYLECHEESEPIZZA_H_

#include "Pizza.h"

class NYStyleCheesePizza: public Pizza {
public:
	NYStyleCheesePizza()
	{
		name = "NY styple cheese and sauce pizza";
		dough = "Thin crust dough";
		sauce = "Marinara sauce";
	}
	~NYStyleCheesePizza()
	{

	}
};

#endif /* NYSTYLECHEESEPIZZA_H_ */
