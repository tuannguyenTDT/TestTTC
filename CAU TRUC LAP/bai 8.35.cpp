#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a[7],k,b[10];}sv;
int i;
sv.k=1;
do 
{
	printf("nhap so co 5 chu so : ");scanf("%d",&sv.n);
}
while(sv.n<=10000||sv.n>=99999);
sv.b[1]=sv.n;
for(i=1;i<=5;i++)
{
	sv.a[sv.k]=sv.b[sv.k]%10;
	//printf("%d\n",a[k]);
	sv.b[i+1]=sv.b[sv.k]/10;
	//printf("%d\n",b[i+1]);
	sv.k=sv.k+1;
}
if(sv.a[1]!=sv.a[5]||sv.a[2]!=sv.a[4])
printf("so nguyen khong doi xung");
else
printf("so nguyen doi xung");
getch;
}
