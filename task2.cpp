#include <iostream>
using namespace std;

void fn(double *ptr1, double *ptr2)
{

    double z;
    z = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = z;
}

int main()
{
    double var1, var2, *ptr1, *ptr2;
    ptr1 = &var1;
    ptr2 = &var2;

    cout << "\nInput any number for variable 'var1': ";
    cin >> var1;
    cout << "Input any number for variable 'var2': ";
    cin >> var2;

    cout << endl;
    fn(ptr1, ptr2);

    cout << "Value of variable 'var1': " << var1;
    cout << "\nValue of variable 'var2': " << var2 << endl;
}
