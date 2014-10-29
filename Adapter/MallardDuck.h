/*
 * MallardDuck.h
 *
 *  Created on: Oct 29, 2014
 *      Author: Nikhil
 */

#ifndef MALLARDDUCK_H_
#define MALLARDDUCK_H_

#include "Duck.h"
#include<iostream>
using namespace std;

class MallardDuck: public Duck {
public:
	MallardDuck(){}
	~MallardDuck(){}

	virtual void Quack()
	{
		cout<<"Quack Quack"<<endl;
	}

	virtual void Fly()
	{
		cout<<"Fly like a duck"<<endl;
	}
};

#endif /* MALLARDDUCK_H_ */
