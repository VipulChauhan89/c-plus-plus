/*
  accept two numbers from the user and add the number and print their sum
*/
#include<iostream>
using namespace std;
//function to add two numbers and return their sum
int add(int a,int b)
{
  int sum=0;
  sum=a+b;
  return sum;
}
int main()
{
  int a,b;
  cout<<"Enter the first number : ";
  cin>>a;
  cout<<"Enter the second number : ";
  cin>>b;
  cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;
  return 0;
}
