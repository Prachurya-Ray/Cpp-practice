#include<iostream>
using namespace std;

inline void print(int i,int j)
{
    if(j<=i)
        cout<<"*";
    else
        cout<<" ";
}

inline void enter(int i,int j,int n)
{
    for(j=1; j<=n; j++)
        print(i,j);

    for(j=n; j>=1; j--)
        print(i,j);
    cout<<endl;
}

int main()
{
    int n=5,i,j;
    for(i=n; i>=1; i--)
        enter(i,j,n);
    for(i=1; i<=n; i++)
        enter(i,j,n);
}