#include<string.h>
#include<conio.h>
#include<stdio.h>
struct SV{
	char ht[50],t[50];
	float sd;
};

void nhapdl(SV sv[],int n)
{int i;
for(i=1;i<=n;i++)
{
	printf("ho ten : ");fflush(stdin);gets(sv[i].ht);
	printf("diem thi : ");scanf("%f",&sv[i].sd);
	printf("truong : ");fflush(stdin);gets(sv[i].t);	
}
}

/*void indl(SV sv[],int n)
{int i;
for(i=1;i<=n;i++)
{
	printf("ho ten : %s\n",sv[i].ht);
	printf("diem thi : %0.1f\n",sv[i].sd);
	printf("truong : %s",sv[i].t);	
}
}*/

void ttd(SV sv[],int n)
{int i,j;
float td;
int d[n];
for(i=1;i<=n;i++) d[i]=0;
for(i=1;i<=n;i++)
{
	td=sv[i].sd;
	for(j=(i+1);j<=n;j++)
	{
		if(strcmp(sv[i].t,sv[j].t)==0&&d[j]==0)
		{
		td+=sv[j].sd;
		d[j]=1;
		}
	}
	if(d[i]==0)
printf("tong diem cua truong %s = %0.1f\n",sv[i].t,td);
}
}

void sx(SV sv[],int n)
{
	int i,j;
	for(i=1;i<=(n-1);i++)
		for(j=(i+1);j<=n;j++)
		{
			if(sv[i].sd<=sv[j].sd)
			{
				sv[0]=sv[i];
				sv[i]=sv[j];
				sv[j]=sv[0];
			}
		}
for(i=1;i<=n;i++)
{
	printf("ho ten : %s\n",sv[i].ht);
	printf("diem thi : %0.1f\n",sv[i].sd);
	printf("truong : %s\n",sv[i].t);	
}
}

int main()
{int n;
printf("nhap so hoc sinh : ");scanf("%d",&n);
SV sv[n+1];
nhapdl(sv,n);
//indl(sv,n);
ttd(sv,n);
sx(sv,n);
getch();
}

