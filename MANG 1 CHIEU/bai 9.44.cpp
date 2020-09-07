#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int z,n,a[100],i,m;}sv;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
sv.m=-999999;
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	if(sv.a[sv.i]>sv.m&&sv.a[sv.i]<0)
	{
	sv.m=sv.a[sv.i];
	sv.z=sv.i;
}
}
if(sv.m<0)
printf("vi tri cua phan tu am lon nhat la %d",sv.z);
else
printf("khong co phan tu am nao");
getch();
}
