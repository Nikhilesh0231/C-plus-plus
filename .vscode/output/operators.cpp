#include<iostream>
using namespace std;
int c=45;//it is a global vriable 
int main()
    {
        /*
int a,b,sum,mul;//all these are local variable
cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
sum=a+b;//here + operators deals with local variable
cout<<"The Sum Is: "<<sum<<endl;
mul=a*b;
cout<<"The Multiplication Is:"<<mul;
// calling gloabal variable in a function 
cout<<"The gloabal c is :"<<::c;
return 0;
*/


/*//float doble long literal
float d=34.4f;
long double e=34.4l;
// suze of keyword is used the size of data type

cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl;//it by deafault it shows double data type
cout<<"The size of 34.4 is:"<<sizeof(34.4f)<<endl;
cout<<"The size of 34.4 is:"<<sizeof(34.4F)<<endl;
cout<<"The size of 34.4 is:"<<sizeof(34.4l)<<endl;
cout<<"The size of 34.4 is:"<<sizeof(34.4L)<<endl;


cout<<"The value of d is"<<d<<endl<<"The value of e is:"<<e;
*/

//reference variable
/*
float x = 455;
float &y = x ;//y is refrence pointing to x
cout<<x<<endl;
cout<<y;
*/

// tyoe casting 
int a = 45 ;
float b= 45.98;
cout<<"The value of a is "<<(float)a<<endl;//here int a changes to float a 
cout<<"The value of b is "<<(int)b;//here float b changes to int b 
int c = (int)b;
cout<<c;
return 0;
    }

