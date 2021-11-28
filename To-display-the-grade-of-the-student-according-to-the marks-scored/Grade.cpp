/*
  Program to display the grade of the student according to the marks scored by the student.
  
  percentage>=80 then Grade A
  percentage>=60 and percentage<80 then Grade B
  percentage>=50 and percentage<60 then Grade C
  percentage>=40 and percentage<50 then Grade D
  percentage>=35 and percentage<40 then Grade E
  percentage<35 then Grade F
*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of subject of which you want to enter marks : ";
  cin>>n;
  float marks[n],sum=0,percentage;
  cout<<"Enter the marks in "<<n<<" subjects :"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>marks[i];
    sum+=marks[i];
  }
  percentage=sum/n;
  if(percentage>=80)
  {
    cout<<"Grade A."<<endl;
  }
  else if(percentage>=60 && percentage<80)
  {
    cout<<"Grade B."<<endl;
  }
  else if(percentage>=50 && percentage<60)
  {
    cout<<"Grade C."<<endl;
  }
  else if(percentage>=40 && percentage<50)
  {
    cout<<"Grade D."<<endl;
  }
  else if(percentage>=35 && percentage<40)
  {
    cout<<"Grade E."<<endl;
  }
  else if(percentage<35)
  {
    cout<<"Grade F."<<endl;
  }
  else
  {
    cout<<"Not a valid percentage."<<endl;
  }
  return 0;
}
