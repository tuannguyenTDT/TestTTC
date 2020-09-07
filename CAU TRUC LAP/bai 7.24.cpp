#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int i,j;
struct { int h;
}sv;
printf("nhap h : ");scanf("%d",&sv.h);
for(i=1;i<=sv.h;i++)
{
			for(j=1;j<=i;j++)
				{if(j!=i)
					printf("*");
				if(j==i)
				printf("*\n");
				}
		
}
getch();
}
