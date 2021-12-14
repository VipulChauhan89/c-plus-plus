/*
  Program to reverse the number entered by the user
*/
#include<iostream>
using namespace std;
int main()
{
  int num,temp,rem,reverse=0;
  cout<<"Enter the number : ";
  cin>>num;
  temp=num;
  while(temp!=0)
  {
    rem=temp%10;
    reverse=reverse*10+rem;
    temp/=10;
  }
  cout<<"The reverse of the number "<<num<<" is = "<<reverse<<endl;
  return 0;
}
