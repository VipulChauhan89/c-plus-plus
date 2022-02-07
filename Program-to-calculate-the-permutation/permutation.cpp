/*
  Program to calculate the permutation by providing total number of objects and number of objects selected as an input
  only applicable for small values of n and r
*/
#include <iostream>  
using namespace std; 
unsigned long long int factorial(unsigned long long int n)
{
    if(n==1)
    {
        return n;
    }
    return n*factorial(n-1);
}
int main()
{
    int n,r;
    unsigned long long int nPr;
    cout<<"Enter the total number of objects : ";
    cin>>n;
    cout<<"Enter the number of objects you want to select : ";
    cin>>r;
    nPr=factorial(n)/factorial(n-r);
    cout<<"The Permutation is = "<<nPr<<endl;
    return 0;
}
