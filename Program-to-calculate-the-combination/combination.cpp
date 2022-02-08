/*
  Program to calculate the combination by providing total number of objects and total number of choosing objects
  only applicable for small values of n and r
*/
#include<iostream>
#include<iomanip>
using namespace std;
long double factorial(long double n)
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
    int n,r;
    long double nCr;
    cout<<"Enter the total number of objects : ";
    cin>>n;
    cout<<"Enter the number of objects you want to choose : ";
    cin>>r;
    nCr=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"The Combination is = "<<fixed<<setprecision(2)<<nCr<<endl;
    return 0;
}
