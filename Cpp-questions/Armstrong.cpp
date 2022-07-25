#include<iostream>
using namespace std;

int main()
{

    int num,sum=0,i,n;
    cout<<"Enter a number: ";
    cin>>num;
    n=num;
    while(num!=0)
    {
        i=num%10;
        num/=10;
        sum+=(i*i*i);
    }
    if(n==sum)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong";


}