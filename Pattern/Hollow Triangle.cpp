#include<iostream>
using namespace std;

int main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
        
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1 || i==n)
                cout<<"*";
            else
                cout<<" ";
        }
            
        cout<<endl;
    }

        
}