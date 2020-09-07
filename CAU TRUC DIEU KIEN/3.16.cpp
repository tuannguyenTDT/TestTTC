#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {float a,t;}sv;
printf("nhap so km : ");scanf("%f",&sv.a);
if(sv.a<30)
{
	sv.t=(13000+(sv.a-1)*12000);
	printf("tong tien taxi = %0.0f",sv.t);
}
else
{
	sv.t=(13000+(sv.a-1)*11000);
	printf("tong tien taxi = %0.0f",sv.st);
}
getch();
}
