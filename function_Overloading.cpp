#include<iostream>
using namespace std;

int add(int a,int b){
  cout<<"Using function with 2 arguments"<<endl;
  return a+b;
}

int add(int a,int b,int c){
  cout<<"Using function with 3 arguments"<<endl;
  return a+b+c;
}

//Calculate the volume of Cylinder
float volume(double r,double h){
  return (3.14*r*r*h);
}
//Calculate the volume of Cube
float volume(double side){
  return (side*side*side);
}
//Calculate the volume of Rectangular box
float volume(double l,double b,double h){
  return (l*b*h);
}
int main() {

  cout<<"The sum of 3 and 6 is :"<<add(3,6)<<endl;
  cout<<"The sum of 3,4 and 6 is :"<<add(3,4,6)<<endl;
  cout<<"The volume of cylinder with 4 as radius and height is 2.5 : "<<volume(4,2.5)<<endl;
  cout<<"The volume of Cube with 4 as side : "<<volume(4)<<endl;
  cout<<"The volume of rectangular box with 4 as length, 2.5 as breadth and 4.3 as height : "<<volume(4,2.5,4.3)<<endl;

  return 0;
}