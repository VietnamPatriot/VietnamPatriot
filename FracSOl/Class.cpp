#include "Class.h"

Fraction::Fraction(int a, int b)
{
	num = a;
	if (b != 0)
	{
		den = b;
	}
}

ostream& operator<<(ostream& os, const Fraction& f)
{
	os << f.num << "/" << f.den;
	return os;
}

Fraction Fraction::operator+(Fraction f)
{
	Fraction sum(0, 1);
	sum.num = num * f.den + f.num * den;
	sum.den = den * f.den;
	return sum;
}

Fraction Fraction::operator-(Fraction f)
{
	Fraction min(0, 1);
	min.num = num * f.den - f.num * den;
	min.den = den * f.den;
	return min;
}

Fraction Fraction::operator*(Fraction f)
{
	Fraction mul(0, 1);
	mul.num = num * f.num;
	mul.den = den * f.den;
	return mul;
}

Fraction Fraction::operator/(Fraction f)
{
	Fraction div(0, 1);
	div.num = num * f.den;
	div.den = den * f.num;
	return div;
}
