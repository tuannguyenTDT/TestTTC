#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{struct {int a,b;
float k;}sv;
printf("nhap a = ");scanf("%d",&sv.a);
printf("nhap b = ");scanf("%d",&sv.b);
sv.k=(float(sv.a)/float(sv.b));
printf(" %d + %d = %d\n",sv.a,sv.b,sv.a+sv.b);
printf(" %d - %d = %d\n",sv.a,sv.b,sv.a-sv.b);
printf("%d x %d = %d\n",sv.a,sv.b,sv.a*sv.b);
printf("%d : %d = %0.2f \n",sv.a,sv.b,sv.k);
getch();
return 0;
}
