/*
 * MeatPizza.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef MEATPIZZA_H_
#define MEATPIZZA_H_
#include <iostream>
#include "Pizza.h"
using namespace std;

class MeatPizza:public Pizza {
public:
	MeatPizza()
	{

	}
	~MeatPizza()
	{

	}

	virtual void prepare()
	{
		cout<<"Preparing Meat pizza"<<endl;
	}

	virtual void bake()
	{
		cout<<"Baking Meat pizza"<<endl;;
	}

	virtual void cut()
	{
		cout<<"Cutting Meat pizza"<<endl;
	}

	virtual void box()
	{
		cout<<"Packing Meat pizza"<<endl;
	}
};

#endif /* MEATPIZZA_H_ */
