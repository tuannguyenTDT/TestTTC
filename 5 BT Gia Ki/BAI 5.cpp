#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
struct sach {
		char ts[100];
		char tg[100];
		int nxb;
	};


void nhap(sach s[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\nten sach : ");fflush(stdin);gets(s[i].ts);
		printf("tac gia : ");fflush(stdin);gets(s[i].tg);
		printf("nam xuat ban : ");scanf("%d",&s[i].nxb);
	}
}

void in(sach s[],int n)
{printf("\ndanh sach sach : \n");
		int i;
	for(i=1;i<=n;i++)
	{
		printf("\nten sach : %s",s[i].ts);
		printf("\ntac gia : %s",s[i].tg);
		printf("\nnam xuat ban : %d\n",s[i].nxb);
	}
}

int chon()
{int s;
printf ("\nVui long chon 1 trong 5 muc sau:\n");
	printf ("1.Nhap du lieu ");
	printf ("\n2.In du lieu");
	printf ("\n3.Diem theo tac gia");
	printf ("\n4.Thong ke theo nam xuat ban");
	printf ("\n5.Thoat");
	printf ("\nChon: ");
	scanf("%d",&s);
	return s;
}

int yesno()
{
	int yn;
	printf("\n\nban co muon thuc hien tiep chuong trinh khog?");
	printf("\n1. yes");
	printf("\n2. no\n");
	scanf("%d",&yn);
	return yn;
}

int demsach(sach s[],char tgx[],int n)
{int i,sl=0;
	for(i=1;i<=n;i++)
	{
		if(strcmp(tgx,s[i].tg)==0)
		sl+=1;
	}
	return sl;
}

void thongke(sach s[],int n)
{int i,j;
int xxx;
int d[n];
for(i=1;i<=n;i++) d[i]=0;
for(i=1;i<=n;i++)
{
	xxx=0;
	for(j=(i+1);j<=n;j++)
	{
		if(s[i].nxb==s[j].nxb)
		{
			xxx+=1;
			d[j]=1;
		}
	}
	if(d[i]==0)
printf("nam %d co : %d cuon = \n",s[i].nxb,xxx+1);
}
}




int main()
{sach *s;
char tgx[50];
	int t,n,x;
		x=0;
	do	
	{
		x=chon();
	if(x==5)
	{
		goto close;
	}
	if(x!=1)
	{
		printf ("\nBan phai nhap du lieu truoc");
		printf ("\nVui Long Chon Lai:\n");	
	}
		system("pause");
		system("cls");
	if(x==1)
	{	
		printf("nhap so sach : ");scanf("%d",&n);
	s=new sach[n+1];
		nhap(s,n);
		system("cls");
	}
}
	while(x!=1);
luachon:
{
	t=yesno();
if(t==2) goto close;
if(t!=2)
{system("cls");
	x=chon();
	if(x==2) goto mn2;
	if(x==3) goto mn3;
	if(x==5) goto close;
	if(x==4) goto mn4;
}
}
mn4:
	{
		system("cls");
		thongke(s,n);
		goto luachon;
	}
mn2:
	{
		system("cls");
		in(s,n);
	goto luachon;	
	}
mn3:
	{
			system("cls");
			printf("nhap tac gia : ");fflush(stdin);gets(tgx);
			printf("tac gia %s co : %d cuon sach ",tgx,demsach(s,tgx,n));
		goto luachon;
	}
close:
	getch;
	return 0;
}

