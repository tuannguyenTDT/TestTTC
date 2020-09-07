#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {int g,p,gg;}sv;
printf("gio : ");scanf("%d",&sv.g);
printf("phut : ");scanf("%d",&sv.p);
printf("giay : ");scanf("%d",&sv.gg);
printf("tong so giay = %d",(3600*sv.g+60*sv.p+sv.gg));
getch();
return 0;
}
