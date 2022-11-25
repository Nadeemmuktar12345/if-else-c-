#include<iostream>
using namespace std;
int main()
{
	double cm=0.3937;
    double m=1.0936;
    double km=0.6214;
    double num;
    char menu_char;
    cout << "Press c for Centimeters to Inches\n";
    cout << "Press m for Meters to Yards\n";
    cout << "Press k for Kilometers to Miles\n";
    cin >> menu_char;
	if(menu_char == 'c') 
	{

         cout << "\nType in a number in Centimeters "; 
	     cin >> num;
         cout << "\nNumber of Inches in " << num;
         cout << " Centimeters equals " << num * cm << " Inches";
    }
    else if(menu_char == 'm')
	{
        cout << "\nType in a number in Meters "; 
        cin >> num;
        cout << "\nNumber of Yards in " << num;
        cout << " Meters equals " << num * m << " Yards";
    }
    else if(menu_char == 'k') 
	{
        cout << "\nType in a number in Kilometers ";
        cin >> num;
        cout << "\nNumber of Miles in " << num;
        cout << " Kilometers equals " << num * km << " Miles";
    }
    else
	{
	    cout << "\nError...choose c, m, or k";
	}
}
