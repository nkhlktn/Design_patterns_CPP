/*
 * CaffeineBeverage.h
 *
 *  Created on: Nov 1, 2014
 *      Author: Nikhil
 */

#ifndef CAFFEINEBEVERAGE_H_
#define CAFFEINEBEVERAGE_H_
#include<iostream>
using namespace std;

class CaffeineBeverage {
public:
	CaffeineBeverage() {}
	~CaffeineBeverage() {}

	void prepareRecipe()
	{
		boillWater();
		brew();
		pourInCup();
		addCondiment();
	}

	void boillWater()
	{
		cout<<"Boil Water"<<endl;
	}

	virtual void brew() = 0;

	void pourInCup()
	{
		cout<<"Pouring in cup"<<endl;
	}

	virtual void addCondiment() = 0;
};

#endif /* CAFFEINEBEVERAGE_H_ */
