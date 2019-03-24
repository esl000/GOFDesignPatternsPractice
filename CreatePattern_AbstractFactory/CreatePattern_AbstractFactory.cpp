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
public:
	int a;
	int b;

	virtual void PrintVariable()
	{
		std::cout << a << "," << b << std::endl;
	}
};

class MyClass2 : public MyClassInterFace
{
public:
	float a;
	float b;
	virtual void PrintVariable()
	{
		std::cout << a << "," << b << std::endl;
	}
};


class MyClassFactoryInterface
{
public:
	virtual MyClassInterFace* CreateInstanceA() = 0;
	virtual MyClassInterFace* CreateInstanceB() = 0;
};

class MyClassFactory1 : public MyClassFactoryInterface
{
private:
	MyClassFactory1() {}


public:

	static MyClassFactory1* GetInstance()
	{
		static MyClassFactory1 instance;
		return &instance;
	}

	virtual MyClassInterFace* CreateInstanceA()
	{
		MyClass1* instance = new MyClass1();
		instance->a = 10;
		instance->b = 20;
		return instance;
	}

	virtual MyClassInterFace* CreateInstanceB()
	{
		MyClass2* instance = new MyClass2();
		instance->a = 3.4444f;
		instance->b = 2.5555f;
		return instance;
	}
};

class MyClassFactory2 : public MyClassFactoryInterface
{
private:
	MyClassFactory2() {}


public:

	static MyClassFactory2* GetInstance()
	{
		static MyClassFactory2 instance;
		return &instance;
	}

	virtual MyClassInterFace* CreateInstanceA()
	{
		MyClass1* instance = new MyClass1();
		instance->a = 30;
		instance->b = 50;
		return instance;
	}

	virtual MyClassInterFace* CreateInstanceB()
	{
		MyClass2* instance = new MyClass2();
		instance->a = 8.4444f;
		instance->b = 111.5555f;
		return instance;
	}
};



int main()
{
    std::cout << "Hello World!\n"; 

	MyClassFactory1::GetInstance()->CreateInstanceA()->PrintVariable();

	MyClassFactory1::GetInstance()->CreateInstanceB()->PrintVariable();

	MyClassFactory1::GetInstance()->CreateInstanceA()->PrintVariable();

	MyClassFactory2::GetInstance()->CreateInstanceB()->PrintVariable();
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

