#include<iostream>
using namespace std;
int main()
{
	int arr[]={11,7,3,12,4},size=5,n=1;
	
	cout<<"Before Reverse: ";
	for(int j=0;j<size;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	
	int i=n+1;	
	int k=size-1;
	
	while(i<k)
	{
		swap(arr[i],arr[k]);
		i++; k--;
	}
	
	cout<<"After Reverse: ";
	for(int j=0;j<size;j++)
		cout<<arr[j]<<" ";
	
}
