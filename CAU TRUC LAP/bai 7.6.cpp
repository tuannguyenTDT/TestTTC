#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int j,n,s,tg,x;}sv;
int i;
sv.s=0;
printf(" n = ");scanf("%d",&sv.n);
printf(" x = ");scanf("%d",&sv.x);
for(i=1;i<=sv.n;i++)
{if(i!=sv.n)
	{
		printf("%d^%d + ",sv.x,i);		 
 	}
else
	{
		printf("%d^%d ",sv.x,i);
 	}
}
for(i=1;i<=sv.n;i++)
	{
		sv.s=(sv.s+pow(sv.x,i));	
	}
printf(" = %d",sv.s);
getch();
}
