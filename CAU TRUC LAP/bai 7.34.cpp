#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a[7],k,b[10],x,z;}sv;
int i;
sv.k=1;
printf("so chu so cua so can nhap = ");scanf("%d",&sv.x);
do 
{
	printf("nhap so n can kiem tra : ");scanf("%d",&sv.n);
}
while(sv.n<0||sv.n>=99999);
sv.b[1]=sv.n;
for(i=1;i<=sv.x;i++)
{
	sv.a[sv.k]=sv.b[sv.k]%10;
	sv.b[i+1]=sv.b[sv.k]/10;
	sv.k=sv.k+1;
}
sv.z=0;
for(i=1;i<=(sv.k-1);i++)
{
	if(sv.a[i]==1||sv.a[i]==4||sv.a[i]==9)
	sv.z=sv.z+1;
}
printf("vay co tat ca %d chu so la so nguyen to",sv.z);
getch();
}
