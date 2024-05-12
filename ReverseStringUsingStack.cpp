#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int CAPACITY=20;
char STACK[CAPACITY];
int TOP=-1;
void PUSH(char item)
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
            cout<<STACK[i];
        }
    }
}
int main()
{
    char name[]="darshita";
    int n=strlen(name);
    cout<<"\noriginal string is\n";
    for(int i=0;i<n;i++)
        cout<<name[i];
        cout<<endl;
    for(int i=0;i<n;i++)
        PUSH(name[i]);
    cout<<"\n reverse string is:\n";
    traverse();
    return 0;
}
