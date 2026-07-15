#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Enter third number : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Number " << num1 << " is Largest" << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Number " << num2 << " is Largest" << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "Number " << num3 << " is Largest" << endl;
    }
    else
    {
        cout << "All Numbers are Equal" << endl;
    }
    return 0;
}

// Output
//  Enter first number : 10
//  Enter second number : 20
//  Enter third number : 30
//  Number 30 is Largest