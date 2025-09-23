#include<iostream>
using namespace std;
class shape
{
protected :
	int x,y;
public:
	void get_data();
	virtual void display_area()=0;
};
void shape:: get_data()
{
	cout<<"input x:";
	cin>>x;
	cout<<"input y:";
	cin>>y;
}
class triangle:public shape
{
	void display_area()
	{
		cout<<"area is:"<<0.5*x*y<<endl;
	}
};
class rectangle : public shape
{
	void display_area()
	{
		cout<<"area is:"<<x*y<<endl;
	}
};
int main()
{
	shape *ptr;
	triangle t;
	ptr=&t;
	ptr->get_data();
	ptr->display_area();
	rectangle r;
	ptr=&r;
	ptr->get_data();
	ptr->display_area();
}	

