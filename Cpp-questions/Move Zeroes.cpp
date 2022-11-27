#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,0,0,5,7,0,6}, n=7;
	int i=0;
	for(int j=0; j<n; j++)
	{
		if(arr[j]!=0)
		{
			swap(arr[i],arr[j]);
			i++;
		}
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
