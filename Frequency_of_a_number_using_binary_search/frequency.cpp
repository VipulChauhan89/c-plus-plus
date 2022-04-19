//Frequency of a number in a sorted array using binary search with time complexity of O(n)
#include<iostream>
using namespace std;
int BinarySearch(int *A,int n,int search,bool occur)
{
    int l=0,h=n-1,result=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(A[mid]==search)
        {
            result=mid;
            if(occur)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        else if(search<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return result;
}
int Frequency(int *A,int n,int search)
{
    int first=BinarySearch(A,n,search,true);
    if(first==-1)
    {
        return -1;
    }
    int last=BinarySearch(A,n,search,false);
    return (last-first)+1;
}
int main()
{
    int N,search;
	cout<<"Enter the number of elements you want to enter in an array : ";
	cin>>N;
	int arr[N];
	cout<<"Enter "<<N<<" sorted elements : ";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search : ";
	cin>>search;
    int ans=Frequency(arr,N,search);
	if(ans==-1)
	{
		cout<<search<<" is not present in an array."<<endl;
	}
    else
    {
        cout<<search<<" is found with frequency "<<ans<<endl;
    }
    return 0;
}
