#include <iostream>
using namespace std;
int main()
{
    //Pointer
    int a = 3;
    //int *b = &a;//It can also be done as
    int*b;
    b=&a;
    //&---->(Adress Of) Operator.
    cout << "The Adress Of a Is:" << b << endl;  // It is wiil Show The Address Of 'A' Which IS Stored In In 'B'-B is A Pointer
    cout << "The Adress Of a Is:" << &a << endl; // this line and above line are same.
    //*---->(Vlaue At ) Dereference Operator.
    cout << "The Value At Adress b Is:" << *b << endl; // It will Show The Value Stored At b.

    //Pointer To Pointer
    int**c=&b;
    cout << "The Adress Of b Is:" << c << endl;
    cout << "The Value At Adress c Is:" << **c << endl;
    return 0;
}