//Program to find the transporse of the matrix
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and number of columns of the matrix : ";
    cin>>n>>m;
    cout<<"Enter the "<<n*m<<" elements :"<<endl;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Entered matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of the above matrix :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
