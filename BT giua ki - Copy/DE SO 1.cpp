#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void docfile(float *&a,float *&b,int &n,int &m,char s[])
{int i;
FILE *f=fopen(s,"r");
fscanf(f,"%d\n",&n);
fscanf(f,"%d\n",&m);
a=new float[n+1];	
b=new float[m+1];
for(i=0;i<=n;i++)
{
	fscanf(f,"%f",&a[i]);
}
for(i=0;i<=m;i++)
{
	fscanf(f,"%f",&b[i]);
}
fclose(f);
}

float p(float *&a,int &n,float &x1)
{int i;
float s=0;
for(i=0;i<=n;i++)
{
	s+=a[i]*pow(x1,i);
}
return s;
}

float q(float *&b,int &m,float &x1)
{int i;
float s=0;
for(i=0;i<=m;i++)
{
	s+=b[i]*pow(x1,i);
}
return s;
}


void dtt(float *&a,float *&b,float *&c,int &n,int &m)
{int i;
	if(m>=n)
{
	c=new float[m+1];
		c[0]=2016+a[0]+b[0];
	for(i=1;i<=n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=(n+1);i<=m;i++)
	{
		c[i]=b[i];
	}
}
	else
{	
	c=new float[n+1];
		c[0]=2016+a[0]+b[0];
	for(i=1;i<=m;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=(m+1);i<=n;i++)
	{
		c[i]=a[i];
	}
}	
}

void xuatfile(float *&a,float *&b,float *c,int &n,int &m,char o[],float &x1)
{int i;
FILE *f1=fopen(o,"w");
{
	if(a[0]>=0)
		fprintf(f1,"%0.0f ",a[0]);
	else
		fprintf(f1,"%0.0f",a[0]);
}
for(i=1;i<=(n-1);i++)
{
	if(a[i]>=0)
		fprintf(f1,"+ %0.0f*%0.0f^%d ",a[i],x1,i);
	else
		fprintf(f1," - %0.0f*%0.0f^%d ",-a[i],x1,i);
}
	if(a[n]>=0)
		fprintf(f1," + %0.0f*%0.0f^%d = %0.0f",a[n],x1,n,p(a,n,x1));	
	else
		fprintf(f1," - %0.0f*%0.0f^%d = %0.0f",-a[n],x1,n,p(a,n,x1));		
		fprintf(f1,"\n");
{
	if(b[0]>=0)
		fprintf(f1,"%0.0f ",b[0]);
	else
		fprintf(f1,"%0.0f",b[0]);
}
	for(i=1;i<=(m-1);i++)
{
	if(b[i]>=0)
		fprintf(f1,"+ %0.0f*%0.0f^%d ",b[i],x1,i);
	else
		fprintf(f1," - %0.0f*%0.0f^%d ",-b[i],x1,i);
}
	if(b[n]>=0)
		fprintf(f1," + %0.0f*%0.0f^%d = %0.0f",b[m],x1,m,q(b,m,x1));	
	else
		fprintf(f1," - %0.0f*%0.0f^%d = %0.0f",-b[m],x1,m,q(b,m,x1));		
		fprintf(f1,"\nS = %0.0f/%0.0f = %0.1f",p(a,n,x1),q(b,m,x1),(p(a,n,x1))/q(b,m,x1));
dtt(a,b,c,n,m);
	fprintf(f1,"\n da thuc tong : \n");
	if(m>=n)
{
	if(c[0]>=0)
		fprintf(f1,"%0.0f ",c[0]);
	else
		fprintf(f1,"%0.0f",c[0]);
	for(i=1;i<=m;i++)
	{
	if(c[i]>=0)
		fprintf(f1,"+ %0.0fx^%d ",c[i],i);
	else
		fprintf(f1," - %0.0fx^%d ",-c[i],i);	
	}
}
else
{
	if(c[0]>=0)
		fprintf(f1,"%0.0f ",c[0]);
	else
		fprintf(f1,"%0.0f",c[0]);
	for(i=1;i<=n;i++)
	{
	if(c[i]>=0)
		fprintf(f1,"+ %0.0fx^%d ",c[i],i);
	else
		fprintf(f1," - %0.0fx^%d ",-c[i],i);	
	}
}
fclose(f1);	
}

int main()
{	float *a,*b,*c;
	char s[30],o[30];
	float x1;
int i,m,n;
		printf("nhap file muon doc (input1.txt) : ");fflush(stdin);gets(s);
		docfile(a,b,n,m,s);
		printf("x1 = ");scanf("%f",&x1);
{
	if(a[0]>=0)
		printf("%0.0f ",a[0]);
	else
		printf("%0.0f",a[0]);
}
for(i=1;i<=(n-1);i++)
{
	if(a[i]>=0)
		printf("+ %0.0f*%0.0f^%d ",a[i],x1,i);
	else
		printf(" - %0.0f*%0.0f^%d ",-a[i],x1,i);
}
	if(a[n]>=0)
		printf(" + %0.0f*%0.0f^%d = %0.0f",a[n],x1,n,p(a,n,x1));	
	else
		printf(" - %0.0f*%0.0f^%d = %0.0f",-a[n],x1,n,p(a,n,x1));		
		printf("\n");
{
	if(b[0]>=0)
		printf("%0.0f ",b[0]);
	else
		printf("%0.0f",b[0]);
}
	for(i=1;i<=(m-1);i++)
{
	if(b[i]>=0)
		printf("+ %0.0f*%0.0f^%d ",b[i],x1,i);
	else
		printf(" - %0.0f*%0.0f^%d ",-b[i],x1,i);
	}
	if(b[n]>=0)
		printf(" + %0.0f*%0.0f^%d = %0.0f",b[m],x1,m,q(b,m,x1));	
	else
		printf(" - %0.0f*%0.0f^%d = %0.0f",-b[m],x1,m,q(b,m,x1));		
	printf("\nS = %0.0f/%0.0f = %0.1f",p(a,n,x1),q(b,m,x1),(p(a,n,x1))/q(b,m,x1));
dtt(a,b,c,n,m);
	printf("\n da thuc tong : \n");
	if(m>=n)
{
	if(c[0]>=0)
		printf("%0.0f ",c[0]);
	else
		printf("%0.0f",c[0]);
	for(i=1;i<=m;i++)
	{
	if(c[i]>=0)
		printf("+ %0.0fx^%d ",c[i],i);
	else
		printf(" - %0.0fx^%d ",-c[i],i);	
	}
}
else
{
	if(c[0]>=0)
		printf("%0.0f ",c[0]);
	else
		printf("%0.0f",c[0]);
	for(i=1;i<=n;i++)
	{
	if(c[i]>=0)
		printf("+ %0.0fx^%d ",c[i],i);
	else
		printf(" - %0.0fx^%d ",-c[i],i);	
}
}
printf("\nnhap ten file muon in : ");fflush(stdin);gets(o);
xuatfile(a,b,c,n,m,o,x1);
	delete(a);
	delete(b);
	delete(c);
	getch();
}

