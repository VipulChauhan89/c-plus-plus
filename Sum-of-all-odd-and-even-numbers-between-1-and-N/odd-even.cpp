/*
  Program to find the sum of all odd and even numbers between 1 to N
*/
#include<iostream>
using namespace std;
int main()
{
  int i,N;
  long int sum_even=0,sum_odd=0;
  cout<<"Enter the limit upto which you want to find the sum of odd and even numbers : ";
  cin>>N;
  for(i=1;i<=N;i++)
  {
    if(i%2==0)
    {
      sum_even+=i;
    }
    else
    {
      sum_odd+=i;
    }
  }
  cout<<"Sum of odd numbers is : "<<sum_odd<<endl;
  cout<<"Sum of even numbers is : "<<sum_even<<endl;
  return 0;
}
