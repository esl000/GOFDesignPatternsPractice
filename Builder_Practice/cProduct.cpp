#include "pch.h"
#include "cProduct.h"
#include <iostream>

void cProductTypeA::PrintVariable()
{
	std::cout << _partA << std::endl;
}

void cProductA1::PrintVariable()
{
	cProductTypeA::PrintVariable();
	std::cout << _partB << std::endl;
	std::cout << _partC << std::endl;
}
