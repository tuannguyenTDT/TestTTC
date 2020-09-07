#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {int a,b;}sv;
printf("so nguyen thu nhat la : ");scanf("%d",&sv.a);
printf("so nguyen thu 2 la : ");scanf("%d",&sv.b);
if(sv.a>sv.b)
printf(" so lon nhat la : %d",sv.a);
if(sv.a<sv.b)
printf(" so lon nhat la : %d",sv.b);
if(sv.a==sv.b)
printf("hai so vua nhap bang nhau ");
getch();
return 0;
}
