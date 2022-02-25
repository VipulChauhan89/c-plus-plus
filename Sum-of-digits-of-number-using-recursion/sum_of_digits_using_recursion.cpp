/*
    Program to find the sum of the digits of the number using recursion
*/
#include <iostream>
using namespace std;
//Function to return the sum of the digits using recursion
int sumofdigit(int x)
{
    if (x==0)
        return 0;
    else
        return x%10 + sumofdigit(x/10);
}
int main()
{
    int num;
    cout<<"Enter the digit to find out the sum of digit : ";
    cin>>num;
    cout<<"Sum of digit of number "<<num<<" = "<<sumofdigit(num)<<endl;
    return 0;
}
