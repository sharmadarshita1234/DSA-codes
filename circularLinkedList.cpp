#include<iostream>
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
        newNode->next=start;
    }
    else
    {
        getNode *ptr;
        ptr=start;
        while(ptr->next!=start)
            ptr=ptr->next;
        ptr->next=newNode;
        newNode->next=start;
    }
    cout<<"new node added successfully\n\n";
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
        newNode->next=start;
    }
    else
    {
     getNode *temp;
     temp=start;
     while(temp->next!=start)
        temp=temp->next;
    newNode->next=start;
    start=newNode;
    temp->next=start;

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
       getNode *temp,*ptr;
       temp=start;
       while(temp->next->next!=start)
        temp=temp->next;
       ptr=temp->next;
       temp->next=start;
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
       getNode *temp,*ptr;
        temp=start;
        ptr=start;
      while(ptr->next!=start)
        ptr=ptr->next;
       start=start->next;
       ptr->next=start;
        free(temp);
        temp=NULL;
        cout<<"\n starting node deleted successfully\n";
    }
}
void traverse()
{
   getNode *temp;
   temp=start;
   while(temp->next!=start)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<temp->data<<endl;
}
int main()
{
        while(1)
    {
      cout<<"\n--------------circular linked List---------------";
      cout<<"\n1.add node at begin\n";
      cout<<"2.add node at end\n";
     // cout<<"3.add node in between\n";
      cout<<"4.delete last node\n";
      cout<<"5.delete first node\n";
      //cout<<"6.delete specified node\n";
      cout<<"7.traverse\n";
      /*cout<<"8.Search\n";
      cout<<"9.find number of element\n";*/
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
         // case 3:InsertionInpos();
           //     break;
          case 4:deleteNodeAtEnd();
                 break;
          case 5:deleteNodeAtBeg();
                 break;
        /*case 6:deleteNodeAtPos();
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
            cout<<"invalid choice\n";
      }
    }
    return 0;
}
