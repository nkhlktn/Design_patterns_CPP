/*
 * Duck.cpp
 *
 *  Created on: Sep 18, 2014
 *      Author: Nikhil
 */

#include "Duck.h"
#include <iostream>
using namespace std;

Duck::Duck()
{

}

	void Duck::performfly()
	{
		this->flybehaviour->fly();
	}

	void Duck::performQuack()
	{
		this->quackbehaviour->quack();
	}

	void Duck::swim()
	{
		cout<<"Duck Swimming"<<endl;
	}

