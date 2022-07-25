#include<iostream>
using namespace std;

int main()
{
    int num=123456789,i,even=0,odd=0;
    while(num!=0)
    {
        i=num%10;
        num/=10;
        if(i%2==0)
            even+=i;
        else
            odd+=i;
    }
    cout<<even<<endl<<odd;
}