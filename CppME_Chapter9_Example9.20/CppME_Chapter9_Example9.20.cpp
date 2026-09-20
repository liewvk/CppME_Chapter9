#include <iostream>
using namespace std;

void showTitle()
{
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int main()
{
    int a, b;

    showTitle();

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Sum        = " << add(a, b) << endl;
    cout << "Difference = " << subtract(a, b) << endl;

    return 0;
}
