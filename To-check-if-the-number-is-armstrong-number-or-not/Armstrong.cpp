/*
  Program to check if the number is armstrong number or not
*/
#include<iostream>
using namespace std;
int main()
{
  int num,temp,sum=0,s;
  cout<<"Enter the number : ";
  cin>>num;
  if(num>=100 && num<=999)
  {
    temp=num;
    while(temp!=0)
    {
      s=temp%10;
      sum=sum+(s*s*s);
      temp=temp/10;
    }
    if(sum==num)
    {
      cout<<num<<" is an armstrong number."<<endl;
    }
    else
    {
      cout<<num<<" is not an armstrong number."<<endl;
    }
  }
  else
  {
    cout<<"It is not a three digit number."<<endl;
  }
  return 0;
}
