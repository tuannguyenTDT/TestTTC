#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
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

int tongcot(int **&a,int &m,int &n)
{int i,s=0;
for(i=1;i<=m;i++)
{
	s=s+a[i][n];
}
	return s;
}

float tbc(int **&a,int &m,int &n)
{
	int i,j,bd=0,s=0;
	float tbc;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]<(m*n)&&a[i][j]%2==0)
			{
				s=s+a[i][j];
				bd=bd+1;
			}	
		}
		tbc=((float(s))/(float(bd)));
	return tbc;
}


void xuat(int **&a,int &m,int &n,char o[])
{
	int i,j,d;
	FILE *f;
	f=fopen(o,"w");
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++)
		{
			fprintf(f,"%d\t",a[i][j]);
		}
		fprintf(f,"\n");}
for(i=1;i<=n;i++)
	{
		fprintf(f,"tong cua cot thu %d = %d\n",i,tongcot(a,m,i));
if(tongcot(a,m,i)%2==0)
d+=1;
if(i==n)
fprintf(f,"co %d tong cot la so chan\n",d);
}
fprintf(f,"trung binh cong cua cac phan tu chan < %d la : %0.1f",m*n,tbc(a,m,n));
		fclose(f);
}


int main()
{
	int **a;
	int i,j,n,m,d;
	char x[50];
	char s[50],o[50];
	printf("nhap ten file in (input.txt) : ");fflush(stdin);gets(s);
nhap(a,m,n,s,x);
for(i=1;i<=m;i++){
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");}	
d=0;
for(i=1;i<=n;i++)
	{
		printf("tong cua cot thu %d = %d\n",i,tongcot(a,m,i));
if(tongcot(a,m,i)%2==0)
d+=1;
if(i==n)
printf("co %d tong cot la so chan\n",d);
}
printf("trung binh cong cua cac phan tu chan < %d la : %0.1f",m*n,tbc(a,m,n));
printf("\nnhap ten file out : ");fflush(stdin);gets(o);
xuat(a,m,n,o);
delete(a);
getch();
}

