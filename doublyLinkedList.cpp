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
    }
    else
    {
        node *ptr;
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=newNode;
        newNode->prev=ptr;
    }
    cout<<"\n\n new node added successfully\n\n";
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
   while(temp!=NULL)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }
  }
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
    }
    else
    {
    newNode->next=start;
    start->prev=newNode;
    start=newNode;
    }
}
void InsertionInpos()
{
    cout<<"\n enter data:";
    int item;
    cin>>item;
    cout<<"enter the position in which you want to enter the data:\n\n";
    int pos;
    cin>>pos;
    node *newNode=new node();
    newNode->data=item;
    node *temp,*ptr;
    temp=start;
    for(int i=1;i<=(pos-2);i++)
        temp=temp->next;
    ptr=temp->next;
    temp->next=newNode;
    ptr->prev=newNode;
    newNode->prev=temp;
    newNode->next=ptr;
    newNode->next=ptr;

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
       temp->next=NULL;
       free(ptr);
       ptr=NULL;
       cout<<"last node deleted successfully\n";
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
        node *temp;
        temp=start;
        start=start->next;
        start->prev=NULL;
        free(temp);
        temp=NULL;
        cout<<"\n starting node deleted successfully\n";
    }
}
void deleteNodeAtPos()
{
  cout<<"\n enter the position in which you want to delete an element:";
    int pos;
    cin>>pos;
    node *temp,*ptr,*ptr1;
    temp=start;
    for(int i=1;i<=(pos-2);i++)
        temp=temp->next;
    ptr=temp->next;
    ptr1=ptr->next;
    temp->next=ptr->next;
    ptr1->prev=temp;
    free(ptr);
    ptr=NULL;
}
void Search()
{
    cout<<"\nenter number you want to search:";
    int num;
    cin>>num;
    node *temp;
    temp=start;
    int flag=0;
    while(temp->next!=NULL)
    {
        flag++;
        if(num==temp->data)
        {
            cout<<"\nnumber found at position "<<flag<<endl;
        }
        temp=temp->next;
    }
    if(flag==0)
        cout<<"number not found\n";

}
int NumberOfElement()
{
    int flag=0;
    node *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        flag++;
    }
    cout<<"\n number of element in linked list is "<<flag+1<<endl;
    return flag+1;
}
void Reverse()
{
    node *temp;
    temp=start;
    int n=NumberOfElement();
    for(int i=1;i<n;i++)
        temp=temp->next;

     for(int i=1;i<n;i++)
     {
         cout<<temp->data<<"->";
        temp=temp->prev;
     }
     cout<<temp->data<<endl;
}
int main()
{
     while(1)
    {
      cout<<"\n1.add node at begin\n";
      cout<<"2.add node at end\n";
      cout<<"3.add node in between\n";
      cout<<"4.delete last node\n";
      cout<<"5.delete first node\n";
      cout<<"6.delete specified node\n";
      cout<<"7.traverse\n";
      cout<<"8.Search\n";
      cout<<"9.Number of element in linked list\n";
       cout<<"10.REVERSE\n";
      cout<<"11.exit\n";
      cout<<"enter your choice:";
      int choice;
      cin>>choice;
      switch(choice)
      {
          case 1:InsertionAtbeg();
                 break;
          case 2:InsertionAtend();
                 break;
          case 3:InsertionInpos();
                 break;
          case 4:deleteNodeAtEnd();
                 break;
          case 5:deleteNodeAtBeg();
                 break;
          case 6:deleteNodeAtPos();
                 break;
          case 7:traverse();
                 break;
          case 8:Search();
                 break;
          case 9:NumberOfElement();
                 break;
          case 10:Reverse();
                   break;
          case 11:exit(0);
                 break;
          default:
               cout<<"\n invalid choice \n";

      }
    }
    return 0;
}
