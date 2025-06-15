#include<iostream>
using namespace std;
int main()
{
    int n,count=0,sum=0;
    cout<<"Enter limit:";
    cin>>n;
    while(count<n)
    {
        if(count%2!=0)
        {
            count++;
            sum=sum+count;
        }
        else
        {
            sum=sum+count*count;
        }
        cout<<sum<<"\n";
    }
    return 0;
}