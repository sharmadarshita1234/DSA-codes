#include<iostream>
#include<stdlib.h>
using namespace std;
const int CAPACITY=5;
int QUEUE[CAPACITY];
int FRONT=0,REAR=-1;
void ENQUE(int item)
{
    if(REAR==CAPACITY-1)
    {
        cout<<"QUEUE OVERFLOW\n";
    }
    else
    {
        ++REAR;
        QUEUE[REAR]=item;
        cout<<"element inserted successfully\n";
    }
}
void DEQUE()
{
        if(REAR==-1)
    {
        cout<<"QUEUE is empty\n";
    }
    else
    {
        cout<<QUEUE[FRONT]<<"element deleted successfully\n";
         FRONT++;
    }
}
void traverse()
{
    if(REAR==-1)
    {
        cout<<"QUEUE is empty"<<endl;
    }
    else
    {
        cout<<"QUEUE elements are"<<endl;
        for(int i=FRONT;i<=REAR;i++)
        {
            cout<<QUEUE[i]<<" ";
        }
    }
}
int main()
{
  while(1)
  {
      cout<<"\n1.ENQUE";
    cout<<"\n2.DEQUE";
    cout<<"\n3.traverse";
    cout<<"\n4.exit";
    cout<<"\nenter your choice:";
    int choice;
    cin>>choice;
    switch(choice)
    {
       case 1: cout<<"enter number you want to push:";
               int item;
               cin>>item;
               ENQUE(item);
               break;
       case 2: DEQUE();
               break;
       case 3: traverse();
               break;
       case 4: exit(0);
                break;
       default:
             cout<<"\n invalid choice \n";
    }
  }
  return 0;
}
