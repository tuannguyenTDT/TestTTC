#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int n;}sv;
printf("MOI BAN CHON HINH CAN TINH \n");
printf("1 Hinh vuong\n");
printf("2 Hinh chu nhat\n");
printf("3 Hinh tron\n");
printf("4 Tam giac\n");
printf("5 Hinh thang\n");
printf("hinh ban muon tinh la : ");scanf("%d",&sv.n);
switch (sv.n)
{
case 1:
	{	
		struct {
		int a;}sv;
		printf("do dai 1 canh = ");scanf("%d",&sv.a);	
		printf("dien tich = %d",sv.a*sv.a);
		break;
	}
case 2:
	{
		struct {
		int a,b;}sv;
		printf("chieu dai = ");scanf("%d",&sv.a);	
		printf("chieu rong = ");scanf("%d",&sv.b);
		printf("dien tich = %d",sv.a*sv.b);
		break;
	}
case 3:
	{struct{
		float a;}sv;
		printf("ban kinh = ");scanf("%f",&sv.a);	
		printf("dien tich = %0.2f",sv.a*(3.14));
		break;
	}
case 4:
	{
	struct	{
		float s,a,b;}sv;
		printf("do dai day = ");scanf("%f",&sv.a);	
		printf("chieu cao = ");scanf("%f",&sv.b);
		sv.s=float(1)/float(2);
		printf("dien tich = %0.2f",sv.a*sv.b*sv.s);
		break;
	}
case 5:
	{
		struct {
		float a,b,h,s;}sv;
		printf("day lon = ");scanf("%f",&sv.a);	
		printf("day be = ");scanf("%f",&sv.b);
		printf("chieu cao =");scanf("%f",&sv.h);
		sv.s=float(1)/float(2);
		printf("dien tich = %0.2f",(sv.a+sv.b)*sv.h*sv.s);
		break;
	}
}
getch();
return 0;
}
