#include "pch.h"
#include "cBuilder.h"
#include "cProduct.h"

cBuilder::cBuilder()
{

}

void cAtypeBuilder::BuildProduct()
{
	_product = new cProductTypeA();
}

void cA1Builder::BuildProduct()
{
	_product = new cProductA1();
}

void cA1Builder::BuildPartA(int var)
{
	_product->_partA = var;
}

void cA1Builder::BuildPartB(float var)
{
	_product->_partB = var;
}

void cA1Builder::BuildPartC(bool var)
{
	_product->_partC = var;
}

iProduct* cA1Builder::GetProduct()
{
	return _product;
}

void cAtypeBuilder::BuildPartA(int var)
{
	_product->_partA = var;
}

iProduct* cAtypeBuilder::GetProduct()
{
	return _product;
}
