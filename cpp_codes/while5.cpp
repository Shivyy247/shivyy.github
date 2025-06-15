#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,count=1;
    cout<<"Enter limit:";
    cin>>n;
    while(count<n)
    {
        if(n%2!=0)
        {
            count++;
            sum=count*count;
            cout<<sum<<" ";
        }
    } 
    return 0;
}