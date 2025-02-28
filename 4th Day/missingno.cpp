#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter size of array: ";
  cin>>n;
  int a[n],i,j=0,k;
  cout<<"enter elements of array: ";
  for(i=1;i<=n;i++)
  cin>>a[i];
  k=a[1];
  for(i=1;i<=n;i++)
{
  if(k==a[i])
 {
   if(k==a[n]&&j==0)
    cout<<"no term is missing:";
   k++;
 }
 else
 {cout<<"\n term number is "<<k;
k+=2;
j++;
 } 
}
}
