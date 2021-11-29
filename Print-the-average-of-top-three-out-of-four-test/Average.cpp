/*
  Program to print the average of top three out of four test
*/
#include <iostream>
using namespace std;
int main()
{
  float m1,m2,m3,m4,sum=0,average,min;
  cout<<"Enter the marks in four test : ";
  cin>>m1>>m2>>m3>>m4;
  min=m1;
  if(m2<min)
  {
    min=m2;
  }
  if(m3<min)
  {
    min=m3;
  }
  if(m4<min)
  {
    min=m4;
  }
  sum=m1+m2+m3+m4-min;
  average=sum/3;
  cout<<"The average of top three subjects is = "<<average<<endl;
  return 0;
}
