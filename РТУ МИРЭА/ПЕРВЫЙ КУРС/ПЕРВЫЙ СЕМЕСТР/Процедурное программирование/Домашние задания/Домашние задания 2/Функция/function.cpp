#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale( LC_ALL,"Russian" );
    float x, y, b, z;
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите Y: ";
    cin >> y;
    cout << "Введите B: ";
    cin >> b;
    if ( (b > y) and (b >= x) ){
        z = log(b - y) * sqrt(b - x);
        cout << "z = " << z;
    }
    else{
        cout << "Значение функции не определено.";
    }
}