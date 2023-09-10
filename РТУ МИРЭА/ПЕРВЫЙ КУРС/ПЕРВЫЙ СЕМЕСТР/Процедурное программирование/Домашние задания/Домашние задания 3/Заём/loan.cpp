#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    float S, p, n, m, r;
    cout << "Введите сумму заёма S: ";
    cin >> S;
    cout << "Введите процент заёма p: ";
    cin >> p;
    cout << "Введите срок заема n (в годах): ";
    cin >> n;
    r = p / 100;
    if (S == 0 or n == 0) {
        cout << "Неверные данные. ";
    }
    else if (p == 0) {
        m = S / 12 * n;
        cout << "m = " << m;
    }
    else {
        m = (S * r * (pow(1 + r, n))) / (12 * ((pow(1 + r, n)) - 1));
        cout << "Ваша месячная выплата составляет " << m << " рублей.";
    }
}