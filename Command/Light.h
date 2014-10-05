/*
 * Light.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef LIGHT_H_
#define LIGHT_H_

#include<iostream>
using namespace std;

class Light {
public:
	Light()
	{

	}
	~Light()
	{

	}
	void lighton()
	{
		cout<<"Lights ON"<<endl;
	}

	void lightoff()
	{
		cout<<"Lights Off"<<endl;
	}
};

#endif /* LIGHT_H_ */
