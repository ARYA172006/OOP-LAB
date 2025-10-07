#include<iostream>
#include<string.h>
using namespace std;
class bank_account
{
	string name;
	string account_type;
	int account_no;
	int balance=0;
public:
	void accept();
	void display();
	void deposit();
	void withdraw();
};
void bank_account:: accept()
{
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"Enter account type:";
	cin>>account_type;
    while(true){

	cout<<"Enter 7 digit account no:";
	cin>>account_no;

    try
    {
        if(account_no<1000000 || account_no>9999999)
        {
            throw(account_no);
        }
        break;
    }
    catch(int e)
    {
       cout<<" Error :( ,please enter 7 digit number "<<endl;

    }
}
    
}
void bank_account::  display()
{
	cout<<"\nName:"<<name;
	cout<<"\nAccount type:"<<account_type;
	cout<<"\nAccount number:"<<account_no;
}
void bank_account::deposit()
{
	int amount;
    while(true){
	cout<<"\n\nEnter amount to be deposited:";
	cin>>amount;
    try
    {
        if(amount<0)
        {
            throw(amount);
        }
        break;
    }
    catch(int e)
    {
       cout<<" Error :( ,please enter valid amount"<<endl;

    }
}
	balance=balance+amount;
	cout<<"Your current balance is:"<<balance;
}
void bank_account::withdraw()
{
	int amount;
    while(true){
	cout<<"\n\nEnter amount to withdraw:";
	cin>>amount;
    try
    {
        if(amount>balance)
        {
            throw(amount);
        }
        break;
    }
    catch(int e)
    {
       cout<<"Error :(Entered amount exceeds balance amount";

    }
}
	balance=balance-amount;
	cout<<"\nYour current balance is:"<<balance;
}
int main()
{
	int choice;
	char ch;
	bank_account obj1;
    cout<<"WELCOME TO BANK SYSTEM";
	do
	{cout<<"\n1.Accept 2.Display 3.Diposit 4.Withdraw--";
	cin>>choice;
		switch(choice)
		{
		case 1:obj1.accept();
		break;
		case 2:obj1.display();
		break;
		case 3:obj1.deposit();
        break;
		case 4:obj1.withdraw();
		break;
		}
	cout<<"\n\nDo you want to continue(y/n):";
	cin>>ch;
	}
	while(ch =='y' || ch =='Y');
    cout<<"Thank You!";
	return 0;
}
