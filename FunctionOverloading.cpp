#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c) // Add Function Is Overloaded Here.
{
    return a + b + c;
}
// Cylinder Volume
int Volume(double r, int h)
{
    return (3.14 * r * r * h);
}
// Cube Volume
int Volume(int s)
{
    return s * s * s;
}
// recatangular box
int Volume(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "The Addition Of 5 And 7 Is : " << add(5, 7) << endl;
    cout << "The Addition Of 5 , 7 And 8 Is : " << add(5, 7, 8) << endl;
    cout << "The Volume Of Cylinder : " << Volume(5, 7) << endl;
    cout << "The Volume Of Cube : " << Volume(4) << endl;
    cout << "The Volume Of Rectanular Box : " << Volume(4, 2, 3) << endl;
    return 0;
}