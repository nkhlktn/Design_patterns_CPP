/*
 * GumBallMachine.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: Nikhil
 */

#include "GumBallMachine.h"

NoQuarter::NoQuarter(GumBallMachine* gumball)
{
	gumballObj = gumball;
}

NoQuarter::~NoQuarter(){}

void NoQuarter::insertCoin()
{
	cout<<"Entered a coin"<<endl;
	gumballObj->setState( gumballObj->getQuarterState() );
}

void NoQuarter::ejectCoin()
{
	cout<<"No Coin"<<endl;
}

void NoQuarter::turnCrank()
{
	cout<<"Enter Coin"<<endl;
}

HasQuarter::HasQuarter(GumBallMachine* gumball)
	{
		gumballObj = gumball;
	}
HasQuarter::~HasQuarter(){}

void HasQuarter::insertCoin()
{
	cout<<"Coin already present"<<endl;
}

 void HasQuarter::ejectCoin()
{
	cout<<"Collect your coin";
	gumballObj->setState(gumballObj->getnoQuarterState());
}

 void HasQuarter::turnCrank()
{
	cout<<"Dispensing"<<endl;
	gumballObj->decerementGumBalls();
	if(gumballObj->hasGumBalls())
	{
		gumballObj->setState(gumballObj->getnoQuarterState());
	}
	else
	{
		gumballObj->setState(gumballObj->getsoldOutState());
	}
}

SoldOut::SoldOut(GumBallMachine* gumball)
	{
		gumballObj = gumball;
	}
SoldOut::~SoldOut(){}

 void SoldOut::insertCoin()
{
	cout<<"No use"<<endl;
}
 void SoldOut::ejectCoin()
{
	cout<<"No use"<<endl;
}
 void SoldOut::turnCrank()
{
	cout<<"No use"<<endl;
}

GumBallMachine::GumBallMachine(int numberOfGumBalls)
	{
		noQuarterState = new NoQuarter(this);
		hasQuarterState = new HasQuarter(this);
		soldOut = new SoldOut(this);

		state = noQuarterState;

		this->numberOfGumBalls = numberOfGumBalls;
	}
GumBallMachine::~GumBallMachine() {}

	GumBallState* GumBallMachine::getnoQuarterState()
	{
		return noQuarterState;
	}

	GumBallState* GumBallMachine::getQuarterState()
	{
		return hasQuarterState;
	}

	GumBallState* GumBallMachine::getsoldOutState()
	{
		return soldOut;
	}

	void GumBallMachine::setState(GumBallState* state)
	{
		this->state = state;
	}
	bool GumBallMachine::hasGumBalls()
	{
		bool retval = false;
		if( numberOfGumBalls > 0 )
		{
			retval = true;
		}
		return retval;
	}

	void GumBallMachine::decerementGumBalls()
	{
		numberOfGumBalls--;
	}

	void GumBallMachine::insertCoin(){
		this->state->insertCoin();
	}

	void GumBallMachine::turnCrank()
	{
		this->state->turnCrank();
	}

	void GumBallMachine::ejectCoin()
	{
		this->state->ejectCoin();
	}
