/*
  Program to check if the entered number is positive negative or zero
*/
#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  if(num==0)
  {
    cout<<"The entered number is zero."<<endl;
  }
  else if(num<0)
  {
    cout<<num<<" is the negative number."<<endl;
  }
  else
  {
    cout<<num<<" is the positive number."<<endl;
  }
  return 0;
}
