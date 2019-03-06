#include <iostream>
using namespace std;

class Batsman
{

  private:
    int batCode, total_innings, n_out_innings, runs, bestScore;
    float batavg;
    char batname[10];
    float calAvg()
    {
        return (float)runs / (total_innings - n_out_innings);
    }

  public:
    void readData()
    {
        cout << "Enter the batting code of the batsman: ";
        cin >> batCode;
        cout << endl;

        cout << "Enter the batsman name: ";
        cin >> batname;
        cout << endl;

        cout << "Enter the total innings of the batsman: ";
        cin >> total_innings;
        cout << endl;

        cout << "Enter the total not out innings of the batsman: ";
        cin >> n_out_innings;
        cout << endl;

        cout << "Enter the total runs of the batsman: ";
        cin >> runs;
        cout << endl;

        cout << "Enter the best score of the batsman: ";
        cin >> bestScore;
        cout << endl;

        batavg = calAvg();
    }

    void displayData()
    {
        cout << "Name of Batsman: " << batname << endl
             << endl;
        cout << "Bating code of Batsman: " << batCode << endl
             << endl;
        cout << "Total innings played by Batsman: " << total_innings << endl
             << endl;
        cout << "Total not out innings of Batsman: " << n_out_innings << endl
             << endl;
        cout << "Total runs of the Batsman: " << runs << endl
             << endl;
        cout << "Best score of the Batsman: " << bestScore << endl
             << endl;
        cout << "Batting average of the Batsman: " << batavg << endl
             << endl;
    }
};

int main()
{
    Batsman firstBatsman;

    firstBatsman.readData();
    firstBatsman.displayData();
}
