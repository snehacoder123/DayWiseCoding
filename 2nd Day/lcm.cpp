#include<iostream>
using namespace std;
int main()
{
    int a,b,i,min,max=0;
    cout<<"enter two number: ";
    cin>>a>>b;
    if(a>b)
      min=a;
    else
    min=b;
    for(i=1;i<=min;i++)
    {
      if(a%i==0 && b%i==0)
        if(max<i)
        max=i;
    }
    cout<<"The lcm of "<<a<<" and "<<b<<" is = "<<a*b/max;
}
 