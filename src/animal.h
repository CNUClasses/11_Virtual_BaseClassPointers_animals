/*
 * animal.h
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>

class animal {
public:
	animal();
	virtual ~animal();
	virtual std::string talk();
};

#endif /* ANIMAL_H_ */
