
#include <iostream> 
using namespace std; 
 
class Complex { 
    float r, i; 
public: 
    Complex(){ 
        r=0; 
        i=0; 
    } 
    Complex(float a,float b){ 
        r=a; 
        i=b; 
    } 
    Complex operator +(Complex); 
    friend Complex operator *(Complex c1, Complex c2); 
    friend istream& operator >>(istream& ,Complex&); 
    friend ostream& operator <<(ostream& ,const Complex&); 
}; 
 
Complex Complex::operator +(Complex obj){ 
    Complex temp; 
    temp.r=r + obj.r; 
    temp.i=i + obj.i; 
    return temp; 
} 
 
Complex operator *(Complex c1, Complex c2){ 
    Complex temp; 
    temp.r=c1.r*c2.r - c1.i*c2.i; 
    temp.i=c1.r*c2.i+ c1.i*c2.r; 
    return temp; 
} 
 
istream &operator >>(istream &in, Complex &obj)
{ 
    cout<<"Enter real part: "; 
    in>>obj.r; 
    cout<<"Enter imaginary part: "; 
    in>>obj.i; 
    return in; 
} 
 
ostream &operator <<(ostream &out,const Complex &obj)
{ 
    out<<obj.r<<" + "<<obj.i<<"i"; 
    return out; 
} 
int main()
{ 
    Complex c1,c2,c3; 
    cin>>c1; 
    cin>>c2; 
    c3=c1+c2; 
    cout<<"Sum : "<<c3<<endl; 
    c3=c1*c2; 
    cout<<"Product : "<<c3<<endl; 
    return 0;
}