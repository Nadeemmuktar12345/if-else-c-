#include<iostream>
using namespace std;
int main()
{
	int user_id;
	int password;
	cout<<"Enter username";
	cin>>user_id;
    cout<<"enter password";
	cin>>password;
	if(password==12345 && password==5678)
	{
		cout<<"congrts";
	}
	else
	{
		cout<<"Not valid";
	}
}
