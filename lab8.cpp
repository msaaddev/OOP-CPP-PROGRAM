#include <iostream>
using namespace std;
class A
{
private:
  int num1;

protected:
  int num2;

public:
  int num3;
  void display()
  {
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "Number 3: " << num3 << endl;
  }
};
class B : public A
{
private:
  int num4;

public:
  void display()
  {
    // cout << "Number 1: " << num1 << endl; //error: can't access private members
    cout << "Number 2: " << num2 << endl;
    cout << "Number 3: " << num3 << endl;
    cout << "Number 4: " << num4 << endl;
  }
};



int main()
{
  B obj;
  obj.display();
  cout << endl;
  obj.A::display();
}
