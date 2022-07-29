#include<iostream>
using namespace std;

inline int max(int a,int b,int c)
{
    if(a>b && a>c) 
        return a;
    else if(b>a && b>c)
        return b;
    else 
        return c;
}

inline int min(int a,int b,int c)
{
    if(a<b && a<c) 
        return a;
    else if(b<a && b<c)
        return b;
    else 
        return c;
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers\n";
    cin>>a>>b>>c;
    
    
    cout<<"The highest number is : "<<max(a,b,c)<<" and the lowest number is : "<<min(a,b,c);
}