#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
