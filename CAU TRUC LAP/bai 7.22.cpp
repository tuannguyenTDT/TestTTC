#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int k,s,n,a[100];}sv;
int i;
printf("nhap so nguyen can kiem tra : ");scanf("%d",&sv.n);
sv.k=1;
for(i=1;i<=sv.n;i++)
{
	if(sv.n%i==0)
	{	
		sv.a[sv.k]=i;
		sv.k=sv.k+1;
	}
}
sv.s=0;
for(i=1;i<=(sv.k-1);i++)
{
	sv.s=sv.s+sv.a[i];
	
}
if((sv.s-sv.n)==sv.n)
	printf("So %d la so hoan thien ",sv.n);
else
	printf("So %d khong phai la so hoan thien ",sv.n);
getch();
}
