#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Введите число: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " число четное.";
    else
        cout << n << " число нечетное.";

    return 0;
}