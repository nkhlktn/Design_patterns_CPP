/*
 * SimplePizzaFactory.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef SIMPLEPIZZAFACTORY_H_
#define SIMPLEPIZZAFACTORY_H_
#include<string>
using namespace std;
#include "Pizza.h"
#include "CheesePizza.h"
#include "MeatPizza.h"

class SimplePizzaFactory {
public:
	SimplePizzaFactory()
	{

	}
	~SimplePizzaFactory()
	{

	}
	Pizza* createPizza(string typeOfPizza)
	{
		Pizza* pizza;

		if( typeOfPizza.compare("cheese") )
		{
			pizza = new CheesePizza();
		}
		else if( typeOfPizza.compare("meat") )
		{
			pizza = new MeatPizza();
		}
		else
		{
			cout<<"This is just an example"<<endl;
			pizza = new MeatPizza();
		}
		return pizza;
	}
};

#endif /* SIMPLEPIZZAFACTORY_H_ */
