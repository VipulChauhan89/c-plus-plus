/*
    Program to reverse the digits of the number using recursion
*/
#include<iostream>
using namespace std;
unsigned long long int revDigit(unsigned long long int n,unsigned long long int rev)
{
    if(n==0)
    {
        return rev;
    } 
    else
    {
        return revDigit(n/10,rev*10+n%10);
    }
}
int main()
{
    unsigned long long int num,rev=0;
    cout<<"Enter the number to reverse it : ";
    cin>>num;
    cout<<"Reverse of the number "<<num<<" is = "<<revDigit(num,rev)<<endl;
    return 0;
}
