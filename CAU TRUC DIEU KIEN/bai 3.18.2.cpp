#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int x[4],y[4],i;}sv;
for(sv.i=1;sv.i<=4;sv.i++)
{
	printf("x%d = ",sv.i);scanf("%d",&sv.x[sv.i]);
	printf("y%d = ",sv.i);scanf("%d",&sv.y[sv.i]);
}
printf("cac diem nam trong goc phan tu thu 2 la :\n");
for(sv.i=1;sv.i<=4;sv.i++)
{
	if(sv.x[sv.i]<0&&sv.y[sv.i]>0)
	{
		printf("(%d,%d);",sv.x[sv.i],sv.y[sv.i]);
	}
}
getch();
}
