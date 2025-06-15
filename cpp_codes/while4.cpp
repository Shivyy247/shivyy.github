#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter lower limit:";
    cin>>i;
    cout<<"Enter higher limit:";
    cin>>n;
    while(i<=n)
    {
        cout<<n<<"\n";
        n--;
    }
    return 0;
}