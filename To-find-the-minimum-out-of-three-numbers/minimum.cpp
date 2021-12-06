/*
  Program to find the minimum out of three numbers 
*/
#include<iostream>
using namespace std;
int main()
{
  int n1,n2,n3,min;
  cout<<"Enter three numbers to find the minimum out of three numbers : ";
  cin>>n1>>n2>>n3;
  min=n1;
  if(n2<min)
  {
    min=n2;
  }
  if(n3<min)
  {
    min=n3;
  }
  cout<<"The minimum number is = "<<min<<endl;
  return 0;
}
