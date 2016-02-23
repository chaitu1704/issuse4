#include<stdio.h>
#include</home/bossmool/chaitu/sort.h>
int swap(int a[],int n)
{
int i,j;
for(i=0;i<=n;i++)
{
for(j=0;j<=n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}

printf("sorted elements:");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
}
