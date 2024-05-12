#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int key)
    {
        prev=NULL;
        next=NULL;
        data=key;
    }
}*root=NULL;
node *insertt(node *newNode,int key);
void INSERT(int arr[],int n)
{
       for(int i=0;i<n;i++)
        root=insertt(root,arr[i]);
    cout<<"\n Element inserted successfully \n";
}
node *insertt(node *newNode,int key)
{
    if(newNode==NULL)
    {
        newNode=new node(key);
        return newNode;
    }
    if(root->data>key)
    {
        newNode->prev=insertt(newNode->prev,key);
    }
    else
    {
        newNode->next=insertt(newNode->next,key);
    }
    return newNode;
}
void INORDER(node *root)
{
    if(root!=NULL)
    {
       INORDER(root->prev);
       cout<<root->data<<"->";
       INORDER(root->next);

    }
}
void PREORDER(node *root)
{
    if(root!=NULL)
    {
       cout<<root->data<<"->";
       PREORDER(root->prev);
       PREORDER(root->next);

    }
}
void POSTORDER(node *root)
{
    if(root!=NULL)
    {
       POSTORDER(root->prev);
       POSTORDER(root->next);
       cout<<root->data<<"->";
    }
}
int minValue(node *r)
{
    int minValuee=r->data;
    while(r->prev!=NULL)
    {
        minValuee=root->prev->data;
        root=root->prev;
    }
    return minValuee;
}
node *DELETE(node *Dnode,int key)
{
    if(Dnode==NULL)
    {
        cout<<"Tree is empty..";
        return Dnode;
    }
    if(key<Dnode->data)
    {
        Dnode->prev=DELETE(Dnode->prev,key);
        Dnode->next=DELETE(Dnode->next,key);
    }
    else if(key>Dnode->data)
    {
        Dnode->next=DELETE(Dnode->next,key);
    }
    else
    {
        if(Dnode->prev==NULL)
            return Dnode->next;
        else if(Dnode->next==NULL)
            return Dnode->prev;
        Dnode->data=minValue(Dnode->next);
        Dnode->next=DELETE(Dnode->next,Dnode->data);

    }
    return Dnode;
}
int main()
{
     while(1)
    {
      cout<<"\n1.INSERT\n";
     // cout<<"2.SEARCH\n";
      cout<<"3.PREORDER\n";
      cout<<"4.INORDER\n";
      cout<<"5.POSTORDER\n";
      cout<<"6.DELETE\n";
      cout<<"7.exit\n";
      cout<<"enter your choice:";
      int choice,n,key;
      cin>>choice;
      int arr[]={36,26,46,21,31,11,24,41,56,51,66};
      switch(choice)
      {
          case 1:n=sizeof(arr)/sizeof(arr[0]);
                  INSERT(arr,n);
                 break;
        //  case 2:SEARCH();
          //       break;
          case 3:PREORDER(root);
                 break;
          case 4:INORDER(root);
                 break;
          case 5:POSTORDER(root);
                 break;
          case 6:cout<<"enter data:";
                 cin>>key;
                DELETE(root,key);
                break;
          case 7:exit(0);
                 break;
          default:
               cout<<"\n invalid choice \n";

      }
    }
    return 0;
}
