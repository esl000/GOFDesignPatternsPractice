// CreatePattern_AbstractFactory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

class MyClassInterFace
{
public:
	virtual void PrintVariable() = 0;
};

class MyClass1 : public MyClassInterFace
{
private:
	PROPERTY(int, a, AA)
	PROPERTY(int, b, BB)
	//int a = 0;
	//int b = 0;
public:
	virtual void PrintVariable()
	{
		std::cout << a << "," << b << std::endl;
	}
};

class MyClass2 : public MyClassInterFace
{

private:
	PROPERTY(float, a, AA)
	PROPERTY(float, b, BB)
public:
	virtual void PrintVariable()
	{
		std::cout << a << "," << b << std::endl;
	}
};

class MyClassFactoryInterface
{
public:
	virtual MyClassInterFace* CreateInstance() = 0;
};

class MyClassFactory1 : public MyClassFactoryInterface
{
public:
	virtual MyClassInterFace* CreateInstance()
	{
		MyClass1* instance = new MyClass1();
		instance->AA(10);
		instance->BB(20);
		return instance;
	}
};

class MyClassFactory2 : public MyClassFactoryInterface
{
public:
	virtual MyClassInterFace* CreateInstance()
	{
		MyClass2* instance = new MyClass2();
		instance->AA(3.4444f);
		instance->BB(2.5555f);
		return instance;
	}
};



int main()
{
    std::cout << "Hello World!\n"; 
	MyClassFactoryInterface* factory1 = new MyClassFactory1();
	factory1->CreateInstance()->PrintVariable();

	MyClassFactoryInterface* factory2 = new MyClassFactory2();
	factory2->CreateInstance()->PrintVariable();
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

