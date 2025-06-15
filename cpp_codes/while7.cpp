#include<iostream>
using namespace std;
int main()
{
    int n,ld,sum=0;
    cout<<"Enter Digit:";
    cin>>n;
    while(n>0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    cout<<sum;
    return 0;
}