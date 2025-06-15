#include<iostream>
using namespace std;
#define MAXSIZE 10
int main()
{
    int cqueue[MAXSIZE];
    int i,item,choice=1,rear=-1,front=0;
    while(choice!=4)
    {
        cout<<"Menu:";
        cout<<"\n 1.Insert:";
        cout<<"\n 2.delete:";
        cout<<"\n 3.display:";
        cout<<"\n 4.exit:";
        cout<<"\n enter choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter the number:";
            cin>>item;
            if(((rear+1)%MAXSIZE)==front)
            {
                cout<<"Queue is overflow !";
            }
            else
            {
                if(front!=0 && rear==MAXSIZE-1)
                {
                    rear=0;
                }
                else
                {
                    rear=rear+1;
                }
                cqueue[rear]=item;
            }
            break;
        }
    }
    return 0;
}