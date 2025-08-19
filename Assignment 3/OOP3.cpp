#include<iostream>
#include<string>
using namespace std;
class staff
{
    protected:
        string name,dept;
        int id;
    public:
        void accept1();
        void display1();
};
class teacher:public staff
{
    private:
    string subject;
    int exp;
    public:
    void accept2();
    void display2();
};
class supp_staff:public staff
{
    string aos;
    public:
    void accept3();
    void display3();
};
void staff :: accept1()
{
    cout<<"\nEnter name:";
    cin>>name;
    cout<<"Enter department:";
    cin>>dept;
    cout<<"Enter id:";
    cin>>id;
}
void staff :: display1()
{
    cout<<"\nName:"<<name;
    cout<<"\nDepartment:"<<dept;
    cout<<"\nID:"<<id;
}
void teacher::accept2()
{
    accept1();
    cout<<"Enter Teacher Subject:";
    cin>>subject;
    cout<<"Enter experience(in years):";
    cin>>exp;
}
void teacher::display2()
{
    cout<<"\n";
    display1();
    cout<<"\nSubject:"<<subject;
    cout<<"\nExperience:"<<exp;
}
void supp_staff::accept3()
{
    accept1();
    cout<<"Enter area of support:";
    cin>>aos;
}
void supp_staff::display3()
{
    cout<<"\n";
    display1();
    cout<<"\nArea of support:"<<aos;
}
int main()
{
    int choice;
    char ch;
    int i,n;
   
    
    cout<<"Welcome to college management system!";
    do{
        cout<<"\nWhich section do you want to address?:1.Teaching staff 2.Support staff:";
         cin>>choice;
    switch(choice)
    {
        case 1:
        {cout<<"Enter no of teachers:";
        cin>>n;
         teacher st1[n];
        for(i=0;i<n;i++)
        {
            st1[i].accept2();
        }
        for(i=0;i<n;i++)
        {
            st1[i].display2();
        }
                break;
        }
        case 2:{cout<<"Enter no of staff members:";
        cin>>n;
        supp_staff st2[n];
        for(i=0;i<n;i++)
        {
            st2[i].accept3();
        }
        for(i=0;i<n;i++)
        {
            st2[i].display3();
        }
                break;
        }
    }
    cout<<"\nDo you want to continue:(y/n):";
    cin>>ch;
    } while(ch=='y' || ch=='Y');
    cout<<"\nThank you---Program Exited";
    return 0;
}
