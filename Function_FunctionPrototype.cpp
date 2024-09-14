#include <iostream>
using namespace std;
//function
/*int sum(int a, int b)
{
    int c = a + b;
    return c;
}*//*if  we not writing before main functin then we have to use fuction prototype*/
//FUNCTION PROTOTYPE
//type function_name(arguments);
//int sum(int a, int b);//---Acceptable
//int sum(int a,b);//---- Not Acceptable
int sum(int ,int);//---Acceptable
void Great(void);//---Acceptable
int main()
{
    Great();
    int num1, num2;
    // num1 and num2 Are Actual parameters
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    cout << "The Sum Of The Numbers Is : " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)// a and b are formal parameters taking values from actual parameters
{
    int c = a + b;
    return c;
}
void Great(){
    cout<<"Hello Nikhilesh !!!!"<<endl;
}