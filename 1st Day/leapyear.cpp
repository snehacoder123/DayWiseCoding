#include<iostream>
using namespace std;
int main()
{
   int y;
   cout<<"enter a year to check : ";
   cin>>y;
   if(y%4==0 && y%100!=0 || y%400==0)
   cout<<"year "<<y<<" is a leap year";
   else
   cout<<"year "<<y<<" is not a leap year";
}

    
