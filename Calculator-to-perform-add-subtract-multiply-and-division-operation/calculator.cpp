/*
    Program to provide the menu to perform the calculation of '+', '-', '%', '*' by making the calculator
    And take two numbers as an input and print the output.
*/
#include<iostream>
using namespace std;
int main()
{   
    char ch;
    long double num1,num2;
    cout<<"Enter an operator ('+','-','*','/') : ";
    cin>>ch;
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        cout<<"Enter the first number : ";
        cin>>num1;
        cout<<"Enter the second number : ";
        cin>>num2;
    }
    switch(ch)
    {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            break;
        default:
            cout<<"Not a valid operaor."<<endl;
    }
    return 0;
}
