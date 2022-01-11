#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Лабораторная работа #13.1" << endl;

    float c, m;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> c;
    cout << "Стоимость конфет" << endl;
    for (m = 0.1; m < 1.1; m += 0.1)
        cout << m << " кг = " << c * m << endl;

    cout << "Лабораторная работа #13.2" << endl;
    int n;
    double p = 1;
    cout << "Целое число: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        p = p * (1 + 0.1 * i);
    }
    cout << "Результат: " << p << endl;

    cout << "Лабораторная работа #13.3" << endl;

    cout << "Целое число: ";
    cin >> n;

    int result = 0, i;
    for (i = 1; i <= (2 * n - 1); i += 2) {
        result += i;
        cout << result << endl;
    }

    cout << "Лабораторная работа #13.4" << endl;

    float a;
    cout << "Вещественное число: ";
    cin >> a;

    cout << "Целое число: ";
    cin >> n;


    float a2 = 1, res = 1;


    for (i = 1; i <= n; ++i)
    {
        a2 *= a;
        res += a2;
    }
    cout << res << endl;

    cout << "Лабораторная работа #13.5" << endl;

    cout << "Вещественное число: ";
    cin >> a;
    cout << "Целое число: ";
    cin >> n;
    float res1 = 1;

    for (i = 1; i <= n; i++)
    {
        res1 += pow(-a, i);
    }
    cout << res1;


    return 0;

}

