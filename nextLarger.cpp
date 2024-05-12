#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result[n],nn;
    for(int i=0;i<n;i++)
    {
        nn=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(nn<arr[j])
            {
                result[i]=arr[j];
                break;
            }
            else
                result[i]=-1;
        }
    }
    result[n-1]=-1;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
