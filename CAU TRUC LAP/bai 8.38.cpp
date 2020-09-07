#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,kt;}sv;
int i;
printf("nhap so can kiem tra : ");scanf("%d",&sv.n);
for(i=(sv.n-1);i>=-999999999;i--)
{
	if(sv.n%i==0&&i%2!=0)
	{
		printf("uoc le lon nhat = %d",i);
		break;
	}
}
getch();
}
