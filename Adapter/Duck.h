/*
 * Duck.h
 *
 *  Created on: Oct 29, 2014
 *      Author: Nikhil
 */

#ifndef DUCK_H_
#define DUCK_H_

class Duck {
public:
	Duck(){}
	~Duck(){}

	virtual void Quack() = 0;
	virtual void Fly() = 0;
};

#endif /* DUCK_H_ */
