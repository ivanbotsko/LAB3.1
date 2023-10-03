#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = ";
    cin >> x;

    A = 1 + x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= 4)
        B = exp(log10(2 + 2 * x) + 2 * x);
    else if (4 < x && x <= 7)
        B = 1.0 / tan((1 + x) / 9 + 8 * x);
    else
        B = 1 - 7 * x + x * x - 2 * x * x * x;

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x <= 4)
        B = exp(log10(2 + 2 * x) + 2 * x);
    else if (x > 7)
        B = 1 - 7 * x + pow(2,x) - 2 * pow(3,x);
    else
        B = 1.0 / tan((1 + x) / 9 + 8 * x);

    y = A + B;
    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
