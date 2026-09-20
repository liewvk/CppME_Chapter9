#include <iostream>
using namespace std;

void checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
}

int main()
{
    int value;

    cout << "Enter a number: ";
    cin >> value;

    checkEvenOdd(value);

    return 0;
}
