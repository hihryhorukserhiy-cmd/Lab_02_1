#include "Triangle.h"
#include <sstream>
#include <cmath>
#include <cstdlib>

Triangle::Triangle()
{
	first = 1.0;
	second = 1.0;
}

Triangle::Triangle(double f, double s)
{
	SetFirst(f);
	SetSecond(s);
}

Triangle::Triangle(const Triangle& t)
{
	first = t.first;
	second = t.second;
}

Triangle::~Triangle()
{
}

double Triangle::GetFirst() const
{

	return first;
}

double Triangle::GetSecond() const
{
	return second;
}

void Triangle::SetFirst(double value)
{
	if (value > 0)
	{
		first = value;
	}
	else
	{
		std::cerr << "Помилка: Катет first має бути більшим за 0! Присвоєно значення 1.0 за замовчуванням. \n";

	}
}
void Triangle::SetSecond(double value)
{
	if (value > 0)
	{
		second = value;
	}
	else
	{
		std::cerr << "Помилка: Катет second має бути більшим за 0! Присвоєно значення 1.0 за замовчуванням. \n";

	}
}

double Triangle::hypotenuse() const
{
	return std::sqrt(first * first + second * second);
}

Triangle& Triangle::operator=(const Triangle& t)
{
	if (this != &t)
	{
		first = t.first;
		second = t.second;
	}
	return *this;
}

Triangle::operator std::string() const
{
	std::stringstream ss;
	ss << "Катет а (first) = " << first
		<< ", Катет b (second) = " << second
		<< ", Гіпотенуза = " << hypotenuse();
	return ss.str();
}

Triangle& Triangle::operator ++ ()
{
	++first;
	return *this;
}

Triangle& Triangle::operator -- ()
{
	if (first - 1.0 > 0)
	{
		--first;
	}
	else
	{
		std::cerr << "Помилка: Катет first не може бути <= 0 після декременту!\n";

	}
	return *this;
}

Triangle Triangle::operator ++ (int)
{
	Triangle temp(*this);
	second++;
	return temp;
}

Triangle Triangle::operator -- (int)
{
	Triangle temp(*this);
	if (second - 1.0 > 0)
	{
		second--;
	}
	else
	{
		std::cerr << "Помилка: Катет second не може бути <= 0 після декременту!\n";
	}
	return temp;
}

std::ostream& operator << (std::ostream& out, const Triangle& t)
{
	out << std::string(t);
	return out;
}

std::istream& operator >> (std::istream& in, Triangle& t)
{
	double f, s;
	std::cout << "Введіть катет a (first): ";
	in >> f;
	std::cout << "Введіть катет b (second): ";
	in >> s;
	t.SetFirst(f);
	t.SetSecond(s);

	return in; // повертає in
}

Triangle makeTriangle(double a, double b)
{
	if (a <= 0 || b <= 0)
	{
		std::cerr << "Помилка у функції makeTriangle: сторони повиннф бути строго додатними!\n";
		exit(1);
	}
	return Triangle(a, b);
}






	










