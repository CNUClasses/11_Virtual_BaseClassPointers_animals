/*
 * sheep.h
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#ifndef SHEEP_H_
#define SHEEP_H_

#include <string>
#include "farmanimal.h"

class sheep: public farmanimal {
public:
	sheep();
	virtual ~sheep();
	virtual std::string talk();
};

#endif /* SHEEP_H_ */
