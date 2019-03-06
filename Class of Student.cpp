#include <iostream>
using namespace std;

class student
{

  private:
    int admissionNum;
    float englishMarks, mathMarks, sciMarks, totalMarks;
    char studentName[10];
    float cTotal()
    {

        return (float)englishMarks + mathMarks + sciMarks;
    }

  public:
    student()
    {
        cout << "Enter the admission number of the student: ";
        cin >> admissionNum;
        cout << endl;

        cout << "Enter the name of the student: ";
        cin >> studentName;
        cout << endl;

        cout << "Enter the obtained marks in Maths: ";
        cin >> mathMarks;
        cout << endl;

        cout << "Enter the obtained marks in Science: ";
        cin >> sciMarks;
        cout << endl;

        cout << "Enter the obtained marks in English: ";
        cin >> englishMarks;
        cout << endl;
    }

    void showData()
    {
        cout << "Admission number of the student: " << admissionNum << endl
             << endl;
        cout << "Name of the student: " << studentName << endl
             << endl;
        cout << "Obtained marks in Maths: " << mathMarks << endl
             << endl;
        cout << "Obtained marks in Science: " << sciMarks << endl
             << endl;
        cout << "Obtained marks in English: " << englishMarks << endl
             << endl;

        totalMarks = cTotal();

        cout << "Total Marks: " << totalMarks;
    }
};

int main()
{
    student s1;

    s1.showData();
}
