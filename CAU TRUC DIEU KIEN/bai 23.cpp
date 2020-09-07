#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a,b,c,max;}sv;
printf("so co ba chu so la : ");scanf("%d",&sv.n);
sv.a = sv.n%10;
sv.c=sv.n/100;
sv.b= sv.n/10-sv.c*10;
if(sv.a>sv.b&&sv.a>sv.c)
printf("chu so lon nhat nam o hang don vi");
if(sv.b>sv.a&&sv.b>sv.c)
printf("chu so lon nhat nam o hang chuc");
if(sv.c>sv.b&&sv.c>sv.a)
printf("chu so lon nhat nam o hang tram");
getch();
}
