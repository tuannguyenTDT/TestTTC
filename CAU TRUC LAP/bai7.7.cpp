#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,s;}sv;
int i;
sv.s=0;
printf("nhap n = ");scanf("%d",&sv.n);
for(i=1;i<=sv.n;i++)
{
	if(i==1)
	{
		printf(" 1 ");
	}
	if(i%2==0&&i>1)
	printf(" - %d ",i);
	if(i%2==1&&i>1)
	printf(" + %d ",i);
}
for(i=1;i<=sv.n;i++)
{
	sv.s=sv.s+ i*pow(-1,(i+1));
}
printf(" = %d ",sv.s);
getch();
}
