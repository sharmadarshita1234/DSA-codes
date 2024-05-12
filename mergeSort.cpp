#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int merge_sort(int list1[],int list2[],int list3[],int n,int m)
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(list1[i]<list2[j])
         list3[k++]=list1[i++];
         else
         list3[k++]=list2[j++];
    }
    while(i<n)
        list3[k++]=list1[i++];
    while(j<m)
        list3[k++]=list2[j++];

    cout<<"\n array elements after  merge sort"<<endl;
    for(int i=0;i<(n+m);i++)
        cout<<list3[i]<<" ";
    return 0;
}
int main()
{
    int list1[]={6,4,2,3,1,9};
    int list2[]={4,6,2,7,8};
    int n=sizeof(list1)/sizeof(list1[0]);
    int m=sizeof(list2)/sizeof(list2[0]);
    int list3[n+m];
    sort(list1,list1+n);
    sort(list2,list2+m);

    merge_sort(list1,list2,list3,m,n);
    return 0;
}
