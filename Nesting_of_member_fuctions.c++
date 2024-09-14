// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private
#include <iostream>
#include <string>
using namespace std;

class binary
{
  private://as such we don't need to make it private because by deafault class members are private
  string s;
  void chk_bin(void);

public:
  void read(void);
  void onesCompliment(void);
  void display(void);
};

void binary::read(void)
{
  cout << "Enter a binary number: " << endl;
  cin >> s;
}

void binary ::chk_bin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "Incorrect Binary Format" << endl;
      exit(0);
    }
    // cout << "Correct binary number" << endl;
  }
}

void binary ::onesCompliment(void)
{ 
  chk_bin();//when use any function inside another function is called nesting of function 
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary ::display(void)
{
  cout<<"Displaying Your Binary Number "<< endl;
  for (int i = 0; i < s.length(); i++)
  {
    cout << s.at(i);
  }
  cout<<endl;
}

int main()
{
  // Nesting of member functions
  binary b;
  b.read();
  // b.chk_bin();//we can direct call it in any other function of the same class without using dot operator.
  //b.chk_bin();//as we can see that we don't need to call it here beacuse it call by another function so we can make it as private such that no one can call it here.
  b.display();
  b.onesCompliment();
  b.display();
  return 0;
}