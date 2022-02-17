/*
    Program to check if the number entered by the user is present in the fibonacci series or not
*/
#include<iostream>
using namespace std;
bool check(unsigned long long int x)
{
    unsigned long long int t1=0,t2=1,nextTerm=0;
    while(nextTerm<=x)
    {
        if(nextTerm==x)
        {
            return true;
        }
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return false;
}
int main()
{
    unsigned long long num;
    cout<<"Enter the number to find out whether it exist in fibonacci series or not : ";
    cin>>num;
    if(check(num))
    {
        cout<<num<<" is present in the fibonacci series"<<endl;
    }
    else
    {
        cout<<num<<" is not present in the fibonacci series"<<endl;
    }
    return 0;
}
