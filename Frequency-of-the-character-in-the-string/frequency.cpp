/*
    Program to count the frequency of a character in the string
*/
#include<iostream>
#include<ctype.h>
using namespace std;
bool check(char c,char d)
{
    if(c==d)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int i,count=0;
    char d;
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    fflush(stdin);
    cout<<"Enter the character whose frequency you want to find out : ";
    cin>>d;
    for(i=0;i<s.length();i++)
    {
        if(check(toupper(s[i]),toupper(d)))
        {
            count++;
        }
    }
    cout<<"The count of character '"<<d<<"' in the string is = "<<count<<endl;
    return 0;
}
