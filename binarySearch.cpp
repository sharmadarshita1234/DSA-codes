#include<iostream>
using namespace std;
//binary search using recurssion
int Binary_search(int *arr,int key,int n,int beg,int endi,int mid)
{
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key){
           beg=mid+1;
           mid=(beg+endi)/2;
        return Binary_search(arr,key,n,beg,endi,mid);
    }
    else if(arr[mid]>key){
            endi=mid-1;
           mid=(beg+endi)/2;
        return Binary_search(arr,key,n,beg,endi,mid);
    }
    else
    {
        cout<<"number not found";
    }
}
int main()
{
int arr[]={1,2,3,5,6};
    cout<<"enter number you want to search:";
    int key,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cin>>key;
    int beg=0,endi=n-1,mid=(beg+endi)/2;
    cout<<"number found at index:"<<Binary_search(arr,key,n,beg,endi,mid);
    return 0;
}
