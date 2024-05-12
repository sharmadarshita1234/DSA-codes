#include<iostream>
using namespace std;
//linear search
int Liner_search(int *arr,int key,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"number found at index "<<i;
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"number not found in an array";
}
int main()
{
int arr[]={1,2,3,5,6};
    cout<<"enter number you want to search:";
    int key,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cin>>key;
    Liner_search(arr,key,n);
return 0;
}
