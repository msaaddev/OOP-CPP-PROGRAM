#include <iostream>
using namespace std;

class Employee
{
  protected:

    string firstName, LastName, idNumber;
    int salary;

    public:
        Employee( )
        {
            firstName = "";
            LastName = "";
            idNumber = "";
            salary = 0;
        }

        Employee( )
        {
            
        }

        void set( )
        {
            cout << "Enter the first name of employee: ";
            cin >> firstName;

            cout << "Enter the last name of employee: ";
            cin >> lastName;

            cout << "Enter the identification number of the employee: ";
            cin >> idNumber;

            cout << "Enter the salary of employee: ";
            cin >> salary;
        }


}

int main()
{
}
