#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a[100],i,x,k;}sv;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
printf("nhap x : ");scanf("%d",&sv.x);
for(sv.i=sv.n;sv.i>=1;sv.i--)
{
	if(sv.a[sv.i]==sv.x)
	{
	printf("vi tri cua %d nam cuoi cung trong mang o vi tri %d",sv.x,sv.i);
	break;}
}
getch();
}
