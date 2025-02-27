#include<iostream>
using namespace std;
int main()
{
    int n,m,j,i,f,s=0;
    cout<<"enter no for range :";
    cin>>n>>m;
    for(j=n;j<=m;j++)
    {
      f=0;
   for(i=1;i<j;i++)
   {
     if(j%i==0)
     f++;
   }
   if(f==1)
      s+=j;
   }
   cout<<s;
    
}