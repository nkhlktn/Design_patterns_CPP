/*
 * GarageLight.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef GARAGELIGHT_H_
#define GARAGELIGHT_H_

#include<iostream>
using namespace std;

class GarageLight {
public:
	GarageLight()
	{

	}
	~GarageLight()
	{

	}

	void garageLightOn()
	{
		cout<<"Garage Light ON"<<endl;
	}

	void garageLightDim()
	{
		cout<<"Garage Light Dim"<<endl;
	}
};

#endif /* GARAGELIGHT_H_ */
