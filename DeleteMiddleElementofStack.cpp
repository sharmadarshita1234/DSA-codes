#include<iostream>
#include<stdlib.h>
using namespace std;
const int CAPACITY=5;
int STACK[CAPACITY];
int STACK1[CAPACITY];
int TOP=-1,TOP1=-1;
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
void PUSH1(int item)
{
    if(TOP==CAPACITY-1)
    {
        cout<<"STACK OVERLOW\n";
    }
    else
    {
        ++TOP;
        STACK1[TOP]=item;
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
        PUSH1(STACK[TOP]);
        TOP--;
    }
}
void POP1()
{
        if(TOP1==-1)
    {
        cout<<"STACK UNDERFLOW\n";
    }
    else
    {
        TOP1--;
        cout<<"STACK poped successfully\n";
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
        cout<<"STACK elements are"<<endl;
        for(int i=TOP;i>-1;i--)
        {
            cout<<"|_"<<STACK[i]<<"_|"<<endl;
        }
    }
}
int main()
{
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    PUSH(50);
    traverse();

    if(TOP%2==0)
    {
      for(int i=0;i<(CAPACITY/2+1);i++)
      {
        POP();
      }
    }
    else
    {
       for(int i=0;i<=(CAPACITY/2+1);i++)
      {
        POP();
      }
    }

    return 0;
}
