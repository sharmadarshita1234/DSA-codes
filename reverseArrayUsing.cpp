#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int CAPACITY=20;
char STACK[CAPACITY];
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
    }
}
void traverse()
{
    if(TOP==-1)
    {
        cout<<"STACK is empty"<<endl;
    }
    else
    {
        for(int i=TOP;i>-1;i--)
        {
           cout<<STACK[i]<<" ";
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"\noriginal number is\n";
    for(int i=0;i<n;i++)
        cout<<arr[i];
        cout<<endl;
    for(int i=0;i<n;i++)
        PUSH(arr[i]);
    cout<<"\n reverse number is:\n";
    traverse();
    return 0;
}
