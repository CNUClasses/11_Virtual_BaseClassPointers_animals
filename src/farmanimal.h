/*
 * farmanimal.h
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#ifndef FARMANIMAL_H_
#define FARMANIMAL_H_
#include <string>
#include "animal.h"

class farmanimal: public animal {
public:
	farmanimal();
	virtual ~farmanimal();
	virtual std::string talk();
};

#endif /* FARMANIMAL_H_ */
