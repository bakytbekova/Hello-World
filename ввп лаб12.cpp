#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Лабораторная работа #12.1" << endl;
    int d, m;
    cout << "Номер дня(с 1 по 31): ";
    cin >> d;
    cout << "Номер месяца(с 1 по 12): ";
    cin >> m;

    if (d < 32)
    {
        switch (d)
        {
        case 1: cout << "первое "; break;
        case 2: cout << "второе "; break;
        case 3: cout << "третье "; break;
        case 4: cout << "четвертое "; break;
        case 5: cout << "пятое "; break;
        case 6: cout << "шестое "; break;
        case 7: cout << "седьмое "; break;
        case 8: cout << "восьмое "; break;
        case 9: cout << "девятое "; break;
        case 10: cout << "десятое "; break;
        case 11: cout << "одиннадцатое "; break;
        case 12: cout << "двенадцатое "; break;
        case 13: cout << "тринадцатое "; break;
        case 14: cout << "четырнадцатое "; break;
        case 15: cout << "пятнадцатое "; break;
        case 16: cout << "шестнадцатое "; break;
        case 17: cout << "семнадцатое "; break;
        case 18: cout << "восемнадцатое "; break;
        case 19: cout << "девятнадцатое "; break;
        case 20: cout << "двацатое "; break;
        case 21: cout << "двадцать первое "; break;
        case 22: cout << "двадцать второе "; break;
        case 23: cout << "двадцать третье "; break;
        case 24: cout << "двадцать четвертое "; break;
        case 25: cout << "двадцать пятое "; break;
        case 26: cout << "двадцать шестое "; break;
        case 27: cout << "двадцать седьмое "; break;
        case 28: cout << "двадцать восьмое "; break;
        case 29: cout << "двадцать девятое "; break;
        case 30: cout << "тридцатое "; break;
        case 31: cout << "тридцать первое "; break;
        }
    }
    else
    {
        cout << "Вы неправильно ввели числа" << endl;
        return 0;
    }
    switch (m) {
    case 1: cout << "января"; break;
    case 2: cout << "февраля"; break;
    case 3: cout << "марта"; break;
    case 4: cout << "апреля"; break;
    case 5: cout << "мая"; break;
    case 6: cout << "июня"; break;
    case 7: cout << "июля"; break;
    case 8: cout << "августа"; break;
    case 9: cout << "сентября"; break;
    case 10: cout << "октября"; break;
    case 11: cout << "ноября"; break;
    case 12: cout << "января"; break;

    }

    cout << endl;

    cout << "Лабораторная работа #12.2" << endl;
    char c;
    int n;
    cout << "Введите символ направления («N» — север, «W» — запад, «S» — юг, «E» — восток): ";
    cin >> c;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> n;
    cout << "Направление - ";
    switch (n) {
    case 1: switch (c) {
    case 'N': cout << "W - Робот отправился на Запад"; break;
    case 'S': cout << "E - Робот отправился на Восток"; break;
    case 'W': cout << "S - Робот отправился на Юг"; break;
    case 'E': cout << "N - Робот отправился на Север"; break;
    } break;
    case -1: switch (c) {
    case 'N': cout << "E - Робот отправился на Восток"; break;
    case 'S': cout << "W - Робот отправился на Запад"; break;
    case 'W': cout << "N - Робот отправился на Север"; break;
    case 'E': cout << "S - Робот отправился на Юг"; break;
    } break;
    case 0: switch (c) {
    case 'N': cout << "N - Робот отправился на Север"; break;
    case 'S': cout << "S - Робот отправился на Юг"; break;
    case 'W': cout << "W - Робот отправился на Запад"; break;
    case 'E': cout << "E - Робот отправился на Восток"; break;
    } break;
    }

    cout << endl;

    cout << "Лабораторная работа #12.3" << endl;
    cout << "Введите целое число в диапазоне 10–40: ";
    cin >> n;

    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout << "десять учебных заданий." << endl;
            break;
        case 11:
            cout << "одинадцать учебных заданий." << endl;
            break;
        case 12:
            cout << "двенадцать учебных заданий." << endl;
            break;
        case 13:
            cout << "тринадцать учебных заданий." << endl;
            break;
        case 14:
            cout << "четырнадцать учебных заданий." << endl;
            break;
        case 15:
            cout << "пятнадцать учебных заданий." << endl;
            break;
        case 16:
            cout << "шестнадцать учебных заданий." << endl;
            break;
        case 17:
            cout << "семнадцать учебных заданий." << endl;
            break;
        case 18:
            cout << "восемнадцать учебных заданий." << endl;
            break;

        case 19:
            cout << "девятнадцать учебных заданий." << endl;
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }

        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "учебных заданий.";
            break;
        case 1:
            cout << "учебное задание.";
            break;
        case 2:
        case 3:
        case 4:
            cout << "учебных задания.";
            break;
        }
    }
    cout << endl;
    cout << "Лабораторная работа #12.4" << endl;

    cout << "Введите целое число в диапазоне 100–999: ";
    cin >> n;

    switch (n / 100) {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот";
        break;
    case 8:
        cout << "восемьсот  ";
        break;
    case 9:
        cout << "девятьсот  ";
        break;
    }

    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            cout << "десять";
            break;
        case 11:
            cout << "одинадцать";
            break;
        case 12:
            cout << "двенадцать";
            break;
        case 13:
            cout << "тринадцать";
            break;
        case 14:
            cout << "четырнадцать";
            break;
        case 15:
            cout << "пятнадцать";
            break;
        case 16:
            cout << "шестнадцать";
            break;
        case 17:
            cout << "семнадцать";
            break;
        case 18:
            cout << "восемнадцать";
            break;
        case 19:
            cout << "девятнадцать";
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят";
            break;
        case 9:
            cout << "девяносто ";
            break;
        }

        switch (n % 10) {
        case 1:
            cout << "один";
            break;
        case 2:
            cout << "два";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четыре";
            break;
        case 5:
            cout << "пять";
            break;
        case 6:
            cout << "шесть";
            break;
        case 7:
            cout << "семь";
            break;
        case 8:
            cout << "восемь";
            break;
        case 9:
            cout << "девять";
            break;
        }
    }

    cout << endl;
    cout << "Лабораторная работа #12.5" << endl;

    int year;
    cout << "Введите год: ";
    cin >> year;

    switch (year % 1984 % 60 / 12)
    {
    case 0:
        cout << "год зален";
        break;
    case 1:cout << "год красн";
        break;
    case 2:cout << "год желт";
        break;
    case 3:cout << "год бел";
        break;
    case 4:cout << "год черн";
        break;
    }

    switch (year % 1984 % 60 % 12)
    {
    case 0:cout << "ой крысы";
        break;
    case 1:cout << "ой коровы";
        break;
    case 2:cout << "ого тигра";
        break;
    case 3:cout << "ого зайца";
        break;
    case 4:cout << "ого дракона";
        break;
    case 5:cout << "ой змеи";
        break;
    case 6:cout << "ой лошади";
        break;
    case 7:cout << "ой овцы";
        break;
    case 8:cout << "ой обезьяны";
        break;
    case 9:cout << "ой курицы";
        break;
    case 10:cout << "ой собаки";
        break;
    case 11:cout << "ой овцы";
        break;
    }
}