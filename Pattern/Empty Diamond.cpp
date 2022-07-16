#include<iostream>
using namespace std;

inline void replace (int i, int j, int n)
{
    if(i==1)
    {
        for(j=1;j<=2*n;j++)
            cout<<"*";   
    }   
    else
    {
        for(j=1;j<=n-i+1;j++)
            cout<<"*";       
        for(j=1;j<=2*i-2;j++)
            cout<<" ";  
        for(j=n-i+1;j>=1;j--)
            cout<<"*";    
    }         
    cout<<endl;
}

int main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
        replace (i,j,n);
    for(i=n-1;i>=1;i--)
        replace (i,j,n);     
}