#include<iostream>
using namespace std;
int insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
         for(int k=j+1;k<=i;k++)
         {
            if(arr[k]<arr[j])
            {
                int temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
            }
         }
        }
        cout<<"phase= "<<i+1<<endl;
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
    }
}
int main()
{
int arr[]={1,4,6,2,6,1,8};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    return 0;
}
