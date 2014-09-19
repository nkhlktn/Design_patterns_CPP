/*
 * MuteQuack.h
 *
 *  Created on: Sep 18, 2014
 *      Author: Nikhil
 */

#ifndef MUTEQUACK_H_
#define MUTEQUACK_H_

#include "QuackBehviour.h"

class MuteQuack: public QuackBehaviour {
public:
	virtual void quack();
	MuteQuack();
	~MuteQuack();
};

#endif /* MUTEQUACK_H_ */
