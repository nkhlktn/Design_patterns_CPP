/*
 * WeatherStation.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: Nikhil
 */
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main()
{
	WeatherData* weatherdata = new WeatherData();
	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherdata);
	weatherdata->setMeasurements(60.0,65.0,30.4);
	return 0;
}



