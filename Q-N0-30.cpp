#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout << "Enter a letter : ";
	cin >> letter;
	if (letter == 'm')			// The letter wasn't being tested for equivalence. 
	{
		cout << "Hello there!" << endl;
	}
		else { cout << "Sorry wrong letter" << endl; }
		return 0;
		}
