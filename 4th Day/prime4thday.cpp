#include<iostream>
using namespace std;
int main()
{
    int n,m,j,i,f,s=0;
    cout<<"enter a no for range :";
    cin>>n;
    for(j=1;j<n;j++)
    {
      f=0;
   for(i=1;i<j;i++)
   {
     if(j%i==0)
     f++;
   }
   if(f==1)
   cout<<"\t"<<j;   
}
}