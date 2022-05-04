#include "Classes.h"


int main()
{
    Vector first(4, 2);
    Vector other2(first);
    cout << other2 << endl;
    cout << first << endl;
    first.changeX(15);
    first.changeY(99);
    cout << first.getX() << endl;
    cout << first.getY() << endl;
    cout << first << endl;
    cout << Vector(5, 10) + Vector(10, 5) << endl;
    cout << Vector(5, 10) - Vector(10, 5) << endl;

    Complex second(10, -14), temp(-9, 15);
    cout << second << endl;
    cout << second.module() << endl;
    cout << second + temp << endl;
    cout << second - temp << endl;
    cout << second / temp << endl;
    cout << second * temp << endl;

    Circle other(5);
    cout << other.getRadius() << endl;
    cout << other.getLength() << endl;
    cout << other.getSquare() << endl;
    cout << other;

    return 0;
}