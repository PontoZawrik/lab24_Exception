#include <iostream>
#include <stdexcept>
#include <exception>
#include <new>
#include <typeinfo>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	double z;
	int a = 1, x, y;

	while (a != 0) {
		try {
			cout << "Введите делимое: ";
			cin >> x;
			cout << "Введите делитель: ";
			cin >> y;

			if (y == 0) {
				throw logic_error("Ошибка деления на ноль.\n");
			}
			if (x == 9999) {
				throw runtime_error("Некоторая ошибка.\n");
			}
			if (x == 7777) {
				throw 1;
			}

			z = (double)x / y;
			cout << "Частное от деления " << x << " на " << y << " равно: " << z << endl << "0-завершить; 1-повторить ввод. Выберите желаемое действие: ";
			cin >> a;
		}
		catch (int) {
			cout << "Нельзя вводить делимое 7777.\n";
		}
		catch (logic_error e) {
			cout << "Произошла логическая ошибка: " << e.what();
		}
		catch (exception el) {
			cout << "Произошла ошибка: " << el.what();
		}
	}

	system("pause");
	return 0;
}