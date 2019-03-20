#include<stdio.h>
int main()
{
int a[100],b,c,i,j,t;

scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;

for(j=i;j>=0;j--)
{
if(a[j-1]>a[j])
{
t=a[j-1];
a[j-1]=a[j];
a[j]=t;
}
}
}
for(i=0;i<b;i++)
{
printf("%d",a[i]);
}
}

