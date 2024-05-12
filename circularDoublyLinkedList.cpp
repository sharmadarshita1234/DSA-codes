#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node()
    {
        prev=NULL;
        next=NULL;
    }
}*start;
void InsertionAtend()
{
    cout<<"\nenter data:";
    int item;
    cin>>item;
    node *newNode=new node();
    newNode->data=item;
    if(start==NULL)
    {
        start=newNode;
        newNode->next=start;
        newNode->prev=start;
    }
    else
    {
        node *ptr;
        ptr=start;
        while(ptr->next!=start)
            ptr=ptr->next;
        ptr->next=newNode;
        newNode->prev=ptr;
        newNode->next=start;
        start->prev=newNode;
    }
    cout<<"\n\n new node added successfully\n\n";
}
void  InsertionAtbeg()
{
    cout<<"\nenter data:";
    int item;
    cin>>item;
    node *newNode=new node();
    newNode->data=item;
    if(start==NULL)
    {
        start=newNode;
        newNode->next=start;
        newNode->prev=start;
    }
    else
    {
      node *temp;
      temp=start;
    while(temp->next!=start)
        temp=temp->next;
    newNode->next=start;
    start->prev=newNode;
    start=newNode;
    temp->next=start;
    start->prev=temp;
    }
}
void deleteNodeAtBeg()
{
    if(start==NULL)
    {
        cout<<"linked list is empty\n";
    }
    else
    {
        node *temp,*ptr;
        temp=start;
        ptr=start;
        while(temp->next!=start)
            temp=temp->next;
        start=start->next;
        start->prev=temp;
        temp->next=start;
        if(start==temp)
            start=NULL;
        free(ptr);
        ptr=NULL;
        cout<<"\n starting node deleted successfully\n";
    }
}
void deleteNodeAtEnd()
{
    if(start==NULL)
    {
        cout<<"linked list is empty\n";
    }
    else
    {
       node *temp,*ptr;
       temp=start;
       while(temp->next->next!=NULL)
        temp=temp->next;
       ptr=temp->next;
       temp->next=start;
       start->prev=temp;
       free(ptr);
       ptr=NULL;
       cout<<"last node deleted successfully\n";

    }
}
void traverse()
{
    if(start==NULL)
    {
        cout<<"list is empty\n";
    }
    else
    {
   node *temp;
   temp=start;
   while(temp->next!=start)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<temp->data<<endl;
  }
}
int main()
{
     while(1)
    {
      cout<<"\n-------------circular doubly Linked List---------------";
      cout<<"\n1.add node at begin\n";
      cout<<"2.add node at end\n";
      //cout<<"3.add node in between\n";
      cout<<"4.delete last node\n";
      cout<<"5.delete first node\n";
      //cout<<"6.delete specified node\n";
      cout<<"7.traverse\n";
      /*cout<<"8.Search\n";
      cout<<"9.Number of element in linked list\n";*/
      cout<<"10.exit\n";
      cout<<"enter your choice:";
      int choice;
      cin>>choice;
      switch(choice)
      {
          case 1:InsertionAtbeg();
                 break;
          case 2:InsertionAtend();
                 break;
          //case 3:InsertionInpos();
            //     break;
          case 4:deleteNodeAtEnd();
                 break;
          case 5:deleteNodeAtBeg();
                 break;
         /* case 6:deleteNodeAtPos();
                 break;*/
          case 7:traverse();
                 break;
          /*case 8:Search();
                 break;
          case 9:NumberOfElement();
                 break;*/
          case 10:exit(0);
                 break;
          default:
               cout<<"\n invalid choice \n";

      }
    }
    return 0;
}
