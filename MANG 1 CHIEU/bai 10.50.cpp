#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int x,n,a[100],i,kt,j,tg;}sv;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
printf("nhap X can them vao : ");scanf("%d",&sv.x);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
for(sv.i=1;sv.i<=(sv.n-1);sv.i++)
	for(sv.j=sv.i+1;sv.j<=sv.n;sv.j++)
	{
		if(sv.a[sv.i]>=sv.a[sv.j])
		{
			sv.tg=sv.a[sv.i];
			sv.a[sv.i]=sv.a[sv.j];
			sv.a[sv.j]=sv.tg;
		}
	}
printf("danh sach cac phan tu theo thu tu co them X o sau gt lon nhat la :\n");
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	
	if(sv.i==sv.n)
	printf("%d\t%d",sv.a[sv.n],sv.x);
	else
	printf("%d\t",sv.a[sv.i]);
}
getch();
}
