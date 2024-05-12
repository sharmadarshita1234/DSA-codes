#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int sem;
    cout<<"enter number of semester:";
    cin>>sem;
    int sub[sem];
    for(int i=0;i<sem;i++)
    {
        cout<<"\n  number of subjects in "<<i+1<<" semester:";
        cin>>sub[i];
    }
    int max1[sem];
    for(int j=0;j<sem;j++)
    {
      cout<<"\n enter marks of "<<j+1<<" semester exam :";
      int marks[sub[j]];
      for(int i=0;i<sub[j];i++)
      {
        cin>>marks[i];
        if(marks[i]>100 & marks[i]<0)
            cout<<"invalid marks";
      }
      max1[j]=*max_element<>(marks,marks+sub[j]);
    }
    for(int i=0;i<sem;i++)
    {
        if(max1[i]<100 & max1[i]>0)
        cout<<"maximum marks in "<<i+1<<" semester is "<<max1[i]<<endl;
        else
        cout<<"maximum marks of "<<i+1<<" semester is not valid"<<endl;
    }
    return 0;

}
