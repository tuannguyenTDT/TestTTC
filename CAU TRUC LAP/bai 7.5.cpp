#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {int n,s,tg;}sv;
int i,j;
sv.s=0;
printf(" n = ");scanf("%d",&sv.n);
for(i=1;i<=sv.n;i++)
	for(j=1;j<=i;j++)
{if(i!=sv.n)
	{
		if(j!=i)
			printf("%d.",j);
 		else
 			printf("%d + ",j);		 
 	}
else
	{
		if(j!=i)
			printf("%d.",j);
 		else
 			printf("%d",j);
 	}
}
for(i=1;i<=sv.n;i++)
	{
		sv.tg=1;
		for(j=1;j<=i;j++)
		{
			sv.tg=sv.tg*j;
		}
		sv.s=(sv.s+sv.tg);	
	}
printf(" = %d",sv.s);
getch();
}

