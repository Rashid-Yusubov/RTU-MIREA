#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    float b, c, x;
    cout<< "Введите число b: ";
    cin >> b;
    cout<< "Введите число с: ";
    cin >> c;
    x = -c/b;
    if (b == 0 and c == 0)
        cout << "Бесконенчное число решений. X = Любое";
    else if(b == 0 and c != 0)
        cout << "Не имеет решения.";
    else if (b !=0 and c == 0){
        x = c/b;
        cout << "x = " << x;
    }
       
    else
        cout << "x = " << x;
    return 0;
}
