#include<stdio.h>
int main()
{
int n,k,i,m,s=0;
scanf("%d\t%d",&n,&k);
for(i=1;i<=n;i++)
{
printf("\n");
}
for(m=1;m<=k;m++)
{
s=s+m;
}
printf("%d",s);
return 0;
}
