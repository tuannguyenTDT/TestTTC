#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int a[100],k,n,kt;}sv;
int i,j;
printf("nhap so can kiem tra : ");scanf("%d",&sv.n);
sv.k=1;sv.kt=1;
for(i=1;i<=sv.n;i++)
{
	for(j=2;j<=(i-1);j++)
{
	if(i%j==0)
	{
		sv.kt=0;
		break;
	}
	else
	sv.kt = 1;
}
	if(sv.kt)
	{
		sv.a[sv.k]=i;
     	sv.k=sv.k+1;
	}
}
printf("cac so nguyen to nho hon %d la : \n",sv.n);
	for(j=1;j<=(sv.k-1);j++)
	{
		printf("%d\t",sv.a[j]);
	}
	getch();

}
