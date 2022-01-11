#include <iostream>
#include <math.h>
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

}

void task1() {
    setlocale(LC_ALL, "Russian");
    cout << "task 1 " << endl;
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a != b)
    {
        if (a > b)
            b = a;
        else
            a = b;
    }
    else
    {
        a = 0;
        b = 0;
    }
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
void task2() {
    cout << "\n\ntask 2 " << endl;
    int a, b, c;
    cout << "1числo:";
    cin >> a;
    cout << "2числo:";
    cin >> b;
    cout << "3числo:";
    cin >> c;

    if (b <= c && b <= a) {
        cout << a + c;
    }
    else {
        if (a <= c && a <= b) {
            cout << b + c;
        }
        else {
            cout << b + a;
        }
    }
}
void task3() {
    cout << "\n\ntask 3 " << endl;
    int Ax, Ay, Bx, By, Cx, Cy;
    double d1, d2;
    cout << "Введите координаты точек A ,B и C :";
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
    d1 = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
    d2 = sqrt(pow(Cx - Ax, 2) + pow(Cx - Ay, 2));
    if (d1 < d2)
        cout << "Точка B расположена ближе к точке А, расстояние = " << d1 << endl;
    else
        cout << "Точка С расположена ближе к точке А, расстояние = " << d2 << endl;
}
void task4() {
    cout << "\n\ntask 4 " << endl;
    int x, y;
    cout << "Введите точку х : ";
    cin >> x;
    cout << "Введите точку у :  ";
    cin >> y;
    if (x > 0 && y > 0)
        cout << "Точка в первой координатной четверти ";
    else if (x < 0 && y > 0)
        cout << "Точка в второй координатной четверти ";
    else if (x < 0 && y < 0)
        cout << "Точка в третьей координатной четверти ";
    else if (x > 0 && y < 0)
        cout << "Точка в четвертой координатной четверти ";
    else
        cout << "Неизвестный";
}
void task5() {
    cout << "\n\ntask 5 " << endl;
    int number;
    cout << "Введите число " << endl;
    cin >> number;
    cout << "number : " << number << endl;
    if (number == 0) {
        cout << "Нулевое ";
    }
    else {
        if (number > 0) {
            cout << "Положительное ";
        }
        else {
            cout << "Отрицательное ";
        }
        if (((number % 2) == 0)) {
            cout << "четное ";
        }
        else {
            cout << "нечетное ";
        }
    }
    cout << "число " << endl;
}
void task6() {
    cout << "\n\ntask 6 " << endl;
    int num;
    cout << "Введите число от 1 до 999 " << endl;
    cin >> num;
    cout << "num : " << num << endl;
    if (((num % 2) == 0)) {
        cout << "Четное ";
    }
    else {
        cout << "Нечетное ";
    }
    if (num < 1000) {
        if (num < 10) {
            cout << "однозначное ";
        }

        else {
            if (num < 100) {
                cout << "двузначное ";
            }
            else {
                cout << "трехзначное ";
            }
        }
    }
    else {
        cout << num;
    }
    cout << " число " << endl;
}