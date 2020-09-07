#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {int n,k,t;}sv;
do
{
	printf("nhap so co 2 chu so : ");scanf("%d",&sv.n);
}
while(sv.n<9);
sv.k=sv.n/10;
sv.t=(sv.n-10*sv.k); 
printf("tong 2 chu so la : %d",sv.k+sv.t);
getch();
return 0;
}
