#include<iostream>
using namespace std;

class Point{
  int x,y;
  public:
  Point(int b,int a){
    x=a;
    y=b;
  }
  void displayPoints(){
    cout<<"("<<x<<","<<y<<")"<<endl;
  }
};

int main() {
  Point p(1,1);
  p.displayPoints();
  Point q(2,2);
  q.displayPoints();
  

  return 0;
}