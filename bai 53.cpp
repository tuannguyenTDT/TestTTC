#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{int max,n,i,j,k,b;
printf("so hoc sinh la : ");scanf("%d",&n);
struct 
{
	int masv,ns;
	char ten[100];
	float dt,dl,dh,dtb;
}sv[100];
for(i=1;i<=n;i++)
{
	printf("ma sinh vien : ");scanf("%d",&sv[i].masv);
	printf("hoa va ten : ");fflush(stdin);gets(sv[i].ten);
	printf("nam sinh : ");scanf("%d",&sv[i].ns);
	printf("diem toan : ");scanf("%f",&sv[i].dt);
	printf("diem li : ");scanf("%f",&sv[i].dl);
	printf("diem hoa : ");scanf("%f",&sv[i].dh);
	printf("diem trung binh : ");scanf("%f",&sv[i].dtb);
}
printf("\ndanh sach lop : \n");
for(i=1;i<=n;i++)
{
	printf(" ma sinh vien : %d\n",sv[i].masv);
	printf("ho va ten : %s\n",sv[i].ten);
	printf("nam sinh : %d\n",sv[i].ns);
	printf("diem toan : %0.2f\n",sv[i].dt);
	printf("diem li : %0.2f\n",sv[i].dl);
	printf("diem hoa : %0.2f\n",sv[i].dh);
	printf("diem trung binh : %0.2f\n",sv[i].dtb);
}
for(i=1;i<=(n-1);i++)
	for(j=i+1;j<=n;j++)
{
	if(sv[i].dtb>sv[j].dtb)
	{
		sv[0]=sv[i];
		sv[i]=sv[j];
		sv[j]=sv[0]; 	
	}
}
printf("\nsinh vien co diem trung binh cao nhat la : \n");
	printf(" ma sinh vien : %d\n",sv[n].masv);
	printf("ho va ten : %s\n",sv[n].ten);
	printf("nam sinh : %d\n",sv[n].ns);
	printf("diem toan : %0.2f\n",sv[n].dt);
	printf("diem li : %0.2f\n",sv[n].dl);
	printf("diem hoa : %0.2f\n",sv[n].dh);
	printf("diem trung binh : %0.2f\n",sv[n].dtb);
printf("\n danh sach lop theo thu tu tang dan cua diem trung binh \n");
for(i=1;i<=n;i++)
{
	printf(" ma sinh vien : %d\n",sv[i].masv);
	printf("ho va ten : %s\n",sv[i].ten);
	printf("nam sinh : %d\n",sv[i].ns);
	printf("diem toan : %0.2f\n",sv[i].dt);
	printf("diem li : %0.2f\n",sv[i].dl);
	printf("diem hoa : %0.2f\n",sv[i].dh);
	printf("diem trung binh : %0.2f\n",sv[i].dtb);
}
for(i=1;i<=n;i++)
{
	if(sv[i].dtb>5&&sv[i].dt>3&&sv[i].dl>3&&sv[i].dh>3)
	{	printf("\nsinh vien co diem trung binh tren 5 va khong co mon nao duoi 3 la : \n");
		printf(" ma sinh vien : %d\n",sv[i].masv);
		printf("ho va ten : %s\n",sv[i].ten);
		printf("nam sinh : %d\n",sv[i].ns);
		printf("diem toan : %0.2f\n",sv[i].dt);
		printf("diem li : %0.2f\n",sv[i].dl);
		printf("diem hoa : %0.2f\n",sv[i].dh);
		printf("diem trung binh : %0.2f\n",sv[i].dtb);
	}
}
max=(2018-sv[1].ns);
for(i=1;i<=n;i++)
{
	if((2018-sv[i].ns)>max)
	{
		max=(2018-sv[i].ns);
		k=i;
	}
}
printf("\nsinh vien co tuoi cao nhat la : \n");
	printf(" ma sinh vien : %d\n",sv[k].masv);
	printf("ho va ten : %s\n",sv[k].ten);
	printf("nam sinh : %d\n",sv[k].ns);
	printf("diem toan : %0.2f\n",sv[k].dt);
	printf("diem li : %0.2f\n",sv[k].dl);
	printf("diem hoa : %0.2f\n",sv[k].dh);
	printf("diem trung binh : %0.2f\n",sv[k].dtb);
printf("sinh vien can tra la : ");scanf("%d",&b);
for(i=1;i<=n;i++)
{
	if(b=sv[i].masv)
	{
		printf(" ma sinh vien : %d\n",sv[i].masv);
		printf("ho va ten : %s\n",sv[i].ten);
		printf("nam sinh : %d\n",sv[i].ns);
		printf("diem toan : %0.2f\n",sv[i].dt);
		printf("diem li : %0.2f\n",sv[i].dl);
		printf("diem hoa : %0.2f\n",sv[i].dh);
		printf("diem trung binh : %0.2f\n",sv[i].dtb);
	break;
	}
}
getch();
return 0;
}
