#include<iostream>
using namespace std;
int main()
{
    int n,m,i,f=1;
    cout<<"enter two no for base and power :";
    cin>>n>>m;
    for(i=1;i<=m;i++)
    f*=n;
    cout<<n<<" raised to the power of "<<m<<" = "<<f;
}