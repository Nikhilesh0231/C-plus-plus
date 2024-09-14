//Example To Understand the Concept 

#include<iostream>
using namespace std;
class Circle{
  private:
    double radius;
  public:
    void compute_Area(double r){
      radius = r;
      double area = 3.14 * radius * radius;
      cout<<"Radius is : "<<radius<<endl;
      cout<<"Area is : "<<area<<endl;
    }
};
int main() {

  Circle obj1;
  obj1.compute_Area(1.5);
  Circle obj2;
  obj2.compute_Area(2.5);

  return 0;
}