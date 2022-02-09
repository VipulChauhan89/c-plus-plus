/*
  Program to design the function to check if the character is vowel or not and then count the number of vowels in the string
*/
#include<iostream>
using namespace std;
bool is_Vowel(char c)
{
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
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
    int i,v_count=0;
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(is_Vowel(s[i]))
        {
            v_count++;
        }
    }
    cout<<"The count of vowel in the string is = "<<v_count<<endl;
    return 0;
}
