#include <iostream>
using namespace std;

void output(int *ptr_arr)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Value of array printed through pointer: " << *(ptr_arr + i) << endl;
    }
}

int main()
{
    int arr[10], *ptr_arr;

    ptr_arr = arr;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a value: ";
        cin >> arr[i];
    }

    cout << endl;

    output(ptr_arr);

    return 0;
}
