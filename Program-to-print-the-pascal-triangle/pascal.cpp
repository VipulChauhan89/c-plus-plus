// Program to print the pascal triangle
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    vector<vector<int> > A(n);
    for(int i=0;i<n;i++)
    {
        A[i].resize(i+1);
        A[i][0]=1;
        A[i][i]=1;
        for(int j=1;j<i;j++)
        {
            A[i][j]=A[i-1][j-1]+A[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<A[i].size();j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
