#pragma once

class cProductTypeA;
class cProductA1;
class cBuilder;

//∆—≈‰∏Æ ∞≥≥‰!!!!!!!!!
class cDirector
{

public:
	cDirector();
	~cDirector();


	cProductTypeA* CreateProductTypeA(cBuilder* builder);
	cProductA1* CreateProductA1(cBuilder* builder);
};

