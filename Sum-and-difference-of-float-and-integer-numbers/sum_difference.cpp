//Program to find the sum and difference of integer and float numbers
#include <iostream>
using namespace std;
int main()
{
	int a,b;
    float c,d;
    cout<<"Enter two integer numbers : ";
    cin>>a>>b;
    cout<<"Enter two float numbers : ";
    cin>>c>>d;
    cout<<a<<"+"<<b<<" = "<<a+b<<endl<<a<<"-"<<b<<" = "<<a-b<<endl;
    cout<<c<<"+"<<d<<" = "<<c+d<<endl<<c<<"-"<<d<<" = "<<c-d<<endl;
    return 0;
}
