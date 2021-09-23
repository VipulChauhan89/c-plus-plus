#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num,check;
    cout<<"Enter the number to check if the number is prime or not\n";
    cin>>num;
    check=isPrime(num);
    if(check==0)
    {
        cout<<num<<" is a Prime number\n";
    }
    else
    {
        cout<<num<<" is not a Prime number\n";
    }
    return 0;
}
