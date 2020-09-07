#include<stdio.h>
#include<conio.h>
#include<string.h>
int ktcs(char s[],int &n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(s[i]<49||s[i]>57)
		return 0;		
	}
	return 1;
}

int sotu(char s[],int &n)
{
	int i,st=0;
	for(i=0;i<=n-1;i++)
	{
		if(s[i]==32)
		st+=0;
		else
		st+=1;
	}
	return st;
}

void bentrai(char s[],int n,int x)
{
	int i;
	for(i=0;i<=(x-1);i++)
	{
		if(s[i]==32)
	{
			printf("%c",s[i+1]);
			i+=1;
			x+=1;
	}
		else
		printf("%c",s[i]);
	}
}

void benphai(char s[],int n,int x)
{
	int i,j=0;
	for(i=n-1;i>=0;i--)
{
		if(s[i]==32)
	{
			printf("%c",s[i-1]);
			i-=1;
			j+=1;
	}
		else
	{
		printf("%c",s[i]);
		j+=1;
	}
	if(j==x) 
	break;
}
}

void vtm(char s[],int x,int m)
{int i,j=0;
		for(i=m-1;;i++)
	{
		if(s[i]==32)
	{
			printf("%c",s[i+1]);
			j+=1;
			i+=1;
	}
		else
		{
		j+=1;
		printf("%c",s[i]);
		}
		if(j==x)
		break;
	}

}

int main()
{	int n,x,m;
	char s[50];
		printf("nhap chuoi can kiem tra : ");
		fflush(stdin);gets(s);
		n=strlen(s);
	if(ktcs(s,n))
		printf("chuoi so");
	else
		printf("khong phai chuoi so");
		printf("\nchuoi co %d tu",sotu(s,n));
		printf("\nnhap n ki tu ben phai chuoi S muon lay : ");scanf("%d",&x);
		printf("%d ki tu ben trai cua chuoi S la : ",x);bentrai(s,n,x);
		printf("\n%d ki tu ben phai cua chuoi S la : ",x);benphai(s,n,x);
		printf("\nnhap vi tri muon bat dau : ");scanf("%d",&m);
		printf("%d ki tu bat dau tu vi tri %d la : ",x,m);vtm(s,x,m);		
getch();
}
