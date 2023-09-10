#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale( LC_ALL,"Russian" );
    const double PI = acos(-1.0);
    float r, R, h, L, V, S;
    cout<< "Введите меньший радиус усеченного конуса: ";
    cin >> r;
    cout<< "Введите больший радиус усеченного конуса: ";
    cin >> R;
    cout<< "Введите высоту усеченного конуса: ";
    cin >> h;
    L = sqrt((pow(R-r,2)) + pow(h,2));
    V = (PI * h * (pow(R, 2) + R * r + pow(r, 2))) / 3;
    S = PI * (pow(R, 2) + (R + r) * L + pow(r, 2));
    if (L <= h)
        cout<< "Неверные исходные данные. Образующая не может быть меньше или равна высоте конуса." << endl;
    else if (R <= r)
        cout<< "Неверные исходные данные. Больший радиус не может быть меньше или равен меньшему радиусу конус." << endl;
    else if (r == 0 or R == 0 or h == 0 or L == 0){
        cout<< "Неверные исходные данные." << endl;
    }
    else{
        cout<< "V = " << V << endl;
        cout<< "S = " << S << endl;
    }
    return 0;
}
