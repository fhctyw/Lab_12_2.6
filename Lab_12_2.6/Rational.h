// Rational.h
#pragma once
#include <string>
using namespace std;

class Rational
{
public:
	class Pair {
		int a, b;
	public:
		Pair(int a = 0, int b = 0);
		Pair(const Pair&);
		Pair& operator=(const Pair&);

		int getA() const { return a; };
		void setA(double a) { this->a = a; };
		int getB() const { return b; };
		void setB(double b) { this->b = b; };

		operator string() const;
		friend ostream& operator<<(ostream& out, const Pair&);
		friend istream& operator>>(istream& out, Pair&);
		friend Pair operator-(const Pair& p1, const Pair p2);
	};
private:
	Pair pair;
public:
	Rational(Pair p = Pair(0, 0));
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	Pair getPair() const { return pair; };
	void setPair(Pair pair) { this->pair = pair; };

	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);

	friend Rational operator+(const Rational& r1, const Rational& r2);
	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend Rational operator-(const Rational& r1, const Rational& r2);
};