#include <iostream>
#include <math.h>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    return 0;
}
void task1() {
    setlocale(LC_ALL, "Rus");
    cout << "task 1 " << endl;
    int a, b, c;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    if (a > 2 && b < -3) {
        cout << "Истинно" << endl;
    }
    else {
        cout << "Ложь" << endl;
    }
}
void task2() {
    cout << "\n\ntask 2 " << endl;
    int a, b, c;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    if (a < b && b < c)
        cout << "Истинно" << endl;
    else
        cout << "Ложь" << endl;
}
void task3() {
    cout << "\n\ntask 3 " << endl;
    int a;
    cout << "Введите число a: ";
    cin >> a;
    if (a % 2 == 0 && a > 9 && a < 100) {
        cout << "Истинно" << endl;
    }
    else
    {
        cout << "Ложь" << endl;
    }
}
void task4() {
    cout << "\n\ntask 4 " << endl;
    int a;
    cout << "Введите трехзначное число: ";
    cin >> a;
    cout << (((a / 100) < (a % 100 / 10)) & ((a % 100 / 10) < (a % 10))) << endl;
}
void task5() {
    cout << "\n\ntask 5 " << endl;
    int a;
    cout << "Введите четырехзначное число: ";
    cin >> a;
    a = abs(a);
    cout << (a % 10 == a / 1000 & a % 100 / 10 == a % 1000 / 100) << endl;
}
void task6() {
    cout << "\n\ntask 6 " << endl;
    int a, b, c;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        cout << "Истинно" << endl;
    }
    else {
        cout << "Ложь" << endl;
    }
}
void task7() {
    int a, b, c;
    cout << "\n\ntask 7 " << endl;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        cout << "Истинно" << endl;
    }
    else {
        cout << "Ложь" << endl;
    }
}
