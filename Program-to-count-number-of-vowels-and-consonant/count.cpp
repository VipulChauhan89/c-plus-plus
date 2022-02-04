//Program to count the number of vowels and consonants in the string
#include<iostream>
using namespace std;
int main()
{
    int i,v_count=0,c_count=0;
    string ch;
    printf("Enter the string : ");
    getline(cin,ch);
    for(i=0;i<ch.length();i++)
    {
       if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
       {
           v_count++;
       }
       else if(ch[i]==' '|| ch[i]=='\n')
       {
           continue;
       }
       else
       {
           c_count++;
       }
    }
    cout<<"The number of vowels is = "<<v_count<<endl<<"The number of consonants is = "<<c_count<<endl;
    return 0;
}
