#include<iostream>
#include<stdlib.h>
using namespace std;
class getNode
{
    public:int data;
    getNode *next;
    getNode()
    {
        next=NULL;
    }
}*start=NULL;
int NumberOfElement();
void deleteMiddle()
{
     getNode *fast=start,*slow=start;
    while(fast!=NULL & fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
}
void InsertionAtend()
{
    cout<<"\nenter data:";
    int item;
    cin>>item;
    getNode *newNode=new getNode();
    newNode->data=item;
    if(start==NULL)
    {
        start=newNode;
    }
    else
    {
        getNode *ptr;
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=newNode;
    }
    cout<<"\n\n new node added successfully\n\n";
}
void  InsertionAtbeg()
{
    cout<<"\nenter data:";
    int item;
    cin>>item;
    getNode *newNode=new getNode();
    newNode->data=item;
    if(start==NULL)
    {
        start=newNode;
    }
    else
    {
    newNode->next=start;
    start=newNode;
    }
}
void InsertionInpos()
{
    int n=NumberOfElement();
    cout<<"\nenter data:";
    int item;
    cin>>item;
    cout<<"enter the position in which you want to enter the data:\n\n";
    int pos;
    cin>>pos;
    getNode *newNode=new getNode();
    newNode->data=item;
    getNode *temp,*ptr;
    temp=start;
    if(pos==1 & n>0)
    {
      newNode->next=start;
      start=newNode;
    }
    else if(n>=pos)
    {
     for(int i=1;i<=(pos-2);i++)
       temp=temp->next;
    ptr=temp->next;
    temp->next=newNode;
    newNode->next=ptr;
    }
    else if((n+1)==pos)
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
    else
        cout<<"required position is not exist\n";

}
void traverse()
{
   getNode *temp;
   temp=start;
   while(temp!=NULL)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }
}
void Search()
{
    cout<<"\nenter number you want to search:";
    int num;
    cin>>num;
    getNode *temp;
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
int deleteNodeAtEnd()
{
    if(start==NULL)
    {
        cout<<"linked list is empty\n";
    }
    else
    {
       getNode *temp,*ptr;
       temp=start;
       while(temp->next->next!=NULL)
        temp=temp->next;
       ptr=temp->next;
       temp->next=NULL;
       return ptr->data;
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
        getNode *temp;
        temp=start;
        start=start->next;
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
    getNode *temp,*ptr;
    temp=start;
    for(int i=1;i<=(pos-2);i++)
        temp=temp->next;
    ptr=temp->next;
    temp->next=ptr->next;
    free(ptr);
    ptr=NULL;
}
int NumberOfElement()
{
    int flag=0;
    getNode *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        flag++;
    }
    cout<<"\n number of element in linked list is "<<flag+1<<endl;

    return flag+1;
}

void RotationOfLinkedList()
{
int k;
cout<<"how many number you want to rotate :";
cin>>k;
int n=NumberOfElement();
int arr[n-k];
  for(int i=0;i<(n-k);i++)
  {
    arr[i]=deleteNodeAtEnd();
    getNode *newNode=new getNode();
    newNode->data=arr[i];
    if(start==NULL)
    {
        start=newNode;
    }
    else
    {
    newNode->next=start;
    start=newNode;
    }
  }

}
void findMin()
{

}
int main()
{
    while(1)
    {
      cout<<"\n--------------single linked List---------------";
      cout<<"\n1.add node at begin\n";
      cout<<"2.add node at end\n";
      cout<<"3.add node in between\n";
      cout<<"4.delete last node\n";
      cout<<"5.delete first node\n";
      cout<<"6.delete specified node\n";
      cout<<"7.traverse\n";
      cout<<"8.Search\n";
      cout<<"9.find number of element\n";
      cout<<"10.Rotation of linked list by k element\n";
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
          case 10:RotationOfLinkedList();
                break;
          case 11:exit(0);
                 break;
      }
    }
    return 0;
}
