#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a[100],i,x,j;}sv;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
printf("nhap X can xoa : ");scanf("%d",&sv.x);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	if(sv.a[sv.i]==sv.x)
	{
		printf("");
	}
}
printf("\nmang sau khi xoa X la : \n");
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	if(sv.a[sv.i]==sv.x)
	{
		printf("");
	}
	else
	printf("%d\t",sv.a[sv.i]);
}
getch();
}
