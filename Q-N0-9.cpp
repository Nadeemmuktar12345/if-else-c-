#include<iostream>
using namespace std;
int main()
{
	int input1, input2;

    cout << "Input the first number "; 
    cin >> input1;
    cout << "\nInput the second number "; 
    cin >> input2;
    if( (input1 + input2) == 0)
	{
	    cout << "\nEquals Zero";
    }
    else if( (input1 + input2) < 20)
    {
         cout << "\nLess Than 20"; 
    } 
    else if( (input1 + input2) > 20)
    {
        cout << "\nGreater Than 20";
    }
    return 0;
}
