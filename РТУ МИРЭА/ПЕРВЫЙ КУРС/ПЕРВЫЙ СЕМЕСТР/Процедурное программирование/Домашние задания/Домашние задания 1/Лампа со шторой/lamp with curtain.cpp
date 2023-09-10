#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    bool a, b, c;
    cout<< "На улице день ? ";
    cin >> a;
    cout<< "Шторы в комнате развиднуты ? ";
    cin >> b;
    cout<< "Включена ли лампочка в комнате ? ";
    cin >> c;
    if ((a == 1 and b == 1) or c == 1)
        cout<< "В комнате светло";
    else 
        cout<< "В комнате не светло";
    return 0;
}
