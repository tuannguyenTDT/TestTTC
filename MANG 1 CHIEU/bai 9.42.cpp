#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a[100],i,kt,j;}sv;
printf("so chu so can nhap vao : ");scanf("%d",&sv.n);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
printf("\ndanh sach cac so co 3 uoc tro len la : \n");
for(sv.i=1;sv.i<=sv.n;sv.i++)
{sv.kt=0;
	for(sv.j=1;sv.j<=(sv.a[sv.i]);sv.j++)
{
	if(sv.a[sv.i]%sv.j==0)
	{
	sv.kt=sv.kt+1;
	if(sv.kt==3)
	break;
	}
}
if(sv.kt==3)
printf("%d\t",sv.a[sv.i]);
}
getch();
}

