#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a[7],k,b[10],x,z;}sv;
sv.k=1;
int i;
printf("so chu so cua so can nhap = ");scanf("%d",&sv.x);
do 
{
	printf("nhap so n can kiem tra (9<n<99999) : ");scanf("%d",&sv.n);
}
while(sv.n<10||sv.n>=99999);
sv.b[1]=sv.n;
for(i=1;i<=sv.x;i++)
{
	sv.a[sv.k]=sv.b[sv.k]%10;
	sv.b[i+1]=sv.b[sv.k]/10;
	sv.k=sv.k+1;
}
for(i=1;i<=(sv.k-2);i++)
{
	if(sv.a[i]%2==0&&sv.a[i+1]%2!=0)
	{
	sv.z=0;
	break;
	}
	if(sv.a[i]%2==0&&sv.a[i+1]%2==0)
	sv.z=1;
}
for(i=1;i<=(sv.k-2);i++)
{
	if(sv.a[i]%2==0&&sv.a[i+1]%2!=0)
	{
	sv.z=0;
	break;}
	if(sv.a[i]%2!=0&&sv.a[i+1]%2!=0)
	sv.z=2;
}
if(sv.z==0)
printf("cac chu so cua n khong toan le cung khong toan chan");
if(sv.z==1)
printf("cac chu so cua n toan chan");
if(sv.z==2)
printf("cac chu so cua n toan le ");
getch();
}

