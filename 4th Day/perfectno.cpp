#include<iostream>
using namespace std;
int main()
{
    int a,i,s=0;
    cout<<"enter a number to check: ";
    cin>>a;
    for(i=1;i<a;i++)
    if(a%i==0)
    {
        cout<<i;
        s+=i;
        if(i!=a/2)
     cout<<" + ";
}
cout<<" = "<<s;
if(s==a)
cout<<"\n"<<a<<" is a perfect number "; 
else
cout<<"\n"<<a<<" is not a perfect number "; 
}