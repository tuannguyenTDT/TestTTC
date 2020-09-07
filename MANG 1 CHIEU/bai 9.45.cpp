#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int kt,sd,s,j,n,a[100],i,m;
float tb;}sv;
sv.s=0;sv.sd=0;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
for(sv.i=1;sv.i<=sv.n;sv.i++)
{sv.kt=1;
	for(sv.j=2;sv.j<=(sv.a[sv.i]-1);sv.j++)
{
	if(sv.a[sv.i]%sv.j==0)
	{
	sv.kt=0;
	break;
	}
}
if(sv.kt)
{
	sv.sd=sv.sd+1;
	sv.s=sv.s+sv.a[sv.i];
}
}
sv.tb=sv.s/float(sv.sd);
printf("gia tri trung binh cua cac so nguyen to la %0.2f",sv.tb);
getch();
}
