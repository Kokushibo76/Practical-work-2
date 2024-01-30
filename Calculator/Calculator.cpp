#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    cout << "\n1.Сложение \n2.Вычитание \n3.Частное \n4.Произвденеи \n5.Возведение в степень \n6.Нахождения квадратного корня";
    cout << " \n7.Нахождение 1 процента от числа \n8.Найти факториал числа \n9.Выйти из программы.";

    int f;
    do {
        cout << "\nВыберите функцию: ";
        cin >> f;
        double a, b;
        int c, i, t = 1;
        switch (f) {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: ";
            cout << a + b;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: ";
            cout << a - b;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: ";
            cout << a / b;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: ";
            cout << a * b;
            break;
        case 5:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << "Результат: ";
            cout << pow(a, b);
            break;
        case 6:
            cout << "Введите число: ";
            cin >> a;
            cout << "Результат: ";
            cout << sqrt(a);
            break;
        case 7:
            cout << "Введите число: ";
            cin >> a;
            cout << "Результат: ";
            cout << a / 100;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> a;
            for (i = 1; i <= a; i++) {
                t = t * i;
            }
            cout << "Результат: ";
            cout << t;
            break;
        }
    } while (f != 9);
    return 0;
}
