# include<stdio.h>
int main()
{
int num,n=0,i,r,k,p,s=0;
printf("enter number: ");
scanf("%d",&num);
for(i=num;i>0;i/=10)
n++;
for(i=num;i>0;i/=10)
{ r=i%10;
p=1;
for(k=1;k<=n;k++)
 {p=p*r;}
s=s+p;
}
if(s==num)
printf("armstrong ");
else
printf("not armstrong");
}
