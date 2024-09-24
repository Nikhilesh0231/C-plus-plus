#include <iostream>
using namespace std;

class Student
{
protected:
  int roll_number;

public:
  void set_roll_Number(int);
  void get_roll_Rumber(void);
};


void Student::set_roll_Number(int r)
{
  roll_number = r;
}

void Student::get_roll_Rumber(void)
{
  cout << "Roll Number is " << roll_number << endl;
}

class Exam:public Student{
  protected:
   float maths;
   float physics;
  public:
    void set_marks(float,float);
    void get_marks(void);
};

void Exam::set_marks(float m1,float m2){
  maths=m1;
  physics=m2;
}

void Exam::get_marks(void){
  cout<<"The marks obtained in maths are :  "<<maths<<endl;
  cout<<"The marks obtained in physics are : "<<physics<<endl;
}

class Result:public Exam{
  float percentage;
  public:
  void display(){
    get_roll_Rumber();
    get_marks();
    cout<<"Your Percentage is "<<(maths + physics)/2<<"%"<<endl;
  }
};

int main()
{
  /*
    1.If we inheriting B from A And  C From B .
    2. Then C is the child of A and B is the parent of C
    3.A-->B-->C path of the inheritence.

  */
  Result r1;
  r1.set_roll_Number(1);
  r1.set_marks(90.0,80.5);
  r1.display();
  return 0;
}