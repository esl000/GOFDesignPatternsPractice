#include "pch.h"
#include "cDirector.h"
#include "cProduct.h"
#include "cBuilder.h"

cDirector::cDirector()
{
}


cDirector::~cDirector()
{
}

cProductTypeA* cDirector::CreateProductTypeA(cBuilder* builder)
{
	builder->BuildProduct();
	builder->BuildPartA(1000);
	return (cProductTypeA*)builder->GetProduct();
}

cProductA1* cDirector::CreateProductA1(cBuilder* builder)
{
	builder->BuildProduct();
	builder->BuildPartA(999);
	builder->BuildPartB(44.1111f);
	builder->BuildPartC(true);
	return (cProductA1*)builder->GetProduct();
}
