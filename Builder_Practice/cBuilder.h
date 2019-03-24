#pragma once
class iProduct;
class cProductTypeA;
class cProductA1;

class cBuilder
{
public:
	virtual void BuildProduct() {};
	virtual void BuildPartA(int var) {};
	virtual void BuildPartB(float var) {};
	virtual void BuildPartC(bool var) {};

	virtual iProduct* GetProduct() = 0;
protected:
	cBuilder();
};

class cAtypeBuilder : public cBuilder
{
private:
	cProductTypeA* _product;
public:
	virtual void BuildProduct();
	virtual void BuildPartA(int var);
	virtual iProduct* GetProduct();
};

class cA1Builder : public cAtypeBuilder
{
private:
	cProductA1* _product;
public:
	virtual void BuildProduct();
	virtual void BuildPartA(int var);
	virtual void BuildPartB(float var);
	virtual void BuildPartC(bool var);
	virtual iProduct* GetProduct();
};


