# include<iostream>
using namespace std;
int main()
{
    int n,i,num=0;
    cout<<"enter a number: ";
    cin>>n;
    for(i=n;i>0;i/=10)
    num++;
    cout<<"number of digits in "<<n<<" = "<<num;
}