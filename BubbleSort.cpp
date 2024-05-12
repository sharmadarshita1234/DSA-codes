#include<iostream>
using namespace std;
int selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
          if(arr[j]>arr[j+1])
          {
              int temp=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=temp;
          }
        }
    }
    cout<<"\n array elements after soarting"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
int main()
{
    int arr[]={1,7,4,6,3,8,2};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"array elements before soarting"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    selection_sort(arr,n);
    return 0;
}
