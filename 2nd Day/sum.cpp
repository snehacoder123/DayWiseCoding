#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"enter a number: ";
    cin>>n;
    for(i=n;i>0;i/=10)
   s+=i%10;
   cout<<"The sum of the digits  "<<s;
}
