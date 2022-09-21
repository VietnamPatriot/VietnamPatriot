#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int num;
	int den;
public:
	Fraction(int num, int den);
	friend ostream& operator <<(ostream& os, const Fraction& f);
	Fraction operator-(Fraction f);
	Fraction operator+(Fraction f);
	Fraction operator*(Fraction f);
	Fraction operator/(Fraction f);
};
