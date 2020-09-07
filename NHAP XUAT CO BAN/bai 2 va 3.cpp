#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct{
int c,d;
int a,b,k;}sv;
printf("so thu 1 : ");scanf("%d",&sv.a);
printf("so thu 2 : ");scanf("%d",&sv.b);
printf("tich 2 so do la %d\n",sv.a*sv.b);
int c,d;
do
 {
	printf("so nguyen duong thu 1 : ");scanf("%d",&sv.c);
 	printf("so nguyen duong thu 2 : ");scanf("%d",&sv.d);
 }
 while(sv.a<0||sv.b<0);
 sv.k=int(sv.c/sv.d);
 printf("phan nguyen cua phep chia la : %d",sv.k);
 printf("\nphan du cua phep chia la %d",sv.c-(sv.k*sv.d));
 getch();
 return 0;
}
