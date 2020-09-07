#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {int n,s;}
sv;
int i;
sv.s=0;
printf(" n = ");scanf("%d",&sv.n);
for(i=1;i<=sv.n;i++)
{if(i!=sv.n)
	printf(" %d +",i);
 else
 printf(" %d ",i);	
}
for(i=1;i<=sv.n;i++)
{
	sv.s=sv.s+i;
}
printf(" = %d",sv.s);
getch();
}
