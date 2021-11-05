/*
    program to reverse the string
*/
#include<iostream>
#include<string>
using namespace std;
void printreverse(string s)
{
    cout<<s<<"'"<<endl;
}
int main()
{
    string str;
    cout<<"Enter the string to reverse the string : ";
    cin>>str;
    cout<<"The reverse of the string '"<<str<<"' is = '";
    printreverse(string(str.rbegin(),str.rend()));
    return 0;
}
