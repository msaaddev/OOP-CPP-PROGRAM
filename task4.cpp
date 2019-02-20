#include <iostream>
using namespace std;

void sort(double *ptr, int length)
{

    double z;
    for (int i = 0; i < length; i++)
    {
        for (int y = i; y < length; y++)
        {
            if (*(ptr + i) > *(ptr + y))
            {
                z = *(ptr + i);
                *(ptr + i) = *(ptr + y);
                *(ptr + y) = z;
            }
        }
    }
}

int main()
{
    double arr[8], *ptr_arr;

    ptr_arr = arr;

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter a value: ";
        cin >> arr[i];
    }

    cout << endl;

    sort(ptr_arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << "Sorted Array: " << *(ptr_arr + i) << endl;
    }
}
