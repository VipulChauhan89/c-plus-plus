/*
  Program to find the factorial of the number
*/
#include<iostream>
using namespace std;
int main()
{
  int num;
  long long int factorial=1;
  cout<<"Enter the number to find its factorial : ";
  cin>>num;
  for(int i=2;i<=num;i++)
  {
    factorial*=i;
  }
  cout<<"Factorial of number "<<num<<" is = "<<factorial<<endl;
  return 0;
}
