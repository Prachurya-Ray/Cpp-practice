#include<iostream>
using namespace std;

inline void print(int i,int j)
{
    if(j<=i)
        cout<<j;
    else
        cout<<" ";
}

int main()
{
    int n=5,i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            print(i,j);

        for(j=n; j>=1; j--)
            print(i,j);
        cout<<endl;
    }

}