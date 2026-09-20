#include <iostream>
using namespace std;

int square(int num)
{
    return num * num;
}

int main()
{
    int value;

    cout << "Enter a number: ";
    cin >> value;

    cout << "Square = " << square(value) << endl;

    return 0;
}
