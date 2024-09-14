#include <iostream>
using namespace std;
int main()
{
    int mark[] = {90, 91, 92, 93};
    int mathmarks[4];
    mathmarks[0] = 98;
    mathmarks[1] = 95;
    mathmarks[2] = 96;
    mathmarks[3] = 97;
    cout << mark[0] << endl;
    cout << mark[1] << endl;
    // You Can Change The Value Of An Array
    mark[2] = 345;
    cout << mark[2] << endl;
    cout << mark[3] << endl;
    cout << "These Are Math Marks" << endl;

    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;
    //  printing the Array using Loop
    for (int i = 0; i < 4; i++)
    {
        cout << mathmarks[i] << endl;
    }
    // Do The Same using while amd do while loop
    int i = 0;
    while (i < 4)
    {
        cout << "Printing using while loop:" << mathmarks[i] << endl;
        i++;
    }
    int j=0;
    do
    {
        cout << "Printing using do while loop:" << mathmarks[j] << endl;
        j++;
    } while (j < 4);

    // Pointers And Arrays
    int* p = mark;
    cout<<"The Value Of Mark[0] Is:"<<*p<<endl;
    cout<<"The Value Of Mark[1] Is:"<<*(p+1)<<endl;
    cout<<"The Value Of Mark[2] Is:"<<*(p+2)<<endl;
    cout<<"The Value Of Mark[3] Is:"<<*(p+3)<<endl;

    //
    int* q = mathmarks;
    cout<<*(q++)<<endl;
    cout<<*(++q)<<endl;
    return 0;
}