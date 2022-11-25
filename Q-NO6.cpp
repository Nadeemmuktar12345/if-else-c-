#include <iostream>
using namespace std;
int main() 
{
    int n ;
    int m = 10;
    cout<<"Enter your Value";
    cin>>n;

    if(n > m || n == 15) {
        cout<<"Either n is greater than m, or n is equal to 15";
    } 
    else if( n == 5 && m == 10 ) {
        cout<<"n is equal to 5 and m is equal to 10!";
    } 
    else if ( !(n == 6)) {
        cout<<"It is not true that n is equal to 6!";
    }
    else if (n > 5) {
        cout<<"n is greater than 5!";
    }

    return 0;
}
