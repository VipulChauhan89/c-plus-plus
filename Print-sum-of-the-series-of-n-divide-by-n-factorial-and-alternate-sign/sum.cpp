/*
    Program to print the sum of series
    1 - 2/2! + 3/3! - 4/4! + ......Nth term
*/
#include<iostream>
using namespace std;
double factorial(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int N,i,sign=-1;
    double sum=1;
    cout<<"Enter the Limit upto which you want o find out the sum of the series : ";
    cin>>N;
    for(i=2;i<=N;i++)
    {
        sum=sum+((i/factorial(i))*sign);
        sign*=-1;
    }
    cout<<"Sum of the series is = "<<sum<<endl;
    return 0;
}
