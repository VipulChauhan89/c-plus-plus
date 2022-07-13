/*
  Program to convert inches into centimeters.
*/
#include<iostream>
using namespace std;
int main()
{
    double inch,cm;
    cout<<"Enter the Inches to convert it into Centimeter : ";
    cin>>inch;
    cm=2.54*inch;
    cout<<"Centimeters = "<<cm<<endl;
    return 0;
}
