/*
 * Whip.cpp
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#include "Whip.h"

Whip::Whip(Beverage* beverage) {
	this->beverage = beverage;
}

Whip::~Whip() {

}

string Whip::getDescription()
{
	return beverage->getDescription()+",Whip";
}

float Whip::getCost()
{
	return beverage->getCost()+0.10;
}


