/*
  Program to find the largest number among the N numbers entered by the user
*/
#include<iostream>
using namespace std;
int main()
{
  int i,N,num,largest;
  cout<<"Enter the number of numbers you want to enter : ";
  cin>>N;
  cout<<"Enter "<<N<<" numbers :"<<endl;
  for(i=0;i<N;i++)
  {
    cin>>num;
    if(i==0)
    {
      largest=num;
    }
    else if(num>largest)
    {
      largest=num;
    }
  }
  cout<<largest<<" is the largest number."<<endl;
  return 0;
}
