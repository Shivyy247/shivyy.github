#include<iostream>
using namespace std;
int main()
{
    int n,ld,sum=0;
    cout<<"Enter digit:";
    cin>>n;
    sum=sum+n%10;
    while(n>=10)
    {
        n=n/10;
    }
    sum=sum+n;
    cout<<sum;
    return 0;
}