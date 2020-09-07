#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{struct {int a,b;}sv;
printf("so nguyen thu nhat (a) la : ");scanf("%d",&sv.a);
printf("so nguyen thu hai la (b) : ");scanf("%d",&sv.b);
if(sv.a%2==0)
printf("a la so chan\n");
else
printf("a la so le\n");
{
	if(sv.a%sv.b==0)
	printf("a chie het cho b");
	else
	printf("a khong chia het cho b");
}
getch();
return 0;
}
