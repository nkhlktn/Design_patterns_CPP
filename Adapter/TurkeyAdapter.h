/*
 * TurkeyAdapter.h
 *
 *  Created on: Oct 29, 2014
 *      Author: Nikhil
 */

#ifndef TURKEYADAPTER_H_
#define TURKEYADAPTER_H_

#include "Turkey.h"
#include "Duck.h"

class TurkeyAdapter: public Turkey {
public:
	TurkeyAdapter(Duck* Obj):duckObj(Obj)
	{}

	~TurkeyAdapter() {}

	virtual void gobble()
	{
		duckObj->Quack();
	}

	virtual void shortFly()
	{
		duckObj->Fly();
	}
private:
	Duck* duckObj;
};

#endif /* TURKEYADAPTER_H_ */
