/*
 * Pizza.h
 *
 *  Created on: Sep 29, 2014
 *      Author: Nikhil
 */

#ifndef PIZZA_H_
#define PIZZA_H_


#include<string>
#include<iostream>
using namespace std;

class Pizza {
public:
	string name;
	string dough;
	string sauce;

	Pizza();
	~Pizza();
	virtual void prepare()
	{
		cout<<"Preparing "<<name<<endl;
		cout<<"Tossing the dough... "<<endl;
		cout<<"Adding the sauce..."<<endl;
	}
	virtual void bake()
	{
		cout<<"Baking for 25 minutes"<<endl;
	}
	virtual void cut()
	{
		cout<<"Cutting into diagonal pieces"<<endl;
	}
	virtual void box()
	{
		cout<<"Placing it in the pizza box"<<endl;
	}
};

#endif /* PIZZA_H_ */
