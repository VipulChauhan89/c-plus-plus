/*
    program to print the pattern 1/1^2 +1/3^2 -1/5^2 +1/7^2 ......N
*/
#include <iostream>
using namespace std;
int main()
{
    int N,sign=1;
    float sum=1,i;
    cout<<"Enter the last limit : ";
    cin>>N;
    for(i=3;i<=N;i=i+2)
    {
        sum=sum+(sign*(1/(i*i)));
        sign*=-1;
    }
    cout<<"The sum is = "<<sum;
    return 0;
}
