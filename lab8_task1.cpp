#include <iostream>
using namespace std;

class point
{
  protected:
    float xCoordinate, yCoordinate;

  public:
    point()
    {
        xCoordinate = 0;
        yCoordinate = 0;
    }

    point(int x, int y)
    {
        xCoordinate = x;
        yCoordinate = y;
    }

    void setX()
    {
        cout << "Enter the x-coordinate: ";
        cin >> xCoordinate;
    }

    void setY()
    {
        cout << "Enter the y-coordinate: ";
        cin >> yCoordinate;
    }

    float getX()
    {
        return xCoordinate;
    }

    float getY()
    {
        return yCoordinate;
    }

    void display()
    {
        cout << "The coordinates are: (" << xCoordinate << "," << yCoordinate << ")" << endl
             << endl;
    }
};

class circle : public point
{
  private:
    float radius;

  public:
    circle()
    {
        radius = 0;
        xCoordinate = 0;
        yCoordinate = 0;
    }

    circle(float radi, point firstObject)
    {
        radius = radi;
        xCoordinate = firstObject.getX();
        yCoordinate = firstObject.getY();
    }

    circle(float radi, float x, float y)
    {
        radius = radi;
        xCoordinate = x;
        yCoordinate = y;
    }

    void setRadius()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    float getRadius()
    {
        return radius;
    }

    float circumference()
    {
        return 2 * 3.14 * radius;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{

    circle obj;

    obj.setX();
    obj.setY();
    obj.setRadius();

    cout << "Circumference of Circle: " << obj.circumference() << endl
         << endl;

    cout << "Area of circle: " << obj.area();

    return 0;
}
