/*
 * Coffee.h
 *
 *  Created on: Nov 1, 2014
 *      Author: Nikhil
 */

#ifndef COFFEE_H_
#define COFFEE_H_

#include "CaffeineBeverage.h"

class Coffee: public CaffeineBeverage {
public:
	Coffee() {}
	~Coffee() {}

	virtual void brew()
	{
		cout<<"Brew Coffee"<<endl;
	}

	virtual void addCondiment()
	{
		cout<<"Add sugar and milk"<<endl;
	}
};

#endif /* COFFEE_H_ */
