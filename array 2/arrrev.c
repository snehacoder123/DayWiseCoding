# include<stdio.h>
int main()
{
int n,i;
printf("enter size of array: ");
scanf("%d",& n);
int arr[n];
printf(" enter elements of array ");
for(i=0;i<n;i++)
scanf("%d",arr[i]);
printf("reverse of array ");
for(i=0;i<n;i++)
{
    for (i=arr[i];i<n;i--)
printf("%d",arr[i]);
}
}