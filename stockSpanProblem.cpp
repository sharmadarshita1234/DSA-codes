#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int price[N];
    for(int i=0;i<N;i++)
    {
        cin>>price[i];
    }
    cout<<"1";
    for(int i=0;i<N-1;i++)
    {
     if(price[i]>price[i+1])
        cout<<" 1";
     else
        cout<<" 2";
    }
    return 0;
}
