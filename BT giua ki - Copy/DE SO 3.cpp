#include<stdio.h>
#include<conio.h>
#include<string.h>
void nhap(int **&a,int &m,int &n,char s[],char x[])
{	int i,j;
	FILE *f=fopen(s,"r");
	m=0;
while(!feof(f))
{
	fgets(x,30,f);
	m++;
}
if(x[strlen(x)]=='\0')
{
n=strlen(x)/2;
m--;
}
else
{
n=strlen(x);
n=(n+1)/2;
}
a=new int*[m+1];
for(i=1;i<=n;i++)
a[i]=new int[n+1];
rewind(f);
for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	{
		fscanf(f,"%d",&a[i][j]);
	}
	
	fclose(f);
}	

int max(int **&a,int &m,int &n)
{int ma,i,j;
ma=a[1][1];
for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	{
		if(a[i][j]>=ma)
		{
			ma=a[i][j];
		}
	}
	return ma;
}

int cot(int **&a,int &m,int &n,int c)
{int j,d=0;
		for(j=1;j<=m;j++)
		{
			if(c==a[j][n])		
		d=1;
		}
		return d;
}

void xuat(int **&a,int &m,int &n,char o[])
{
	int k,c,i,j,d;
FILE *f;
f=fopen(o,"w");
for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			fprintf(f,"%d\t",a[i][j]);
		}
		fprintf(f,"\n");
	}
fprintf(f,"gia tri lon nhat cua ma tran la : %d",max(a,m,n));
c=max(a,m,n);
k=0;
fprintf(f,"\ncac cot chua gia tri do la cot thu : ");
for(i=1;i<=n;i++)
{if(cot(a,m,i,c))
	{
	fprintf(f,"%d ",i);
	k+=1;
	}
	if(i==n)
	{
		fprintf(f,"\nco %d cot nhu vay ",k);
	}
}
fclose(f);
}
int main()
{
	int **a;
	int i,j,n,m,c,k;
	char s[50],x[50],o[50];
	printf("nhap ten file in (input.txt) : ");fflush(stdin);gets(s);
nhap(a,m,n,s,x);
for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
printf("gia tri lon nhat cua ma tran la : %d",max(a,m,n));
c=max(a,m,n);
k=0;
printf("\ncac cot chua gia tri do la cot thu : ");
for(i=1;i<=n;i++)
{if(cot(a,m,i,c))
	{
	printf("%d ",i);
	k+=1;
	}
	if(i==n)
	{
		printf("\nco %d cot nhu vay ",k);
	}
}
printf("\nnhap ten file out : ");fflush(stdin);gets(o);
xuat(a,m,n,o);
delete(a);
getch();
}
