#include <iostream>
using namespace std;
void number1();
void number2(), number3(), number4(), number5();
int main() {
	number1();
	number2(), number3(), number4(), number5();
	return 0;
}
void number1() {
	setlocale(LC_ALL, "Rus");
	cout << "Задание 1\n " << "Введите а и b ";
	double a, b, S, P;
	cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "S=" << S << "," << "P=" << P << endl;
}
void number2() {
	setlocale(LC_ALL, "Rus");
	cout << "\nЗадание 2\n" << "Введите d=";
	double d, L, п = 3.14;
	cin >> d;
	L = п * d;
	cout << "L=" << L << endl;
}
void number3() {
	cout << "\nЗадание 3\n" << "Введите a и b";
	double a, b, Arif;
	cin >> a >> b;
	Arif = (a + b) / 2;
	cout << "Arif=" << Arif << endl;

}
void number4() {
	cout << "\nЗадание 4\n" << "ВВедите r и z";
	double r, z;
	cin >> r >> z;
	if ((r == 0) || (z == 0)) {
		cout << " Пожалуйста,введите ненулевые числа";
		number4();
	}
	else {
		cout << "Сумма квадратов r и z=" << pow(r, 2) + pow(z, 2) << endl;
		cout << "Расность квадратов r и z=" << pow(r, 2) - pow(z, 2) << endl;
		cout << "Произведение квадратов r и z=" << pow(r, 2) * pow(z, 2) << endl;
		cout << "Частное квадратов r и z=" << pow(r, 2) / pow(z, 2) << endl;
	}
}
void number5() {
	cout << "\nЗадание 5\n" << "Введите r и z";
	double r, z;
	cin >> r >> z;
	if ((r == 0) || (z == 0)) {
		cout << "Пожалуйста,введите ненулевые числа";
		number5();
	}
	else {
		cout << "Сумма модулей r и z =" << abs(r) + abs(z) << endl;
		cout << "Разность модулей r и z =" << abs(r) - abs(z) << endl;
		cout << "Произведение модулей r и z =" << abs(r) * abs(z) << endl;
		cout << "Частное модулей r и z =" << abs(r) / abs(z) << endl;

	}
}