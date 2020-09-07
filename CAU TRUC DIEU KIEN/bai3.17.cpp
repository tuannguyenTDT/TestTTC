#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{struct {int n,a;}sv;
printf("nhap so can kiem tra : ");scanf("%d",&sv.n);
sv.a=sqrt(sv.n);
if((sv.n-pow(sv.a,2))==0)
printf("so chinh phuong");
else
printf("khong phai so chinh phuong");
getch();
}
