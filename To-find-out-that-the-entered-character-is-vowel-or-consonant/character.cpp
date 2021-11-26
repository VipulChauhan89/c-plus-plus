/*
  program to check if the entered character is vowel or consonant
*/
#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"Enter the character : ";
  cin>>ch;
  if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
  {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
      cout<<"The entered character is vowel."<<endl;
    }
    else
    {
      cout<<"The entered character is consonant."<<endl;
    }
  }
  else
  {
    cout<<"The entered character is not an alphabet."<<endl;
  }
  return 0;
}
