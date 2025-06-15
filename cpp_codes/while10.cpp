#include<iostream>
using namespace std;
int main()
{
    int n,fd,ld,d;
    cout<<"Enter Digit:";
    cin>>n;
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    d=fd*fd-ld*ld;
    cout<<d<<"\n";
    if(d%2==0)
    {
        if(d>0)
        {
            cout<<"Hii !";
        }
        else if(d=0)
        {
            cout<<"Hello !";
        }
        else
        {
            cout<<"What's up";
        }
    }
    else{
        if(d>0)
        {
            cout<<"Intresting!";
        }
        else
        {
            cout<<"Boring!";
        }
    }
    return 0;
}