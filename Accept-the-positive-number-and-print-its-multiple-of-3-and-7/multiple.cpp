/*
  Program to accept the positive number and print its multiple of 3 and 7.
*/
#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  if(num<0)
  {
    cout<<"You entered the negative number ."<<endl;
  }
  else
  {
    cout<<"Multiple of three of number "<<num<<" is = "<<num*3<<endl;
    cout<<"Multiple of seven of number "<<num<<" is = "<<num*7<<endl;
  }
  return 0;
}
