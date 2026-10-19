#pragma once
#include <iostream>
#include <string>


class Triangle
{
private:
	double first;
	double second;
public:
	Triangle(); // Конструктор  за умовчанням
	Triangle(double f, double s); // Конструктор ініціалізації
	Triangle(const Triangle& t); // Конструктор копіювання
	~Triangle(); // Деструктор


	double GetFirst() const;
	double GetSecond() const;

	void SetFirst(double value);
	void SetSecond(double value);

	double hypotenuse() const;

	Triangle& operator = (const Triangle& t); // Операція присвоєння
	operator std::string() const; // Операція приведення типу


	Triangle& operator ++ (); // Префіксний інкремент
	Triangle& operator --(); //  Префіксний декремент

	Triangle operator ++ (int); // Постфіксний інкремент
	Triangle operator -- (int); // Постфіксний декремент

	// Операція виводу на екран
	
	friend std::ostream& operator << (std::ostream& out, const Triangle& t);
	friend std::istream& operator >> (std::istream& in, Triangle& t);
};

Triangle makeTriangle(double a, double b);

