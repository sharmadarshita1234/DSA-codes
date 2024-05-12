#include<iostream>
#include<stdlib.h>
using namespace std;
const int CAPACITY=7;
int STACK[CAPACITY];
int TOP=-1;
int QUEUE[CAPACITY];
int FRONT=0,REAR=-1;
void PUSH(int item);
void ENQUE(int item)
{
    if(REAR==CAPACITY-1)
    {
        cout<<"QUEUE OVERFLOW\n";
    }
    else
    {
        ++REAR;
        QUEUE[REAR]=item;
    }
}
void DEQUE()
{
        if(REAR==-1)
    {
        cout<<"QUEUE is empty\n";
    }
    else
    {
        cout<<QUEUE[FRONT]<<"  element deleted successfully and pushed into stack\n \n \n";
        PUSH(QUEUE[FRONT]);
         FRONT++;
    }
}
void
\+traverse()
{
    if(REAR==-1)
    {
        cout<<"QUEUE is empty"<<endl;
    }
    else
    {
        for(int i=FRONT;i<=REAR;i++)
        {
            cout<<QUEUE[i]<<" ";
        }
    }
}


//stack PUSH or POP operation
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
void STACKtraverse()
{
    if(TOP==-1)
    {
        cout<<"STACK is empty"<<endl;
    }
    else
    {
        for(int i=TOP;i>-1;i--)
        {
            cout<<"|_"<<STACK[i]<<"_|"<<endl;
        }
    }
}
int main()
{
    ENQUE(9587130);
    ENQUE(7231060);
    ENQUE(1340443);
    ENQUE(7130564);
    ENQUE(7130065);
    ENQUE(7130456);
    ENQUE(7130056);
    cout<<"NUMBER_QUEUE is\n";
    traverse();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    DEQUE();
    DEQUE();
    DEQUE();
    DEQUE();
    DEQUE();
    DEQUE();
    DEQUE();

    cout<<"Number stack is:\n";
    STACKtraverse();


  return 0;
}
