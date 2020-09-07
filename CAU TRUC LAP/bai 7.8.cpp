#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int i,j;
struct {int n;
float s,t,tg;}sv;
sv.s=0;
printf(" n = ");scanf("%d",&sv.n);
for(i=1;i<=sv.n;i++)
{
	sv.tg=0;
	sv.t=0;
	for(j=1;j<=i;j++)
	{
		sv.tg=sv.tg*j;
		sv.t=sv.t+j;
		
	}
	sv.s=(sv.s+float(sv.t)/float(sv.tg));
	printf("%f",sv.s);
}
printf(" = %0.2f",sv.s);
getch();
}
