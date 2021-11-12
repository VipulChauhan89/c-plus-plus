//overloading of + operator to add two objects of complex numbers. 
#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;
    public:
        complex()
        {
            real=0;
            imag=0;
        }
        complex(int r,int i)
        {
            real=r;
            imag=i;
        }
        complex operator +(complex a)
        {
            complex b;
            b.real=real+a.real;
            b.imag=imag+a.imag;
            return b;
        }
        void display()
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};
void number(int r,int i)
{
    cout<<r<<"+"<<i<<"i"<<endl;
}
int main()
{
    int r1,r2,i1,i2;
    cout<<"Enter the real part of the first number : ";
    cin>>r1;
    cout<<"Enter the imaginary part of the first number : ";
    cin>>i1;
    cout<<"Enter the real part of the second number : ";
    cin>>r2;
    cout<<"Enter the imaginary part of the second number : ";
    cin>>i2;
    cout<<"The first complex number = ";
    number(r1,i1);
    cout<<"The second complex number = ";
    number(r2,i2);
    complex a(r1,i1);
    complex b(r2,i2);
    complex c;
    c=a+b;
    cout<<"The sum of the first and second number is = ";
    c.display();
    return 0;
}
