/*
  Check if the string is Anagrams or not 
  Input string should be in all lowercase.
  And each string should be english alphabet
  Anagrams string example:   taste    ,  state
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    int len1,len2;
    cout<<"Enter the first string : ";
    cin>>s1;
    cout<<"Enter the second string :";
    cin>>s2;
    len1=s1.length();
    len2=s2.length();
    if(len1!=len2)
    {
        cout<<"The two string are not Anagrams because the length of both the strings are different"<<endl;
        
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<len1;i++)
        {
            if(s1[i]!=s2[i])
            {
                cout<<"The two strings are not Anagrams."<<endl;
                return 0;
            }
        }
        cout<<"The two strings are Anagrams."<<endl;
    }
    return 0;
}
