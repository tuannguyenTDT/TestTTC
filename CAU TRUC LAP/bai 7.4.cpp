#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{int i;
struct {float n,s;}sv;
sv.s=0;
printf(" n = ");scanf("%f",&sv.n);
for(i=1;i<=sv.n;i++)
{if(i!=sv.n)
	printf(" 1/(%d*%d) +",i,i+1);
 else
 printf(" 1/(%d*%d) ",i,i+1);	
}
for(i=1;i<=sv.n;i++)
{
	sv.s=sv.s+(1/float(i*(i+1)));
}
printf(" = %0.2f",sv.s);
getch();
}

