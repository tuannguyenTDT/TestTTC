#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{struct{float a,b,c;}sv;
printf("so nguyen thu nhat :  ");scanf("%f",&sv.a);
printf("so nguyen thu hai :  ");scanf("%f",&sv.b);
printf("so nguyen thu ba :  ");scanf("%f",&sv.c);
if(sv.a+sv.b>sv.c||sv.a+sv.c>sv.b||sv.b+sv.c>sv.a)
{
	if(sv.a==sv.b||sv.b==sv.c||sv.c==sv.a)
	{
		{
			if((sv.a*sv.a+sv.b*sv.b-sv.c*sv.c==0)||(sv.a*sv.a+sv.c*sv.c*-sv.b*sv.b==0)||(sv.c*sv.c+sv.b*sv.b-sv.a*sv.a==0))
			{
				printf("tam giac vuong can");
			}
		}
		{
			if(sv.b==sv.c==sv.a)
			printf("tam giac deu");
			else
			printf("tam giac can");
		}	
	}
	if((sv.a*sv.a+sv.b*sv.b-sv.c*sv.c==0)||(sv.a*sv.a+sv.c*sv.c*-sv.b*sv.b==0)||(sv.c*sv.c+sv.b*sv.b-sv.a*sv.a==0))
	{
		printf("tam giac vuong ");
	}
	if((sv.a*sv.a+sv.b*sv.b-sv.c*sv.c!=0)&&(sv.a*sv.a+sv.c*sv.c*-sv.b*sv.b!=0)&&(sv.c*sv.c+sv.b*sv.b-sv.a*sv.a!=0)&&sv.a!=sv.b&&sv.b!=sv.c&&sv.c!=sv.a)
	{
		printf("tam giac thuong");
	}
}
else
printf("khong tao thanh tam giac");
getch();
}
