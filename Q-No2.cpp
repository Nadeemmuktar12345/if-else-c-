#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter your expensis";
    cin>>a;
    if(a>=70000)
    {
      cout<<"Buy 125cc Bike";
	}
	else if(a>=10000)
	{
		cout<<"Buy 70cc Bike";
	}
	else 
	{
	   cout<<"never Buy";
	}
}
