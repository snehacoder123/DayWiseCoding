#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1,s=0,num=0;
    cout<<"enter a number: ";
    cin>>n;
    cout<<n<<"! is  ";
    for(i=n;i>0;i--)
   {
    cout<<i;
   if(i>1)
   cout<<"*";
    f*=i;
    }
     cout<<" = "<<f;
     for(i=f;i>0;i/=10)
    {
        num++;
    s+=i%10;
}
    cout<<" \n The factorial of " <<n<<" is "<<f<<" , and the sum of the digits is "<<s;
    
}