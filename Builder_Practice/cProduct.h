#pragma once

class iProduct
{
public:
	virtual void PrintVariable() = 0;
};

class cProductTypeA : public iProduct
{
public:
	int _partA;
public:
	virtual void PrintVariable();
};

class cProductA1 : public cProductTypeA
{
public:
	float _partB;
	bool _partC;

	virtual void PrintVariable();
};

