#include<iostream>
using namespace std;
int main()
{
	 int card_number, choice, withdraw, deposit;
     float amount = 3000.00, new_amount = 0;
     char password;
     cout<<"Enter the card number:";
     cin>>card_number;
     cout<<"Enter the Password: ";
     cin>>password;
     cout<<"\n\n";
     cout<<"\n MENU ";
     cout<<"\n 1. Check Balance ";                  
     cout<<"\n 2. Withdraw           ";
     cout<<"\n 3. Deposit   ";
     cout<<"\n4. Exit";
     cout<<"Enter your choice:";
     cin>>choice;
       if (choice == 1)
       {
      cout<<"Current balance on your account:";
       }
     else if (choice == 2)
      {
    cout<<"Enter the amount you want to withdraw: ";
    cin>>withdraw;

    if (withdraw > amount)
      {
        cout<<"You don't have sufficient balance";
      }
    else
      {
        new_amount = amount - withdraw;
        cout<<"Current balance on your account:";
      }
}

else if (choice == 3)
{
    cout<<"Enter the amount you want to deposit: ";
    cin>>deposit;
    amount = amount + deposit;
    printf("Current balance on your account: %d\n", amount);
}
else if (choice == 4)
{
    cout<<"Thank you for using our service";
}

return 0;
    }
   

