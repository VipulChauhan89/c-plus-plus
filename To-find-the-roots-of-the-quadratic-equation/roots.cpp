//Program to find the roots of the quadratic equation
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    cout<<"Enter the three coefficients of the quadratic equation : ";
	double A,B,C;
	cin>>A>>B>>C;
	cout<<fixed<<setprecision(6)<<(-B+sqrt(B*B-4*A*C))/(2*A)<<endl;
	cout<<fixed<<setprecision(6)<<(-B-sqrt(B*B-4*A*C))/(2*A)<<endl;
	return 0;
}