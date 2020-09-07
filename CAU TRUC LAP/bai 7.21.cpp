#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int a,b,u;
float t;}sv;
printf("nhap a : ");scanf("%d",&sv.a);
printf("nhap b : ");scanf("%d",&sv.b);
sv.u=sv.a*sv.b;
while(sv.a!=sv.b)
{
	if(sv.a>sv.b)
	sv.a=sv.a-sv.b;
	else
	sv.b=sv.b-sv.a;
}
printf("UCLN = %d ",sv.a);
sv.t=sv.u/float(sv.a);
printf("\nBSCNN = %0.0f",sv.t);
getch();
}
