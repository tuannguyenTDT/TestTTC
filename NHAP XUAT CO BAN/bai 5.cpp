#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {float d,a,b,c;}sv;
sv.c=5;
sv.d=9;
printf(" nhap vao do F = ");scanf("%f",&sv.a);
sv.b=float((sv.c/sv.d)*(sv.a-32));
printf("do C = %0.2f",sv.b);
getch();
return 0;
}
