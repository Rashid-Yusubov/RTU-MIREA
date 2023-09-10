#include <iostream>
using namespace std;
int main()
{
    setlocale( LC_ALL,"Russian" );
    float N;
    cout <<"Введите натуральное число N: ";
    cin >> N;
    if (N == int(N) and N >= 1){
        for (int i = N; i <= N+9; i++)
            cout << i << endl;
    }
    else{
        cout <<"Введенное вами число не является натуральным.";
    }
    return 0;
}
