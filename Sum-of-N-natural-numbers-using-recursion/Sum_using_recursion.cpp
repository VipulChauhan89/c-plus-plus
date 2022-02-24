/*
    Program to find out the sum of N natural numbers using recursion
*/
#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int N;
    cout<<"Enter the limit upto which we have to find out sum : ";
    cin>>N;
    cout<<"Sum is = "<<sum(N)<<endl;
    return 0;
}
