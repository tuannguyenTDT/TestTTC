#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int k,i,m;}sv;
printf("so nguyen = ");scanf("%d",&sv.i);
while(sv.i!=0)
{
	sv.m=sv.i%10;
	sv.i=sv.i/10;
	printf("%d",sv.m);
}
getch();
return 0;
}
