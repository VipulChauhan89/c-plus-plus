/*
    Program to print the prime numbers upto N
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,N,c;
    cout<<"Enter the number till which you want to print the prime number : ";
    cin>>N;
    cout<<"Prime numbers are : ";
    for(i=2;i<=N;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
