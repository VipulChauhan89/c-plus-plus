/*
    Program to print the multiplication table of N inputed from the user
*/
#include <iostream>
using namespace std;
int main()
{
    int N,i;
    cout<<"Enter the number to print its table : ";
    cin>>N;
    for(i=1;i<=10;i++)
    {
        cout<<N<<" X "<<i<<"  = "<<(N*i)<<endl;
    }
    return 0;
}
