#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a;}sv;
int i;
printf("nhap n so chinh phuong muon lay : ");scanf("%d",&sv.n);
printf("danh sach %d so chinh phuong dau tien la : \n",sv.n);
for(i=1;i<=sv.n;i++)
{sv.a=pow(i,2);
	printf("%d\t",sv.a);
}
getch();
}

