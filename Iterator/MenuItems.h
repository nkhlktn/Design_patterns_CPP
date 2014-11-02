/*
 * MenuItems.h
 *
 *  Created on: Nov 2, 2014
 *      Author: Nikhil
 */

#ifndef MENUITEMS_H_
#define MENUITEMS_H_

#include<string>
using namespace std;
class MenuItems {
public:
	MenuItems(string naam, string desc, bool veggie, double price):name(naam), description(desc),
	vegetarian(veggie),price(price)
	{}
	~MenuItems() {}

	string getName()
	{
		return name;
	}

	string getDescription()
	{
		return description;
	}

	bool isVegetarian()
	{
		return vegetarian;
	}

	double getPrice()
	{
		return price;
	}

private:
	string name;
	string description;
	bool vegetarian;
	double price;
};

#endif /* MENUITEMS_H_ */
