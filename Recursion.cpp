#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main()
{
    // Factorial Of A Number
    // 5!=5*4*3*2*1=120
    // 0!=1
    // 1!=1
    // n!=n*(n-1)!
    /*int a;
    cout << "Enter A Number" << endl;
    cin >> a;
    cout << "The Faactorial Of "<<a<<" Is : " << factorial(a) << endl;*/

    // Fibonacci Series
    // 1,1,2,3,5,8,13,21,34..................................
    int a;
    cout << "Enter A Number" << endl;
    cin >> a;
    cout<<"The Term In Fibonacci Sequence At Position "<<a<< " Is : "<<fib(a)<<endl;
    return 0;
}