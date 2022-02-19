/*
    Program to print left half pyramid of Alphabets 
    A
    B B
    C C C
    D D D D
    E E E E E
*/
#include<iostream>
using namespace std;
#include<ctype.h>
int main()
{
    int i,j,n;
    char c,d='A';
    cout<<"Enter the alphabet upto which you want to print the left half pyramid :";
    cin>>c;
    if((c>=65 && c<=90) ||(c>=97 && c<=122))
    {
        n=toupper(c)%64;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j<=i)
                {
                    cout<<d<<" ";
                }
            }
            cout<<endl;
            d++;
        }
    }
    else
    {
        cout<<"The entered character is not an alphabet"<<endl;
    }
    return 0;
}
