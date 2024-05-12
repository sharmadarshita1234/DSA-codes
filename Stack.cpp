#include<iostream>
#include<stdlib.h>
using namespace std;
const int CAPACITY=5;
int STACK[CAPACITY];
int TOP=-1;
void PUSH(int item)
{
    if(TOP==CAPACITY-1)
    {
        cout<<"STACK OVERLOW\n";
    }
    else
    {
        ++TOP;
        STACK[TOP]=item;
        cout<<"Stack pushed successfully\n";
    }
}
void POP()
{
        if(TOP==-1)
    {
        cout<<"STACK UNDERFLOW\n";
    }
    else
    {
        TOP--;
        cout<<"STACK poped successfully\n";
    }
}
void Peek()
{
 cout<<"PEEK element is :"<<STACK[TOP]<<endl;
}
void traverse()
{
    if(TOP==-1)
    {
        cout<<"STACK is empty"<<endl;
    }
    else
    {
        cout<<"STACK elements are"<<endl;
        for(int i=TOP;i>-1;i--)
        {
            cout<<"|_"<<STACK[i]<<"_|"<<endl;
        }
    }
}


int main()
{
  while(1)
  {
      cout<<"\n1.PUSH";
    cout<<"\n2.POP";
    cout<<"\n3.Peek";
    cout<<"\n4.traverse";
    cout<<"\n5.exit";
    cout<<"\nenter your choice:";
    int choice;
    cin>>choice;
    switch(choice)
    {
       case 1: cout<<"enter number you want to push:";
               int item;
               cin>>item;
               PUSH(item);
               break;
       case 2: POP();
               break;
       case 3: Peek();
               break;
       case 4: traverse();
              break;
       case 5: exit(0);
                break;
       default:
             cout<<"\n invalid choice \n";
    }
  }
  return 0;
}
