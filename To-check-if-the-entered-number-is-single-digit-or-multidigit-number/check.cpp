/*
  Program to check if the entered number is single digit or multidigit number
*/
#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  if(num>=-9 && num<=9)
  {
    cout<<num<<" is the single digit number"<<endl;
  }
  else
  {
    cout<<num<<" is the multi digit number"<<endl;
  }
  return 0;
}
