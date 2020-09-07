#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {int a,b,c,d;}sv;
printf("so giay = ");scanf("%d",&sv.a);
sv.b=(float(sv.a)/3600);
sv.c=(float(sv.a-3600*sv.b)/60);
sv.d=sv.a-sv.b*3600-sv.c*60;
printf("%d gio %d phut %d giay",sv.b,sv.c,sv.d);
getch();
return 0;
}
