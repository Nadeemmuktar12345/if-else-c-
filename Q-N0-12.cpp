#include <iostream>
using namespace std;

int main()
{
    int input1, input2;
    cout << "Input a random number between 1 and 100 " << "\n"; 
    cin >> input1;
    cout << "Input a second random number between 1 and 100 " << "\n"; 
    cin >> input2;
    if (input1 == input2)
	{
		 cout << "The first number is EQUAL to the second number\n";

	}
    if (input1 != input2) 
	{
		cout << "The first number is NOT EQUAL to the second number\n";
	 } 

    if (input1 > input2) 
	{
		cout << "The first number is GREATER THAN the second number\n";

	}
    if (input1 < input2) 
	{
		cout << "The first number is LESS THAN the second number\n";
	}

    if (input1 <= input2) 
	{
		cout << "The first number is LESS THAN OR EQUAL TO the second number\n"; 
	}
	
    if (input1 >= input2) 
	{
		cout << "The first number is GREATER THAN OR EQUAL TO the second number\n"; 
	}

    return 0;
}
