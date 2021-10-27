/*
  program to convert temperature from degree faherenheit to degree celsius
*/
#include<iostream>
using namespace std;
int main()
{
  float fh,cl;
  cout<<"Enter the temperature in degree fahrenheit :";
  cin>>fh;
  cl=(fh-32)*(5.0/9.0);
  cout<<"The temperature in degree celsius is "<<cl<<endl;
  return 0;
}
