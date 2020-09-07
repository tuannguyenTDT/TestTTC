#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int kt,j,n,a[100],i,m,b[100];}sv;
printf("so chu so mang a can nhap vao : ");scanf("%d",&sv.n);
printf("so chu so mang b can nhap vao : ");scanf("%d",&sv.m);
for(sv.i=1;sv.i<=sv.n;sv.i++)
{
	printf("a[%d] = ",sv.i);scanf("%d",&sv.a[sv.i]);
}
printf("\n");
for(sv.i=1;sv.i<=sv.m;sv.i++)
{
	printf("b[%d] = ",sv.i);scanf("%d",&sv.b[sv.i]);
}
printf("so phan tu nam trong a ma khong nam trong b la : \n");

for(sv.i=1;sv.i<=sv.n;sv.i++)
	{sv.kt=0;
	for(sv.j=1;sv.j<=sv.m;sv.j++)
	{
		if(sv.a[sv.i]==sv.b[sv.j])
			{
				sv.kt=1;
				break;
			}
	}
	if(sv.kt==0)
	printf("%d\t",sv.a[sv.i]);}
printf("\nso phan tu nam trong a va nam trong b la :\n");
for(sv.i=1;sv.i<=sv.n;sv.i++)
	for(sv.j=1;sv.j<=sv.m;sv.j++)
	{
		if(sv.a[sv.i]==sv.b[sv.j])
		printf("%d\t",sv.a[sv.i]);		
	}
getch();
}
