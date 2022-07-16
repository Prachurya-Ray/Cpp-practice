#include<iostream>
using namespace std;

int main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            cout<<"*";
        cout<<endl;
    }
        
        
}