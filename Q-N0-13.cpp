#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char opt;
	cout<<"Enter Your First Number";
	cin>>a;
	cout<<"Enter your Second opertor";
	cin>>b;
	cout<<"enter your operation + OR -OR * OR /";
	cin>>opt;
	if(opt='+')
	{
      cout<<"sum="<<a+b<<endl;	
	}
	else if(opt='-')
	{
		cout<<"sub="<<a-b<<endl;
		
	}
	else if(opt='*')
	{ 
	    cout<<"product="<<a*b<<endl;
		
	}
	else if(opt='/')
	{
		cout<<"Divsion="<<a/b<<endl;
	}
	else
	{
		cout<<"You choose wrong";
	}
	
}
