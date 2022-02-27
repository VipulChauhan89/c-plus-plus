/*
    Program to find the sum and the average of the number in an array
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int sum=0;
    cout<<"Enter the number of elements you want to enter in an array : ";
    cin>>n;
    long long int arr[n];
    float average=0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    average=sum/(float)n;
    cout<<"The sum of an element in an array is = "<<sum<<endl;
    cout<<"The average of an element in an array is = "<<average<<endl;
    return 0;
}
