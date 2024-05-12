#include<iostream>
using namespace std;
int main()
{
    int arr[]={16,17,4,3,5,2};
    int max1,max2=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                max1=arr[j];
                break;
            }
        }
        if(i==n-1)
        {
            cout<<arr[i];
        }
        if(max1==max2)
            continue;
        else
        cout<<max1<<" ";

        max2=max1;
        }

    return 0;
}
