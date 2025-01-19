# include<stdio.h>
int main()
{ int n,m,i,j;
printf("enter size of array: ");
scanf(" %d",&n);
int a[n],arr[m];
printf("enter elements of  array: ");
for(i=0;i<n;i++)
scanf("%d",& a[i]);
//printf("copy one array into another\n");
for(i=0;i<n;i++)
{
    m=n;
     arr[j]=a[i];
     }
printf("%d",arr[j]);
}