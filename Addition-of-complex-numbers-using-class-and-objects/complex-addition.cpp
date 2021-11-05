/*
    program to add two complex numbers imaginary and real part 
    and print the resultant of the addition of the two complex numbers.
    
        (5+2i)   +   (3+4i)   =    (8+6i)
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void setinput(int x,int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<"The addition of two complex numbers is :";
            if(b<0)
            {
                cout<<a<<b<<"i"<<endl;
            }
            else if(b>0)
            {
                cout<<a<<"+"<<b<<"i"<<endl;
            }
        }
        complex operator+(complex &c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter two compex numbers to add them :"<<endl;
    cout<<"Enter the real part of first number : ";
    cin>>a;
    cout<<"Enter the imaginary part of first number : ";
    cin>>b;
    cout<<"Enter the real part of second number : ";
    cin>>c;
    cout<<"Enter the imaginary part of second number : ";
    cin>>d;
    complex c1,c2,c3;
    c1.setinput(a,b);
    c2.setinput(c,d);
    c3=c1+c2;
    c3.showdata();
    return 0;
}
