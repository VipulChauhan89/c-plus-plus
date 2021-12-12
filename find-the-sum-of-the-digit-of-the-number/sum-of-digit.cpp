/*
  Program to find the sum of the digit of the number.
*/
#include<iostream>
using namespace std;
int main()
{
  int num,sum=0,s;
  cout<<"Enter the number : ";
  cin>>num;
  while(num>0)
  {
    s=num%10;
    sum+=s;
    num/=10;
  }
  cout<<"The sum of digit is = "<<sum<<endl;
  return 0;
}
