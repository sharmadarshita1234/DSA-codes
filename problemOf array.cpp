#include<iostream>
#include<list>
using namespace std;
int main()
{
   int arr[]={2,3,6,7};
    int target=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
       if(arr[i]==target)
        cout<<i<<endl;
       else if(arr[i]>target)
        continue;
       else if(arr[i]<target)
       {
           int num=0;
          while(num<target & (target-num)>arr[j])
          {
              num=num+arr[i];
              cout<<arr[i]<<" ";
          }

       }
      }
    }
    return 0;
}
