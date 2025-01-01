#include "GDTestClass.h"
#include <iostream>

GDTestClass::GDTestClass(int someValue, std::string someName)
{
	this->value = someValue;
	this->someName = someName;
}

void GDTestClass::doSomething()
{
	std::cout << "Test function for GDTest Class. Some value: " << this->value << " Some Name: " << this->someName << std::endl;
}
