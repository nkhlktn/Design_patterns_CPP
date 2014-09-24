/*
 * HouseBlend.cpp
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#include "HouseBlend.h"

HouseBlend::HouseBlend() {
	description = "House Blend Coffee";

}

HouseBlend::~HouseBlend() {
	// TODO Auto-generated destructor stub
}

float HouseBlend::getCost()
{
	return 0.89;
}

string HouseBlend::getDescription()
{
	return "House Blend";
}

