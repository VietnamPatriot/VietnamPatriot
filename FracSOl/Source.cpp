#include "Class.h"
using namespace std;

int main()
{
    int state;
    cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division:" << endl;
    cin >> state;
    cout << endl;
    cout << "Fraction No.1" << endl;
    int a1, b1, a2, b2;
    cin >> a1;
    cout << endl;
    cin >> b1;
    cout << endl;
    cout << "Fraction No.2" << endl;
    cin >> a2;
    cout << endl;
    cin >> b2;
    cout << endl;
    Fraction f1(a1, b1), f2(a2, b2);
    Fraction f4 = f1 + f2;
    if (state == 1)
    {
        Fraction f4 = f1 + f2;
        cout << f4;
    }
    else if (state == 2)
    {
        Fraction f4 = f1 - f2;
        cout << f4;
    }
    else if (state == 3)
    {
        Fraction f4 = f1 * f2;
        cout << f4;
    }
    else if (state == 4)
    {
        Fraction f4 = f1 / f2;
        cout << f4;
    }
    else
    {
        cout << "Sign not within bounds (Addition = 1; Subtraction = 2)";
    }
    return 0;
}