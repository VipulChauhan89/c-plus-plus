#include<iostream>
using namespace std;
int main() 
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    // sizeof evaluates the size of a variable
    cout<<"Size of int: "<<sizeof(intType)<<" bytes"<<endl;
    cout<<"Size of float: "<<sizeof(floatType)<<" bytes"<<endl;
    cout<<"Size of double: "<<sizeof(doubleType)<<" bytes"<<endl;
    cout<<"Size of char: "<<sizeof(charType)<<" bytes"<<endl;
    return 0;
}
