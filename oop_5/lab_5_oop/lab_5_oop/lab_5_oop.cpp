// lab_5_oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

class Base
{
public:
	virtual float S() = 0;
	virtual float S1() = 0;

};
class Pryamok : public Base
{
	float a;
	float b;

	float s;
public:
	virtual float S() override
	{
		s = a * b;
		return s;

	}
	virtual float S1() override
	{
		return 0;
	}
	void setValue(float a, float b)
	{
		this->a = a;
		this->b = b;

	}
};

class PryamokTRyc : public Base
{
	float a;
	float b;

	float s;
public:
	virtual float S() override
	{
		s = (a * b) / 2;
		return s;

	}
	virtual float S1() override
	{
		return 0;
	}
	void setValue(float a, float b)
	{
		this->a = a;
		this->b = b;

	}
};


class Ball : public Base
{
	float r;
	float s;
public:
	virtual float S() override
	{
		s = 2 * M_PI * r;
		return s;
	}
	virtual float S1()
	{
		return 0;
	}
	void setValue(float rOfBall)
	{
		this->r = rOfBall;
	}
};
class Trap : public Base
{
	float a;
	float b;
	float h;

	float s;
public:
	virtual float S() override
	{
		s = ((a * b) / 2) * h;
		return s;

	}
	virtual float S1() override
	{
		return 0;
	}
	void setValue(float a, float b, float h)
	{
		this->a = a;
		this->b = b;
		this->h = h;

	}
};
int main()
{
	setlocale(LC_ALL, "Ukrainian");

	float aPryamok;
	float bPryamok;

	cout << "Введiть ребра прямокутника" << endl;
	cout << "сторона а = ";
	cin >> aPryamok;
	cout << "сторона b = ";
	cin >> bPryamok;

	Pryamok pryamok;
	Base* basePryamok = &pryamok;
	pryamok.setValue(aPryamok, bPryamok);
	cout << "площа прямокутника  = " << basePryamok->S() << endl << endl;

	float aPryamokTRyc;
	float bPryamokTRyc;

	cout << "Введiть ребра прямокутного трикутника" << endl;
	cout << "сторона а = ";
	cin >> aPryamokTRyc;
	cout << "сторона b = ";
	cin >> bPryamokTRyc;

	PryamokTRyc  pryamokTRyc;

	Base* basePryamokTRyc = &pryamokTRyc;
	pryamokTRyc.setValue(aPryamokTRyc, bPryamokTRyc);
	cout << "площа прямокутного трикутника  = " << basePryamokTRyc->S() << endl << endl;


	float radius;


	cout << "Введiть радiус  " << endl;
	cout << "r = ";
	cin >> radius;

	Ball ball;

	Base* baseBall = &ball;
	ball.setValue(radius);
	cout << "площа кола = " << baseBall->S() << endl << endl;


	float atrap;
	float btrap;
	float htrap;


	cout << "Введiть сторони трапецiї  " << endl;
	cout << "сторона а = ";
	cin >> atrap;
	cout << "сторона b = ";
	cin >> btrap;
	cout << "сторона h = ";
	cin >> htrap;

	Trap  trap;
	Base* baseTrap = &trap;
	trap.setValue(atrap, btrap, htrap);
	cout << "площа трапецiї  = " << baseTrap->S() << endl << endl;


	system("pause");
	return 0;

}

