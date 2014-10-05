/*
 * Command.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef COMMAND_H_
#define COMMAND_H_

class Command {
public:
	Command()
	{

	}
	~Command()
	{

	}
	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif /* COMMAND_H_ */
