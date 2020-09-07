#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {int a[3],max;}sv;
printf("so nguyen thu nhat : ");scanf("%d",&sv.a[1]);
printf("so nguyen thu hai : ");scanf("%d",&sv.a[2]);
printf("so nguyen thu ba : ");scanf("%d",&sv.a[3]);
sv.max=-9999;
for(int i=1;i<=3;i++)
{
	if(sv.a[i]>sv.max)
	sv.max=sv.a[i];
}
printf("gtln cua 3 so tren la : %d",sv.max);
getch();
return 0;
}
