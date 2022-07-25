#include<iostream>
using namespace std;

inline void find(int num)
{
    int n=num,sum=0,i;
    while(num!=0)
    {
        i=num%10;
        num/=10;
        sum+=(i*i*i);
    }
    if(n==sum)
        cout<<n<<endl;
}

int main()
{
    int num,i;
    for(i=1; i<=500; i++)
        find(i);
}