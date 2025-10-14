#include<iostream>
#include<fstream>
using namespace std;


class inventory
{
	string name;
	int product_id;
	int quantity;
	int price;
public:
	void accept();
	void display();
};
 void inventory :: accept()
 {
	 cout<<"\nEnter item name:";
	 cin>>name;
	 cout<<"Enter product id: ";
	 cin>>product_id;
	 cout<<"Enter quantity:";
	 cin>>quantity;
	 cout<<"Enter price:";
	 cin>>price;
 }

 void inventory :: display()
 {
	 cout<<"\nEnter item name:"<<name<<endl;
	 cout<<"Enter product id: "<<product_id<<endl;
	 cout<<"Enter quantity:"<<quantity<<endl;
	 cout<<"Enter price:"<<price<<endl;
 }
 int main()
 {

	 int n;
	 cout<<"Enter number of items:";
	 cin>>n;
	 inventory obj1[n];
	 fstream file("inv.txt", ios :: in|ios :: out|ios::trunc);

	 for(int i=0;i<n;i++){
	cout<<"\nEnter details for item "<< i+1<<endl;
	 obj1[i].accept();
	 file.write((char *)&obj1[i],sizeof(obj1[i]));
	 }
	 cout<<"-------------------------------------------"<<endl;
	 cout<<"Item details are:";
	 for(int i=0;i<n;i++){
	 file.read((char *)&obj1[i],sizeof(obj1[i]));
	 obj1[i].display();
	 }
	 file.close();
	 return 0;
		 }
