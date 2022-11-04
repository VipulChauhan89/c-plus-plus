#include<iostream>
using namespace std;
int main()
{
    string * S = new string; // String pointer
    int * A = new int;  // Integer pointer
    cout<<"Enter the string in string pointer : ";
    cin>>(*S);          // taking input from user in the string pointer
    fflush(stdin);      // to flush the \n present in the input buffer after the string is entered and the enter key is pressed
    cout<<"Enter the number in integer pointer : ";
    cin>>(*A);          // taking input  from the user in the integer pointer
    
    cout<<endl<<"Before alteration : "<<endl;
    cout<<"Memory address of String pointer = "<<S<<" and value in string pointer = "<<(*S)<<endl;
    cout<<"Memory address of Integer pointer = "<<A<<" and value in Integer pointer = "<<(*A)<<endl<<endl;
    
    // Altering the value in the string pointer
    *S="The Value is altered.";

    // Altering the value in the integer pointer
    *A=999;

    // Printing the address and values after alteration
    cout<<endl<<"After alteration : "<<endl;
    cout<<"Memory address of String pointer = "<<S<<" and value in string pointer = "<<(*S)<<endl;
    cout<<"Memory address of Integer pointer = "<<A<<" and value in Integer pointer = "<<(*A)<<endl;
    return 0;
}
