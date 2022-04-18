//Program to find the lexicographic string
#include<iostream>
using namespace std;
string lexnext(string s)
{
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!='z')
        {
            s[i]++;
            break;
        }
        s[i]='a';
    }
    return s;
}
int main()
{
    string s,t;
    cout<<"Enter string 1 : ";
    cin>>s;
    cout<<"Enter string 2 : ";
    cin>>t;
    string res=lexnext(s);
    if(res!=t)
    {
        cout<<res<<endl;
    }
    else
    {
        cout<<"Can't be possible "<<endl;
    }
    return 0;
}
