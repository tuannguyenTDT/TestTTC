#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,h;}sv;
int i,j;
printf("nhap n : ");scanf("%d",&sv.n);
printf("nhap h : ");scanf("%d",&sv.h);
for(i=1;i<(sv.h-1);i++)
{	
	if(i==1)
		{
			for(j=1;j<=sv.n;j++)
				{if(j!=sv.n)
					printf("*");
				if(j==sv.n)
				printf("*\n");
				}
		}
	if(j!=1&&i!=sv.h)
	{
		for(j=1;j<=sv.n;j++)
		{
			if(j==1)
			printf("*");
			if(j!=1&&j!=sv.n)
			printf(" ");
			if(j==sv.n)
			printf("*\n");	
		}	
	}	
	if(i==(sv.h-2))
		{
			for(j=1;j<=sv.n;j++)
				{if(j!=sv.n)
					printf("*");
				if(j==sv.n)
				printf("*\n");
				}
		}
}
getch();
}
