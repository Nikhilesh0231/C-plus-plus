#include<iostream>
using namespace std;
int g=6;//it is gloabal variable 
void sum()
{
    int a;//it is local variable
    cout<<g;//here this g search firstly of variable g in sum function but if not find choose from global variable ,so this print value og g as 6
}
int main()
{
    int g=9;//loacal vaiable
    g=5;//loacal vaiable
    int a=10,b=20;//loacal vaiable
    float pi=3.141;//loacal vaiable
    char c='d';//loacal vaiable
    bool e=false;//if bool is true it prints 1 and if false it prints 0
    sum();
    cout<<g<<e;
   
    cout<<g;//here this agin search for local variable and print after 6 as 5
     cout<<e;
    cout<<"\nHere The Value Of a Is:"<<a<<"\n"<<"The Value Of b Is:"<<b<<"\n";
    cout<<"The Value Of pi Is:"<<pi;
    cout<<"\n The Value Of c Is:"<<c;
     return 0;
}