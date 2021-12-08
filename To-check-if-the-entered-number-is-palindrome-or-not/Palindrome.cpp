//To check if the entered number is palindrome or not
#include<iostream>
using namespace std;
//Function to check the palindrome number
void palindrome(int num)
{
    int temp,sum=0,rem;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(num==sum)
    {
        cout<<num<<" is a palindrome number ."<<endl;
    }
    else
    {
        cout<<num<<" is not a palindrome number ."<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    palindrome(num);
    return 0;
}
