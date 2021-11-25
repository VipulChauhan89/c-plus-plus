/*
  Program to rightshift and leftshift of an integer number
*/
#include<iostream>
using namespace std;
int main()
{
  int num,ls=0,rs=0,s;
  cout<<"Enter the number : ";
  cin>>num;
  cout<<"Enter how many bits you want to shift : ";
  cin>>s;
  rs=num>>s;
  ls=num<<s;
  cout<<"Number = "<<num<<endl<<"Rightshift = "<<rs<<endl<<"Leftshift = "<<ls<<endl;
  return 0;
}
