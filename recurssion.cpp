#include<iostream>
#include<math.h>
using namespace std;

//factorial
int factorial(int n)
{
    if(n==0 | n==1)
        return 1;
    else
        return n*factorial(n-1);
}



//fibonacci
int fibonacci(int n)
{
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int fibonacci_series(int countt)
{
    int i;
    for(i=0;i<countt;i++){
        cout<<fibonacci(i)<<" ";
    }
}


// sum of n natural number
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}


// print 6 5 4 3 2 1 using recursion
 int print(int n)
 {
     if(n==1){
     cout<<"1";
        return 1;
     }
     else
     {
         cout<<n<<" ";
        return print(n-1);
     }
 }

 // power of two number
 int power(int base,int exponent)
 {
   if(exponent==0)
        return 1;
   else
    return base*power(base,exponent-1);
 }


 // print 2 table using recurssion
int n=1;
 int table()
 {
     if(n>10)
        return 0;
     else{
        cout<<"2*"<<n<<"="<<2*n<<endl;
        n++;
        table();
     }
 }


 //power of 4
 bool powerOf4(int n)
 {
     int flag=0;
     for(int i=1;i<=n/2;i++)
     {
         if(n==pow(i,4))
         {

             flag++;
             return 1;
         }
     }
     if(flag==0)
        return 0;
 }



//count number of 1 in 32 bits binary number
int NumberOf1()
{
    int count1=0;
    int arr[]={1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(n==32)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0 | arr[i]==1)
            {
                if(arr[i]==1)
                    count1++;
            }
            else
            {
                cout<<"invalid binary number"<<endl;
                return 0;
            }
        }
        cout<<"number of 1 in given  32bit binary number="<<count1;
    }
    else
    {
        cout<<"number does not contain 32 bit";
    }

}

int main()
{
/*int n;
cout<<"enter any number:";
cin>>n;
cout<<powerOf4(n);*/
NumberOf1();
//cout<<power(2,5);
//table();
//print(n);
//cout<<sum(n);
//fibonacci_series(n);
}
