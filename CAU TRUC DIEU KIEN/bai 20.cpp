#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {float a,b,c,d;}sv;
printf("diem toan : ");scanf("%f",&sv.a);
printf("diem li : ");scanf("%f",&sv.b);
printf("diem hoa : ");scanf("%f",&sv.c);
sv.d=sv.a+sv.b+sv.c;
if(sv.d>=15&&sv.a>=4&&sv.b>=4&&sv.c>=4)
{
	printf("DAT");
	{
		if(sv.a>=5&&sv.b>=5&&sv.c>=5)
		printf("\nhoc deu cac mon");
		else
		printf("\nhoc chua deu cac mon");
	}
}
else
printf("THI HONG");
getch();
return 0;
}
