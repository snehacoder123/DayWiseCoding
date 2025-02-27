#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t=0;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    cout<<"enter elememts:";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
        if(a[i]>a[j])
       {
         t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
    }
    cout<<"\n sorted array:";
    for(i=0;i<n;i++)
    cout<<"\t"<<a[i]; 
    if(n%2!=0)
    cout<<"\n median: "<<a[n/2];
    else
   cout<<" \n median: "<<(a[n/2]+a[(n/2)-1])/2;
}