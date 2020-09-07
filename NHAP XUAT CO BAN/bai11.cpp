#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int n;
float p;}sv;
printf("so nguyen n =");scanf("%d",&sv.n);
sv.p=(float(1)/float(((sv.n-2)*(sv.n-1)*sv.n)));
printf("P = %0.2f",sv.p);
getch();
return 0;
}
