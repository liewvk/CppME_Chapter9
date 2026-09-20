#include <iostream>
using namespace std;

int largerNumber(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Larger number = " << largerNumber(x, y) << endl;

    return 0;
}
