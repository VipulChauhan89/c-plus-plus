/*
  To find the area of the triangle
*/
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
  int a,b,c;
  float s,area;
  cout<<"Enter the sides of the triangle : ";
  cin>>a>>b>>c;
  if(a+b>c && b+c>a && c+a>b)
  {
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is = "<<area<<endl;
  }
  else
  {
    cout<<"Entered triangle is invalid."<<endl;
  }
  return 0;
}
