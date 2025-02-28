#include<iostream>
using namespace std;
int main()
{
  int n,m,j,s=0;
  cout<<"enter no for range :";
    cin>>n>>m;
  for(j=n;j<=m;j++)
  if(j%2!=0)
  s+=j;
  cout<<"sum of odd no in the range of "<<n<<" and "<<m<<" = "<<s;
  
}