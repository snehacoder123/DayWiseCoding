#include<iostream>
using namespace std;
int main()
{
    int n,i,f=0;
    cout<<"enter a number to check: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        f++;
    }
    if(f==2)
    cout<<"number "<<n<<" is prime";
    else
    cout<<"number "<<n<<" is not prime";
}