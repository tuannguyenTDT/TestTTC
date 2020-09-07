#include<stdio.h>
#include<windows.h>
#include<conio.h>

void nhap(float *&a,int &n)
{int i;
printf("n = ");scanf("%d",&n);
a=new float[n+1];
for(i=1;i<=n;i++)
{
	printf("a[%d] = ",i);scanf("%f",&a[i]);
}
}

void in(float *&a,int &n)
{int i;
printf("day so vua nhap la : \n");
for(i=1;i<=n;i++)
{
	printf("%0.1f\t",a[i]);
}
}

int menu()
{int x;
printf("1. nhap day\n");
printf("2. xuat day\n");
printf("3. tim max duong\n");
printf("4. kiem tra tinh fibonaci\n");
printf("5. thoat\n");
scanf("%d",&x);
return x;	
}

int yesno()
{int t;
	printf("\nban co muon tiep tuc \n");
	printf("1. yes\n");
	printf("2. no\n");
	scanf("%d",&t);
	return t;
}

int maxduong(float *&a,int &n)
{int i,m=0;
for(i=1;i<=n;i++)
{
	if(a[i]>=m&&a[i>0]) m=a[i];
}
return m<0?0:m;
}

int fibo(float *&a,int &n)
{int i;
if(a[1]!=0&&a[2]!=1) return 0;
for(i=1;i<=n-2;i++)
{
	if((a[i]+a[i+1])!=(a[i+2]))
	return 0;
}
return 1;
}

int main()
{
float *a;
int n,x,t,m;
do
{
	x=menu();
	if(x==5) goto close;
	if(x==1)
	{
		nhap(a,n);
	}
	if(x!=1)
	{	printf("vui long nhap du lieu\n");
		system("pause");
		system("cls");
	}
}
while(x!=1);
goto luachon;
luachon:
{	t=yesno();
	if(t==2)
	goto close;
	system("cls");
	x=menu();
	if(x==2) goto lc2;
	if(x==3) goto lc3;
	if(x==4) goto lc4;
	if(x==5) goto close;
}
lc3:
{
	system("cls");
	m=maxduong(a,n);
	if(m!=0){
	printf("max duong cua day so = %d",maxduong(a,n));
	goto luachon;}
	else
	{
		printf("ham khong co so duong\n");
		goto luachon;
	}
}

lc2:
{
	system("cls");
	in(a,n);
	goto luachon;
}

lc4:
{
	system("cls");
	if(fibo(a,n)){
	printf("day so la day fibonaci\n");
	goto luachon;
}
else
{
	printf("day khong phai la day fibonaci\n");
	goto luachon;
}
}
close:
delete(a);
}
