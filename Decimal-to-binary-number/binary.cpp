//Program to convert a decimal number into binary number
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int deci,bin=0;
    int i=1,rem;
    cout<<"Enter the decimal number to convert it into binary number : ";
    cin>>deci;
    while(deci!=0)
    {
        rem=deci%2;
        bin=bin+(rem*i);
        deci/=2;
        i*=10;
    }   
    cout<<"Binary number : "<<bin<<endl;
    return 0;
}
