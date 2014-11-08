/*
 * GumBallMachine.h
 *
 *  Created on: Nov 8, 2014
 *      Author: Nikhil
 */

#ifndef GUMBALLMACHINE_H_
#define GUMBALLMACHINE_H_

#include "GumBallState.h"
#include<iostream>
using namespace std;

class GumBallMachine;

class NoQuarter: public GumBallState {
public:
	NoQuarter(GumBallMachine* gumball);
	~NoQuarter();

	virtual void insertCoin();
	virtual void ejectCoin();
	virtual void turnCrank();
private:
	GumBallMachine* gumballObj;
};

class HasQuarter: public GumBallState {
public:
	HasQuarter(GumBallMachine* gumball);
	~HasQuarter();

	virtual void insertCoin();
	virtual void ejectCoin();
	virtual void turnCrank();
private:
	GumBallMachine* gumballObj;
};

class SoldOut: public GumBallState {
public:
	SoldOut(GumBallMachine* gumball);
	~SoldOut();

	virtual void insertCoin();
	virtual void ejectCoin();
	virtual void turnCrank();

private:
	GumBallMachine* gumballObj;
};

class GumBallMachine {
public:
	GumBallMachine(int numberOfGumBalls);
	~GumBallMachine();

	GumBallState* getnoQuarterState();
	GumBallState* getQuarterState();
	GumBallState* getsoldOutState();
	void setState(GumBallState* state);
	bool hasGumBalls();
	void decerementGumBalls();

	void insertCoin();
	void turnCrank();
	void ejectCoin();

private:
	GumBallState* noQuarterState;
	GumBallState* hasQuarterState;
	GumBallState* soldOut;

	GumBallState* state;

	int numberOfGumBalls;
};


#endif /* GUMBALLMACHINE_H_ */
