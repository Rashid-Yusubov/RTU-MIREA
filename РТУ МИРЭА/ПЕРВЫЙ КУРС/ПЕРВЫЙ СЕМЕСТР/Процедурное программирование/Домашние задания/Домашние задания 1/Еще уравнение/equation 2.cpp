#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale( LC_ALL,"Russian" );
    float a, b, c, x, x1, x2, y;
    int D;
    cout<< "Введите коэффициент a: ";
    cin >> a;
    cout<< "Введите коэффициент b: ";
    cin >> b;
    cout<< "Введите коэффициент с: ";
    cin >> c;
    D = (b*b) - 4 * a * c;
    if(a!= 0 and b != 0 and c != 0){
        if (D > 0){
            x1 = ((-b) - sqrt(D)) / (2*a);
            x2 = ((-b) + sqrt(D)) / (2*a);
            cout<< "x1 = " << x1 << endl;
            cout<< "x2 = " << x2 << endl;
        }
        else if (D == 0){
            y = (-b)/(2*a);
            cout<< "x = " << y;
        }
        else if (D < 0)
            cout << "Нет корней.";
    }
    else if(a == 0 and b!= 0){
        x = -c/b;
        if (b == 0 and c == 0)
            cout << "Бесконенчное число решений. X = Любое";
        else if(b == 0 and c != 0)
            cout << "Нет корней.";
        else if (b !=0 and c == 0){
            x = c/b;
            cout << "x = " << x;
        }
        else
            cout << "x = " << x;
    }
    else if ( a != 0 and b != 0 and c == 0){
        x1 = 0;
        x2 = -b/a;
        cout<< "x1 = " << x1 << endl;
        cout<< "x2 = " << x2 << endl;
    }
      else if ( a != 0 and b == 0 and c == 0){
        x = 0;
        cout<< "x = " << x << endl;
    }
    return 0;
}
