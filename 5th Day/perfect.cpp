#include<iostream>
using namespace std;
int main()
{
    int n,i,f=0;
    cout<<"enter a number: ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
    if(i*i==n)
    {
        cout<<n<<" is a perfect sqare";
        f++;
    break;
    }
    }
    if(f==0)
    cout<<"no is not a perfect sqare ";
    
}