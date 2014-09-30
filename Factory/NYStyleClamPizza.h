/*
 * NYStyleClamPizza.h
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#ifndef NYSTYLECLAMPIZZA_H_
#define NYSTYLECLAMPIZZA_H_

#include "Pizza.h"

class NYStyleClamPizza: public Pizza {
public:
	NYStyleClamPizza()
	{
		name = "NY style clam pizza";
		dough = "Thin crust dough";
		sauce = "Marinara sauce";
	}
	~NYStyleClamPizza()
	{

	}
};

#endif /* NYSTYLECLAMPIZZA_H_ */
