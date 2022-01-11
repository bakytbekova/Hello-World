#include <iostream>
#include <math.h>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	return 0;
}
void task1()
{
	cout << "task 1 " << endl;
	setlocale(LC_ALL, "Rus");

	int N, m;
	cout << "Секунды:";
	cin >> N;
	cout << endl;

	m = N % 60;
	cout << "количество секунд, прошедших с начала последней минуты:" << m;
}
void task2() {
	cout << "\n\ntask 2 " << endl;
	int K;
	int number_day;
	cout << "Введите число K от 1 до 365:  ";
	cin >> K;
	number_day = (K % 7);
	cout << "Номер дня недели = " << number_day << endl;
}
void task3() {
	cout << "\n\ntask 3 " << endl;
	int d, k;
	cout << "Введите день года: ";
	cin >> k;
	cout << "Введите день недели: ";
	cin >> d;
	cout << "Номер для недели: " << ((k + d - 2) % 7) + 1 << endl;
}
void task4() {
	cout << "\n\ntask 4 " << endl;
	int A, B, C;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;
	cout << "Количество квадратов: " << (A / C) * (B / C) << endl;
	cout << "Площадь незанятой части: " << A * B - (C * C * (A / C) * (B / C)) << endl;

}
void task5() {
	cout << "\n\ntask 5 " << endl;
	int year;
	cout << "Введите номер года: ";
	cin >> year;
	cout << "Год столетия: " << (year - 1) / 100 + 1;
}