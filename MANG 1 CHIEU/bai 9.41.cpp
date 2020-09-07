#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int n,a[100],i,kt,j;}sv;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
printf("\ndanh sach cac so nguyen to la : \n");
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
printf("%d\t",sv.a[sv.i]);
}
getch();
}
