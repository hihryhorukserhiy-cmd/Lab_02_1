#include <iostream>
#include <Windows.h>
#include "Triangle.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "=== 1. Створення об'єктів різними способами ===\n";

	Triangle t1;
	Triangle t2(3.0, 4.0);
	Triangle t3 = t2;
	Triangle t4 = makeTriangle(6.0, 8.0);

	cout << "t1(default): " << t1 << "\n";
	cout << "t2(param): " << t2 << "\n";
	cout << "t3(copy): " << t3 << "\n";
	cout << "t4(make): " << t4 << "\n";

	cout << "=== 2. Введення з клавіатури (operator >>) ===\n";
	cin >> t1;
	cout << "Оновлений t1: " << t1 << "\n\n";

	cout << "=== 3. Операції інкременту та декременту ===\n";
	cout << "Початковий t2: " << t2 << "\n";
	cout << "++t2 (збільшує first): " << ++t2 << "\n";
	cout << "--t2 (зменшує first):  " << --t2 << "\n";
	cout << "t2++ (збільшує second, повертає старе): " << t2++ << "\n";
	cout << "t2 після t2++: " << t2 << "\n";
	cout << "t2-- (зменшує second, повертає старе): " << t2-- << "\n";
	cout << "t2 після t2--: " << t2 << "\n\n";

	cout << "=== 4. Демонстрація масиву об'єктів ===\n";
	// Створення та ініціалізація масиву об'єктів
	Triangle arr[3] = {
		Triangle(5.0, 12.0),
		Triangle(8.0, 15.0),
		Triangle(7.0, 24.0)
	};

	for (int i = 0; i < 3; ++i)
	{
		std::cout << "arr[" << i << "]: " << arr[i] << "\n";
	}
	std::cout << "\n";

	std::cout << "=== 5. Розмір класу Triangle у пам'яті ===\n";
	std::cout << "Розмір об'єкта Triangle: " << sizeof(Triangle) << " байт(ів)\n";

	return 0;

}