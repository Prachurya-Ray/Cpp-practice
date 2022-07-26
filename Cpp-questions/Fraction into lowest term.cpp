#include<iostream>
using namespace std;

inline int gcd(int a, int b)
{
    int x= min(a,b); //Function to find minimum
    while(x>0)
    {
        if(a%x==0 && b%x==0) //Runs till it finds greatest number that can fully divide both a & b
            break;
        x--;
    }
    return x;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<"/"<<b;
    int x=gcd(a,b);
    a/=x;
    b/=x;
    cout<<"\nAfter converting to lowest term\n";
    cout<<a<<"/"<<b;
}