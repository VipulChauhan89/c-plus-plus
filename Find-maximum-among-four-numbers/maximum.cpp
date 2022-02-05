/*
  program to find the maximum among four number by desigining a function BIG which takes two numbers as parameter and return maximum among them
  */
#include<iostream>
using namespace std;
int BIG(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b,c,d;
    printf("Enter four  numbers : ");
    cin>>a>>b>>c>>d;
    cout<<"The maximum number is = "<<BIG(a,BIG(b,BIG(c,d)))<<endl;
    return 0;
}
