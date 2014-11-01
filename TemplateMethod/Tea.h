/*
 * Tea.h
 *
 *  Created on: Nov 1, 2014
 *      Author: Nikhil
 */

#ifndef TEA_H_
#define TEA_H_

#include "CaffeineBeverage.h"

class Tea: public CaffeineBeverage {
public:
	Tea() {}
	~Tea() {}

	virtual void brew()
	{
		cout<<"Steep tea bag"<<endl;
	}

	virtual void addCondiment()
	{
		cout<<"Add lemon"<<endl;
	}
};

#endif /* TEA_H_ */
