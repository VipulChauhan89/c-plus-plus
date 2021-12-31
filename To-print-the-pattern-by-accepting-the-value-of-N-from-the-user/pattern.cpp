/*
    Program to print the pattern by accepting the value of N from the user
    
    pattern is
    1 
    2 2 
    3 3 3 
    4 4 4 4
    5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,N;
    cout<<"Enter the limit upto which you want to print the pattern : ";
    cin>>N;
    cout<<"pattern is"<<endl<<endl;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
