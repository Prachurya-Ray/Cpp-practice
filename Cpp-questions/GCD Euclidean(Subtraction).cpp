#include<iostream>
using namespace std;

inline int gcd(int a, int b)
{
    //Everything div 0
    if(a==0)
        return b;
    if(b==0)
        return a;

    //Base case
    if(a==b)
        return a;

    //Greater
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}

int main()
{
    int a, b;
    cin>>a>>b;
    int x=gcd(a,b);
    cout<<x;
}