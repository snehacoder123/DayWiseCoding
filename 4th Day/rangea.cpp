# include<iostream>
using namespace std;
int main()
{
    int n,m,j,i,num=0,k,s=0;
    cout<<"enter two no for range: ";
    cin>>n>>m;
    for(j=n;j<=m;j++)
    {
        s=0;num=0;
    for(i=j;i>0;i/=10)
    num++;
    for(i=j;i>0;i/=10)
    {
        int p=1;
    for(k=0;k<num;k++)
    p=p*(i%10);
    s=s+p;
    }
    if(s==j)
   cout<<"\t"<<j; 
}
}

 
