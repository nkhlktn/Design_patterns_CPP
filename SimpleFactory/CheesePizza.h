/*
 * CheesePizza.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef CHEESEPIZZA_H_
#define CHEESEPIZZA_H_

#include "Pizza.h"
#include<iostream>
using namespace std;

class CheesePizza: public Pizza {
public:
	CheesePizza()
	{

	}
	~CheesePizza()
	{

	}

	virtual void prepare()
	{
		cout<<"Preparing Cheese pizza"<<endl;
	}

	virtual void bake()
	{
		cout<<"Baking Cheese pizza"<<endl;;
	}

	virtual void cut()
	{
		cout<<"Cutting Cheese pizza"<<endl;
	}

	virtual void box()
	{
		cout<<"Packing Cheese pizza"<<endl;
	}
};

#endif /* CHEESEPIZZA_H_ */
