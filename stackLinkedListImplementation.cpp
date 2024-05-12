#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int item;
    struct node *link;
}*TOP=NULL;
void PUSH(int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        cout<<"insufficient space\n";
    }
    else
    {
        if(TOP==NULL)
        {
        temp->link=NULL;
        }
        else
        {
            temp->link=TOP;
        }
        temp->item=data;
        TOP=temp;
    }
}
void traverse()
{
    struct node *temp;
    if(TOP==NULL)
    {
        cout<<"STACK is empty"<<endl;
    }
    else
    {
        temp=TOP;
        cout<<"stack elements are:"<<endl;
        while(temp!=NULL)
        {
           cout<<temp->item<<endl;
           temp=temp->link;
        }
    }
}
void POP()
{
    struct node *temp;
    temp=TOP;
    TOP=TOP->link;
    free(temp);
    temp=NULL;
}
void Peek()
{
    cout<<"peek element is :"<<TOP->item<<endl;
}
int main()
{
  while(1)
  {
      cout<<"\n--------------Stack linked List Representation---------------";
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
