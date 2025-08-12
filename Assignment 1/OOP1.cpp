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
	cout<<"\nEnter account type:";
	cin>>account_type;
	cout<<"\nEnter account no:";
	cin>>account_no;
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
	cout<<"\n\nEnter amount to be deposited:";
	cin>>amount;
	balance=balance+amount;
	cout<<"Your current balance is:"<<balance;
}
void bank_account::withdraw()
{
	int amount;
	cout<<"\n\nEnter amount to withdraw:";
	cin>>amount;
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
	{cout<<"\n1.Accept 2.Display 3.Diposit 4.Withdraw";
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
	cout<<"\nDo you want to continue(y/n):";
	cin>>ch;
	}
	while(ch =='y' || ch =='Y');
    cout<<"Thank You!";
	return 0;
}
