/*
 * MenuItem.h
 *
 *  Created on: Nov 6, 2014
 *      Author: Nikhil
 */

#ifndef MENUITEM_H_
#define MENUITEM_H_

#include "MenuComponent.h"
#include<iostream>

class MenuItem: public MenuComponent {
public:
	MenuItem(string nameobj, string descObj,
			 bool vegetarianobj, double price)
	{
		this->name = name;
		this->description = descObj;
		this->vegetarian = vegetarianobj;
		this->price = price;
	}
	~MenuItem(){}

	string getName()
	{
		return name;
	}

	string getDescription()
	{
		return description;
	}

	double getPrice()
	{
		return price;
	}

	bool isVegetarian()
	{
		return vegetarian;
	}

	void print()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Price: "<<price<<endl;
	}
private:
	string name;
	string description;
	bool vegetarian;
	double price;
};

#endif /* MENUITEM_H_ */
