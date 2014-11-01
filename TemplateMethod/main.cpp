/*
 * main.cpp
 *
 *  Created on: Nov 1, 2014
 *      Author: Nikhil
 */

#include "CaffeineBeverage.h"
#include "Coffee.h"
#include "Tea.h"

int main()
{
	Tea* teaObj = new Tea();
	Coffee* coffeeObj = new Coffee();

	teaObj->prepareRecipe();

	cout<<"--------------------------------------"<<endl;

	coffeeObj->prepareRecipe();
	return 0;
}



