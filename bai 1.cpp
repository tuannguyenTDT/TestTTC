#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{int n,i;
float td,dtb,ttc;
ttc=0;td=0;
printf("so mon : ");scanf("%d",&n);
struct {char mon[50];	
		float diem;
		int sotc;}sv[100];
for(i=1;i<=n;i++)
{	printf("mon thi thu %d : ",i);
fflush(stdin);gets(sv[i].mon);
	printf("diem mon %s ",sv[i].mon);
	scanf("%f",&sv[i].diem);
	printf("so tin chi mon %s ",sv[i].mon);
	scanf("%f",&sv[i].sotc);
}
for(i=1;i<=n;i++)
{
	ttc=ttc+sv[i].sotc;
	td=td+(sv[i].diem)*(sv[i].sotc);
}
dtb=0;
dtb=((float)(td))/((float)(ttc));
printf("diem trung binh = %0.1f",dtb);
getch();
return 0;
}
