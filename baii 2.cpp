#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {float thu,chi;}a[100];
float du,tt,tc;
int i,n;
printf("so ngay : ");scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("thu ngay thu %d : ",i);
	scanf("%f",&a[i].thu);
	printf("chi ngay thu %d : ",i);
	scanf("%f",&a[i].chi);
}
for(i=1;i<=n;i++)
{
	tt=tt+a[i].thu;
	tc=tc+a[i].chi;
}
du = tt-tc;
printf("du duoc : %0.1f",du);
getch();
return 0;
}
