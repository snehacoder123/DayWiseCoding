#include<iostream>
using namespace std;
int main()
{
    int i,n,max,min;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(i=0;i<n;i++)
       cin>>arr[i];
       min=arr[0];
       max=arr[0];
   for(i=0;i<n;i++)
   {
   if(arr[i]>max)
   max=arr[i];
   if(arr[i]<min)
   min=arr[i];
   }
   cout<<"Largest number is "<<max<<" and smallest number is "<<min;
}