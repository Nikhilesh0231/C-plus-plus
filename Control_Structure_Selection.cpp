// Sequence Structure
#include <iostream>
using namespace std;
int main()
{
    // cout<<"This Is Nikhilesh Tiwari"<<endl;
    int age;
    cout << "Tell Me Your Age:" << endl;
    cin >> age;
    /* if (age < 18)//If else Selection Structures
     {
         cout << "You Can Come Not To The Party" << endl;
     }
     else if (age == 18)
     {
         cout << "You Will Get A Pass To The Party" << endl;
     }
     else
     {
         cout << "You Can Come To The Party" << endl;
     }*/
    switch (age) // Switch Selection Structure
    {
    case 18:
        cout << "You Are 18" << endl;
        break;
    case 21:
        cout << "You Are Above 18" << endl;
        break;
    case 5:
        cout << "You Are below 18" << endl;
        break;
    default:
        cout << "No special Cases" << endl;
        break;
    }
    cout<<"Done With Switch Case";
    return 0;
}