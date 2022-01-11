#include <conio.h>
#include <iostream>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    return 0;
}
void  task1() {
    setlocale(LC_ALL, "Rus");
    int A = 0, B = 0;
    do {
        cout << "Введите А: ";
        cin >> A;
        cout << "Введите B: ";
        cin >> B;
    } while (A > B || A < 0 || B < 0);
    for (int i = A; i < B + 1; i++) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << "|";
    }
}
void task2() {
    cout << "\nTask 2 " << endl;
    int a, b, c;
    cout << "a:" << endl;
    cin >> a;
    cout << "b:" << endl;
    cin >> b;
    c = a % b;
    cout << "длиннa незанятой части отрезка A:" << c;
}
void task3() {
    cout << "\nTask 3 " << endl;
    int n;
    cout << "Введите целое число N: ";
    cin >> n;
    int k = 0, sum = 0;
    while (sum < n) {
        ++k;
        sum += k;
    }
    cout << "Число K равно " << k << " и сумма равна " << sum;
}
void task4() {
    cout << "\nTask 4 " << endl;
    float a, b, i, k, p;
    cout << ("Введите количество P процентов: ");
    cin >> p;
    b = 1000;
    k = 0;
    if (p > 0 && p < 25) {
        while (b <= 1100) {
            b = b * (1 + p / 100);
            k++;
        }
        cout << "Сумма: " << b;
        cout << "\nКоличество месяцев: " << k;
    }
    else {
        cout << "Введите другое число";
    }

}
void task5() {
    cout << "\nTask 5 " << endl;
    float a, b;
    cout << ("Введите значение числа A: ");
    cin >> a;
    cout << ("Введите значение числа B: ");
    cin >> b;
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    cout << ("НОД = %.0f", a);
}
void task6() {
    cout << "\nTask 6 " << endl;
    int n;
    cout << "N:";
    cin >> n;
    int f1 = 1, f2 = 1, f = 0, k = 2;
    while (f < n) {
        ++k;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << "Порядковый номер этого числа :  " << k;
}