#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// This Will Not Swap A And B
void swap(int x, int y)
{
    int temp = x;
    x = y;
    x = temp;
}
// Call By Referecnce Using Pointers
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// Call By Referecnce Using C++ Reference variables
void swapReferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 4, b = 5;
    cout << "The Value a Is : " << a << "The Value of b Is : " << b << endl;
    // swap(a, b);//This Will Not Swap A And B
    // swapPointer(&a,&b);//This Will Swap A And B using Pointer reference
    swapReferenceVar(a, b); // This Will Swap A And B using reference variables
    cout << "The Value a Is : " << a << "The Value of b Is : " << b << endl;
    cout << "The sum of 4 and 5 is : " << sum(4, 5) << endl;
    return 0;
}