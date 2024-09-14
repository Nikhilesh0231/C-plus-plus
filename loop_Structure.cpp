#include <iostream>
using namespace std;
int main()
{ /*For loop*/
    for (int i = 0; i <= 40; i++)
    {
        cout << "printing Usinf for Loop:" << i << endl;
    }
    /*While Loop*/
    int i = 1;
    while (i <= 40)
    {
        cout << "printing using While loop:" << i << endl;
        i++;
    }
    /*Do While Loop*/
    int j=1;
    do
    {
        cout << "printing using Do While loop:" << j << endl;
        j++;
    } while (j <= 40);
    return 0;
}