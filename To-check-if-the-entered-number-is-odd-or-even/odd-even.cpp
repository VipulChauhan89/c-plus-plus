/*
  program to check if the entered number is even or odd
*/
#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  (num%2==0)?cout<<num<<" is an even number."<<endl:cout<<num<<" is an odd number."<<endl;
  return 0;
}
