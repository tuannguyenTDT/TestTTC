#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int n,k,kt;}sv;
int i,j;
sv.k=0;
printf("nhap so nguyen to muon in : ");scanf("%d",&sv.n);
printf("danh sach so nguyen to dau tien la : \n");
for(i=1;i<=99999999;i++)
{if(sv.k==sv.n)
break;
sv.kt=1;
for(j=2;j<=(i-1);j++)
{
	if(i%j==0)
	{
	sv.kt=0;
	break;
	}
}
if(sv.kt)
{
	printf("%d\t",i);
	sv.k=sv.k+1;
}
}

getch();
}
