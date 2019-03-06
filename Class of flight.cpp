#include <iostream>
using namespace std;

class Flight
{
  private:
    int flight;
    float destination, distance, fuelRequired;
    char sName[10];

    float calfuel()
    {
        if (distance <= 1000)
        {
            fuelRequired = 500;
        }
        else if (distance > 1000 && distance <= 1800)
        {
            fuelRequired = 900;
        }
        else if (distance > 1800 && distance <= 2200)
        {
            fuelRequired = 1100;
        }
        else
        {
            fuelRequired = 1300;
        }

        return fuelRequired;
    }

  public:
    Flight()
    {

        cout << "Enter the flight number: ";
        cin >> flight;
        cout << endl;

        cout << "Enter the destination of the flight: ";
        cin >> destination;
        cout << endl;

        cout << "Enter the distance travalled: ";
        cin >> distance;
        cout << endl;

        cout << "Enter the Passenger Name: ";
        cin >> sName;
        cout << endl;
    }

    void showData()
    {
        cout << "Flight Number: " << flight << endl
             << endl;

        cout << "Destination: " << destination << endl
             << endl;

        cout << "Distance: " << distance << endl
             << endl;

        cout << "Passenger: " << sName << endl
             << endl;

        cout << "Quantity of fuel required: " << calfuel();
        cout << endl;
    }
};

int main()
{
    Flight firstFlight;
    firstFlight.showData();
}
