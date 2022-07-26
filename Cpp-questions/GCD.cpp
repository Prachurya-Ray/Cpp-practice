#include<iostream>
using namespace std;

inline void gcd(int a, int b)
{
    int x= min(a,b); //Function to find minimum
    while(x>0)
    {
        if(a%x==0 && b%x==0) //Runs till it finds greatest number that can fully divide both a &b
            break;
        x--;
    }
    cout<<x;
}

int main()
{
    int a=15, b=35;
    gcd(a,b);
}