#include<iostream>
using namespace std;

inline int gcd(int a, int b)
{
    if(a==0)    //Algorithm stops when we find remainder 0
        return b;
    return gcd( b%a, a);    //We divide by smaller number
}

int main()
{
    int a, b;
    cin>>a>>b;
    int x=gcd(a,b);
    cout<<x;
}