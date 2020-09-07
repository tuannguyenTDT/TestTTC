#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,kt;}sv;
int i;
sv.kt=1;
printf("nhap so can kiem tra : ");scanf("%d",&sv.n);
for(i=2;i<=(sv.n-1);i++)
{
	if(sv.n%i==0)
	{
	sv.kt=0;
	break;}
}
if(sv.kt)
printf("so %d la so nguyen to",sv.n);
else
printf("so %d khong phai la so nguyen to",sv.n);
getch();
}
