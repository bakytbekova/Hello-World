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
void task1() {
	setlocale(LC_ALL, "Rus");
	int x1, y1, x2, y2;
	cout << "1)Введите х1 у1 х2 и у2 " << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "x1= " << x1 << "\ny1= " << y1 << "\nx2= " << x2 << "\ny2= " << y2 << endl;
	cout << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

}
void task2() {
	double a, b, c, AC, BC, sum;
	cout << "\n\n2)Введите а, b и c" << endl;
	cin >> a >> b >> c;
	cout << "a= " << a << "\nb= " << b << "\nc= " << c << endl;
	AC = c - a;
	BC = c - b;
	sum = AC + BC;
	cout << "AC= " << AC << "\nBC= " << BC << "\nsum= " << sum << endl;



}
void task3() {
	double a, b, c, AC, BC, proizvedenia_AC_BC;
	cout << "\n\n3)Введите а, b и c" << endl;
	cin >> a >> b >> c;
	cout << "a= " << a << "\nb= " << b << "\nc= " << c << endl;
	AC = c - a;
	BC = c - b;
	proizvedenia_AC_BC = AC * BC;
	cout << "proizvedenia AC и BC = " << proizvedenia_AC_BC << endl;
}
void task4() {
	int x1, y1;
	int x2, y2, P, S;
	cout << "\n\n4)Введите х1,у1,x2 и y2" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "x1=" << x1 << "\ny1=" << y1 << "\nx2=" << x2 << "\ny2=" << y2 << endl;
	cout << "P=" << 2 * (abs(x1 - x2) + abs(y1 - y2));
	cout << "\nS=" << abs(x1 - x2) * abs(y1 - y2);
}
void task5() {
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double a, b, c;
	cout << "\n\n5)Введите х1,y1,x2,y2,x3 и y3" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "x1=" << x1 << "\ny1=" << y1 << "\nx2=" << x2 << "\ny2=" << y2 << "x3=" << x3 << "y3=" << y3 << endl;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	cout << "a=" << a << "\nb=" << b << "\nc=" << c << endl;
	double P, S;
	P = (a + b + c) / 2;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	cout << "P=" << P << "\nS=" << S << endl;
}