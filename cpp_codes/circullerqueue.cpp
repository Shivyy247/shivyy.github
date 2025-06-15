#include<iostream>
using namespace std;
#define MAXQUE 7
int main()
{
    int cqueue[MAXQUE];
    int rear=-1;
    int front=0;
    int item,i;
    int choice=0;
    while(choice!=4)
    {
        cout<<"Menu:";
        cout<<"\n 1.Insert:";
        cout<<"\n 2.Delete:";
        cout<<"\n 3.Display:";
        cout<<"\n 4.Exit:";
        cout<<"\n Enter Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the number:";
            cin>>item;
            if(front==((rear+1)%MAXQUE))
            {
                cout<<"Queue is overflow !";
            }
            else
            {
                if(front!=0 && rear==MAXQUE-1)
                {
                    rear=0;
                }
                else if(rear==-1)
                {
                    rear=0;
                    front=0;
                }
                else
                {
                    rear=rear+1;
                }
                cqueue[rear]=item;
            }
            break;
            case 3:
            cout<<"\n Queue elements are:";
            for(i=front;i<=(rear+1);i = ((i + 1) % MAXQUE))
            {
                cout<<cqueue[i]<<"  ";
            }
            break;
            case 2:
            if(front==0 && rear==-1)
            {
                cout<<"Queue is underflow !";
            }
            else
            {
                if(front==MAXQUE-1)
                {
                    front=0;
                }
                else if(front==rear)
                {
                    front=0;
                    rear=-1;
                }
                else
                {
                    front=front+1;
                }
            }
            break;
        }
             
       
    }
    return 0;
}