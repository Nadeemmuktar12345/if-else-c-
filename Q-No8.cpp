#include<iostream>
using namespace std;
int main()
{
  int speed;
  cout<<"Enter your speed of Car.!"	;
  cin>>speed;
  if(speed<60)
  {
  	cout<<"You are now in a safe driving mode";
  }
  else if(speed > 60 && speed < 100)
  {
  	cout<<"You are in the mode of burning extra fuel";
  }
  else
  {
  	"You are in the dangerous mode : Accidents may occur please be careful";
  }
 return 0;
}
