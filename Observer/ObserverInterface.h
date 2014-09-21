/*
 * ObserverInterface.h
 *
 *  Created on: Sep 21, 2014
 *      Author: Nikhil
 */

#ifndef OBSERVERINTERFACE_H_
#define OBSERVERINTERFACE_H_

class Observer_Interface {
public:
	virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif /* OBSERVERINTERFACE_H_ */
