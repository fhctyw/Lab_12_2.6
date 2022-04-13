// Rational.cpp
#include "Rational.h"
#include <iostream>
#include <sstream>
using namespace std;

Rational::Pair::Pair(int a, int b)
{
	setA(a);
	setB(b);
}

Rational::Pair::Pair(const Rational::Pair& p)
{
	*this = p;
}

Rational::Pair& Rational::Pair::operator=(const Rational::Pair& p)
{
	a = p.a;
	b = p.b;
	return *this;
}

Rational::Pair::operator string() const
{
	stringstream ss;
	ss << '(' << a << ", " << b << ')';
	return ss.str();
}

Rational::Pair operator-(const Rational::Pair& p1, const Rational::Pair p2)
{
	return Rational::Pair(p1.a - p2.a, p1.b - p2.b);
}

ostream& operator<<(ostream& out, const Rational::Pair& p)
{
	out << string(p);
	return out;
}

istream& operator>>(istream& in, Rational::Pair& p)
{
	cout << "Перше число: "; cin >> p.a;
	cout << "Друге число: "; cin >> p.b;
	return in;
}



Rational::Rational(Pair p)
{
	setPair(p);
}

Rational::Rational(const Rational& p)
{
	*this = p;
}

Rational& Rational::operator=(const Rational& p)
{
	pair = p.pair;
	return *this;
}

Rational::operator string() const
{
	stringstream ss;
	ss << pair.getA() << '/' << pair.getB();
	return ss.str();
}

ostream& operator<<(ostream& out, const Rational& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, Rational& r)
{
	int a, b;
	cout << "Чисельник: "; cin >> a;
	cout << "Знаменник: "; cin >> b;
	r.pair = { a, b };
	return in;
}

Rational operator+(const Rational& r1, const Rational& r2)
{
	return Rational({ r1.pair.getA() * r2.pair.getB() + r1.pair.getB() * r2.pair.getA(), r1.pair.getB() * r2.pair.getB() });
}

Rational operator/(const Rational& r1, const Rational& r2)
{
	return Rational({ r1.pair.getA() * r1.pair.getB(), r2.pair.getA() * r2.pair.getB() });
}

Rational operator-(const Rational& r1, const Rational& r2)
{

	return Rational({ r1.pair.getA() * r2.pair.getB() - r1.pair.getB() * r2.pair.getA(), r1.pair.getB() * r2.pair.getB() });
}
