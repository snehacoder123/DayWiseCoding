#include<iostream>
using namespace std;
int main()
{
    int n,z;
    cout<<"enter a position for fibonacci series: ";
    cin>>n;
    int a=0,b=1;
    for(z=0;z<=n;z=a+b)
    {
        a=b;
        b=z;
        cout<<"\t"<<z;
    }
}