#include<iostream>
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
void STACK_traverse()
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
 int n,num;
     cout<<"enter number of element you want to push into stack and queue:";
     cin>>n;
     cout<<"\n enter stack elements :\n";
     for(int i=0;i<n;i++)
     {
       cin>>num;
       PUSH(num);
     }
     STACK_traverse();
    return 0;
}
