#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {int a,b,c,d,p,s,k;}sv;
printf("tu so phan so thu 1 = ");scanf("%d",&sv.a);
printf("mau so phan so thu 1 = ");scanf("%d",&sv.b);
printf("tu so phan so thu 2 = ");scanf("%d",&sv.c);
printf("mau so phan so thu 2 = ");scanf("%d",&sv.d);
sv.p=(sv.a*sv.d+sv.c*sv.b);
sv.s=(sv.a*sv.d-sv.c*sv.b);
sv.k=sv.b*sv.d;
printf("%d/%d + %d/%d = %d/%d\n",sv.a,sv.b,sv.c,sv.d,sv.p,sv.k);
printf("%d/%d - %d/%d = %d/%d",sv.a,sv.b,sv.c,sv.d,sv.s,sv.k);
getch();
return 0;
}
