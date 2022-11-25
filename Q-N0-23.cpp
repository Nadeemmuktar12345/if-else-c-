#include <iostream>
using namespace std;


int main()
{
    int num;

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;

    /* If (num & 1) evaluates to 1 */
    if(num & 1)
        cout<<"LSB of is set (1).";
    else
        cout<<"LSB of  is unset (0).";

    return 0;
}
