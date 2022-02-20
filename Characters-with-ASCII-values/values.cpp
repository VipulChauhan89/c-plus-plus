//Program to print the ASCII value of all the characters from ASCII value 0 to ASCII value 255
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<256;i++)
    {
        cout<<(char)i<<" has ASCII value "<<i<<endl;
    }    
    return 0;
}
