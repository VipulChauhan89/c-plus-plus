/*
  Program to calculate the bill for mangoes 
  If the customer is known for more than 3 years and the bill is more than 600 than discount of 12% is given
  and if the customer is known for more than 3 years but the bill is less than 600 than discount of 7% is given
*/
#include<iostream>
#include<iomanip>
using namespace std;
float total_bill(float a,int b)
{
    if(b>3 && a>600)
    {
        return (a*88)/100.0;
    }
    else if(b>3 && a<=600)
    {
        return (a*93)/100.0;
    }
    else
    {
        return a;
    }
}
int main()
{
    float bill;
    int year;
    cout<<"Enter the bill amount : ";
    cin>>bill;
    cout<<"Enter the number of year he is known to the seller : ";
    cin>>year;
    cout<<"The total bill is = "<<fixed<<setprecision(2)<<total_bill(bill,year)<<endl;
    return 0;
}
