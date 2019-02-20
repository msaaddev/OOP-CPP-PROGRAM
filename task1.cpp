#include <iostream>
using namespace std;
int main()
{
    int var1 = 3, *int_ptr;
    float var2 = 2.7, *float_ptr;
    double var3 = 17.32, *double_ptr;

    int_ptr = &var1;
    float_ptr = &var2;
    double_ptr = &var3;

    cout << " \nAddress of integer variable: " << &var1 << " and address of integer variable using pointer: " << int_ptr << endl;
    cout << "\nSize of integer variable: " << sizeof(var1);

    cout << " \nAddress of float variable: " << &var2 << " and address of integer variable using pointer: " << float_ptr << endl;
    cout << "\nSize of float variable: " << sizeof(var2);

    cout << " \nAddress of double variable: " << &var3 << " and address of integer variable using pointer: " << double_ptr << endl;
    cout << "\nSize of double variable: " << sizeof(var3) << endl;

    return 0;
}
