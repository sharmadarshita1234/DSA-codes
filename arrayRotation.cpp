#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int k;
    cout<<"enter number of element you want to shift:";
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0;i<k;i++)
    {
        temp=arr[n-1];
        for(int l=n-1;l>0;l--)
        {
            arr[l]=arr[l-1];
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
