#include <iostream>
using namespace std;

class Student
{
protected:
  int roll_no;

public:
  void set_number(int a)
  {
    roll_no = a;
  }
  void print_number(void)
  {
    cout << "Your roll no is " << roll_no << endl;
  }
};

class Test :virtual public Student
{
protected:
  float maths, physics;

public:
  void set_marks(float m1, float m2)
  {
    maths = m1;
    physics = m2;
  }

  void print_marks(void)
  {
    cout << "You result is here: " << endl
         << "Maths: " << maths << endl
         << "Physics: " << physics << endl;
  }
};

class Sports :virtual public Student
{
protected:
  float score;

public:
  void set_score(float sc)
  {
    score = sc;
  }

  void print_score(void)
  {
    cout << "Your PT score is " << score << endl;
  }
};

class Result : public Test, public Sports
{
private:
  float total;

public:
  void display(void)
  {
    total = maths + physics + score;
    print_number();
    print_marks();
    print_score();
    cout << "Your total score is: " << total << endl;
  }
};
int main()
{
  Result Nikhilesh;
  Nikhilesh.set_number(110);
  Nikhilesh.set_marks(98.8, 96.7);
  Nikhilesh.set_score(10);
  Nikhilesh.display();
  return 0;
}