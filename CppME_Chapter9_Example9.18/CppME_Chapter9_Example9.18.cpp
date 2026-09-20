#include <iostream>
using namespace std;

void changeNumber(int x)
{
    x = 100;
    cout << "Inside function: " << x << endl;
}

int main()
{
    int num = 5;
    changeNumber(num);

    cout << "In main: " << num << endl;

    return 0;
}
