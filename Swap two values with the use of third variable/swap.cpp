#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
  int temp=a;
  a=b;
  b=temp;
}
int main()
{
  int a,b;
  cout<<"Enter the value of a :";
  cin>>a;
  cout<<"Enter the vlaue of b :";
  cin>>b;
  cout<<"Values before swapp :"<<endl;
  cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
  swap(a,b);
  cout<<"Values after swapp :"<<endl;
  cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
  return 0;
}
