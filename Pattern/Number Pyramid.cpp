#include<iostream>
using namespace std;

int main()
{
    int n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            cout<<i;
        cout<<endl;
    }
        
        
}