#include<iostream>
using namespace std;
class employee{
    private:
    string n,d,a,r,t;
    int i,c;
    static int count;     //static variable count
    public:
    employee();    //default constructor declaration
    employee(string name,int e_ID, string dep, string date, string addr, int num);   //parameterized constructor declaration
    employee(employee &v);        //copy constructor declaration
    inline void title()       //inline function
    {
        cout<<"\nWelcome to Employee Information System";
    };
    void display();
    ~employee()           //destructor 
    {
        cout<<"\nNo of object destructed "<<count<<" ";     //no of means nth object destructed
        count--;
    }
    static void showcount(void)
    {
        cout<<"Employee count is:"<<count<<"\n"
;    }
};
employee::employee()          //default constructor 
{
    cout<<"\nThis is default constructor";
    n="Arya Joshi";
    i=246;
    d="Computer";
    a="1/8/25";
    r="Pune";
    c=253680;
    count++;
    
}
employee::employee(string name, int e_ID, string dep, string date, string addr, int num)   //parameterized constructor
{
     cout<<"\n\nThis is parameterized constructor";
    n=name;
    i=e_ID;
    d=dep;
    a=date;
    r=addr;
    c=num;
    count++;
   
}
employee::employee(employee &v)    //copy constructor
{
     cout<<"\n\nThis is copy constructor";
    n=v.n;
    i=v.i;
    d=v.d;
    a=v.a;
    r=v.r;
    c=v.c;
    count++;
    
    
}

void employee::display(){
    
    cout << "\nTHE EMPLOYEE DETAILS ARE AS FOLLOWS:\n";
        cout << "Name: " << n<< endl;
        cout << "Employee ID: " << i << endl;
        cout << "Department: " << d << endl;
        cout << "Date of Joining: " << a << endl;
        cout << "Address: " << r << endl;
        cout << "Telephone Number: " << c << endl;

}
int employee::count;
int main()
{
    
    employee emp1;
    emp1.title();
    emp1.display();
    emp1.showcount();
    string name = "Arya";
    int e_ID = 91231;
    string dep = "HR";
    string date = "22/7/24";
    string addr = "Pune";
    int num = 232424;
    employee emp2(name,e_ID,dep,date,addr,num);
    emp2.display();
   emp2.showcount();
    employee *ptr= new employee(name,e_ID,dep,date,addr,num);    //new for dynamic constructor use
    ptr->display();
    delete ptr;           //delete to free space allocated by new
    employee emp3(emp2);
    emp3.display();
    emp3.showcount();
     return 0;
    

}


