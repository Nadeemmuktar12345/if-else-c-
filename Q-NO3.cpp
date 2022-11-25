#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your Age";
	cin>>a;
	if(a<15)
	{
		cout<<"Teenage Boy";
		
	}
	else if(a<=25)
	{
		cout<<"Young Age Boy";
	}
	else if(a>=30)
	{
		cout<<"Marrried Boy";
	}
	else
	{
		cout<<"Not valid Age";
	}
	
	
	
}
