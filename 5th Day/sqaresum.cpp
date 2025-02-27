#include<iostream>
using namespace std;
int main()
{
    int n,i,f=0,s=0;
    cout<<"enter a no: ";
    cin>>n;
    for(i=n;i>0;i/=10)
    {
        f=i%10;
        s+=f*f;
    }
    cout<<s;
}