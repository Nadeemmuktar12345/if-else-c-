#include<iostream>
using namespace std;
int main(){
    int fare;
    cout<<"Enter Temp";
    cin>>fare;
 
 
   if (fare == -40) {
       cout<< "Ouch! Cold either way!!";
    } 
	else if (fare == 32) {
       cout<< "Freezing point of water";
    }
	 else  if (fare == 70) {
       cout<< "Room temperature";
    } else
    if (fare == 99) {
      cout<< "Average body temperature";
    } else
    if (fare == 212) {
      cout<< "Boiling point of water";
    } else {
        cout<< "final else statement is being used :(";
    }
}

