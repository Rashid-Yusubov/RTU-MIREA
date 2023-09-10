#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    float a, b;
    cout<<"Введите первое число: ";
    cin >> a;
    cout<<"Введите второе число: ";
    cin >> b;
    auto sum = a + b;
    auto dif = a - b;
    auto mul = a * b;
    auto divs = a / b;
    if (b != 0){
        cout <<"Сумма = " << sum << endl;
        cout <<"Разность = " << dif << endl;
        cout <<"Произведение = " << mul << endl;
        cout <<"Частное = " << divs << endl;
    }
    else if (b == 0){
        cout <<"Сумма = " << sum << endl;
        cout <<"Разность = " << dif << endl;
        cout <<"Произведение = " << mul << endl;
        cout <<"Делитель равен нулю. Невозможно совершить операцию.";
    }
    return 0;
}
