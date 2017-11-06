//============================================================================
// Name        : demo_delete.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "sheep.h"

int main() {
	animal an1;
	farmanimal an2;
	sheep an3;
	
	std::cout<<"no pointers, is easy"<<std::endl;
	std::cout<<an1.talk()<<std::endl;
	std::cout<<an2.talk()<<std::endl;
	std::cout<<an3.talk()<<std::endl;
	
	std::cout<<endl<<"using a base class pointer to manipulate derived classes"<<std::endl;

	animal *p = &an1;
	std::cout<<p->talk()<<std::endl;
	
	p = &an2;
	std::cout<<p->talk()<<std::endl;
	
	p = &an3;
	std::cout<<p->talk()<<std::endl;
	
	
}
