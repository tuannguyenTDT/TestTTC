#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void nhap(int *x,int m)
{int i;
	for(i=0;i<=m;i++)
	{
		printf("hs[%d] = ",i);scanf("%d",(x+i));
	}
}

void indt(int *a,int m)
{int i;
	for(i=0;i<=m;i++)
	{
		if(i==0)
		{
			printf(" %d ",*(a+i));
		}
		if(*a>0&&i!=0)
		{
			printf(" + %d*x^%d ",*(a+i),i);
		}
		if(*a<0&&i!=0)
		{
			printf(" - %d*x^%d ",*(a+i),i);
		}
	}
}
	
int tinhdt(int *a,int m,int d)
{int i,s=0;
for(i=0;i<=m;i++)
	{
		s=s+(*(a+i))*pow(d,i);
	}
	return s;
}	
	
int main()
{int m,d,s,n,v;
printf("nhap bac cua da thuc : ");scanf("%d",&m);
int *a,*b;
a=(int *)malloc(m*sizeof(int *));
b=(int *)malloc(m*sizeof(int *));
nhap(a,m);
indt(a,m);
printf("\nnhap d = ");scanf("%d",&d);
s=tinhdt(a,m,d);
printf("tong da thuc :\n");
indt(a,m);
printf(" = %d\n",s);
printf("\nnhap da thuc thu 2 :\n");
printf("nhap bac cua da thuc 2 : ");scanf("%d",&n);
nhap(b,n);
indt(b,n);
printf("\nnhap d2 = ");scanf("%d",&d);
v=tinhdt(b,n,d);
printf("tong da thuc 2 :\n");
indt(b,n);
printf(" = %d\n",v);
printf("\ntong 2 da thuc : P(x) + Q(x) = %d ",s+v);
free(b);
free(a);
getch();
return 0;
}	

