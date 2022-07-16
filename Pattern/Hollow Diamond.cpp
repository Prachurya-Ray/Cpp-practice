#include<iostream>
using namespace std;

inline void replace (int i, int j, int n)
{
    for(j=1;j<=n-i;j++)
        cout<<" ";
        
    for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
                cout<<"*";
            else
                cout<<" ";
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