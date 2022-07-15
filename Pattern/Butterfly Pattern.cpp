#include<iostream>
using namespace std;
inline void fun(int i,int j)
{
	if(j<=i) cout<<" * ";
	else 	 cout<<"   ";
}
inline void sec(int i,int n)
{
	int j;
	for(j=1;j<=n;j++)
		fun(i, j);		
	for(j=n;j>=1;j--)
		fun(i, j);		
	cout<<endl;
}
int main()
{
	int n=4,i;
	for(i=1;i<=n;i++)
		sec(i, n);		
	for(i=n;i>=1;i--)
		sec(i, n);
}
