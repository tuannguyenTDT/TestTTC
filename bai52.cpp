#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string>
int main()
{struct {int k,x,a[100][100],b,t[100],tg;
float tb,sd,s;}sv;
int i,j,n,l,z;
printf("nhap cap ma tran : ");scanf("%d",&n);
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		printf("a[%d][%d] = ",i,j);scanf("%d",&sv.a[i][j]);
	}
printf("\n ma tran vua nhap la : \n");
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{if(j==n)
	{
		printf("%d\n",sv.a[i][j]);
	}
	else
	printf("%d\t",sv.a[i][j]);
	}
sv.k=-999;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
{
	if(j==i)
	{
		if(sv.a[i][j]>sv.k)
		sv.k=sv.a[i][j];
	}
}
printf("\ngia tri lon nhat nam tren duong cheo chinh la : %d\n",sv.k);
printf("\nnhap x : ");scanf("%d",&sv.x);
sv.sd=0;sv.s=0;sv.tb=0;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(sv.a[i][j]<sv.x)
		{
			sv.s=sv.s+sv.a[i][j];
			sv.sd=sv.sd+1;
		}
	}
sv.tb=sv.s/(sv.sd);
if(sv.sd!=0)
printf("\ngia tri trung binh cua cac phan tu nho thua %d = %0.2f\n",sv.x,sv.tb);
else
printf("\nkhong co gi tri nao nho hon %d\n",sv.x);
sv.b=1;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{	
			sv.t[i]=sv.t[i]+sv.a[i][j];
	}
for(i=1;i<=(n-1);i++)
	for(j=i+1;j<=n;j++)
{
	if(sv.t[i]>sv.t[j])
	sv.b=i;
	else
	sv.b=j;
}
printf("\nhang co tong lon nhat la hang thu : %d\n ",sv.b);
sv.tg=0;
printf("\n ma tran sap xep theo thu thu tang gian la : \n");
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{for(l=i;l<=i;l++)
			for(z=j+1;z<=n;z++)
		if(sv.a[i][j]>sv.a[l][z])
	{
		sv.tg=sv.a[i][j];
		sv.a[i][j]=sv.a[l][z];
		sv.a[l][z]=sv.tg;
	}
		for(l=i+1;l<=n;l++)
			for(z=1;z<=n;z++)
	if(sv.a[i][j]>sv.a[l][z])
	{
		sv.tg=sv.a[i][j];
		sv.a[i][j]=sv.a[l][z];
		sv.a[l][z]=sv.tg;
	}
	}
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{if(j==n)
	{
		printf("%d\n",sv.a[i][j]);
	}
	else
	printf("%d\t",sv.a[i][j]);
	}
getch();
}
