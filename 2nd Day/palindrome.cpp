#include<iostream>
using namespace std;
int main()
{
    int n,i,r=0;
    cout<<"enter a number: ";
    cin>>n;
    for(i=n;i>0;i/=10)
    r=r*10+i%10;
    if(r==n)
    cout<<n<<" is a palindrome:";
    else
    cout<<n<<" is not palindrome:";
}