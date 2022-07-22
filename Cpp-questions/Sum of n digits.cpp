#include<iostream>

using namespace std;

int main()

{

    int n=5,i,j;

    int num,sum=0;

    cout<<"Enter a number: ";

    cin>>num;

    while(num!=0)

    {

        int d=num%10;

        num/=10;

        sum+=d;

    }

    cout<<"Sum = "<<sum;

}
