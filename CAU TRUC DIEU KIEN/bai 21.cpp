#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {int a;}sv;
printf("nhap vao so nam can kiem tra : ");scanf("%d",&sv.a);
if(sv.a%4==0&&sv.a%100!=0)
{
	printf("nam %d la nam nhuan ",sv.a);
}
else
printf(" nam %d khong phai la nam nhuan ",sv.a);
getch();
return 0;
}
