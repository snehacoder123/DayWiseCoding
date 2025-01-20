# include<iostream>
using namespace std;
int main()
{
    int n,i,num=0,k,s=0;
    cout<<"enter a number to check: ";
    cin>>n;
    for(i=n;i>0;i/=10)
    num++;
    for(i=n;i>0;i/=10)
    {
        int p=1;
    for(k=0;k<num;k++)
    p=p*(i%10);
    s=s+p;
  }
    if(s==n)
   cout<<n<<" is armstrong number";
   else
   cout<<n<<" is not an armstrong number";
}   
 
