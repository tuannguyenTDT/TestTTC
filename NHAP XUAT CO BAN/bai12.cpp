#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int x,s,p,o;}sv;
printf("nhap x :");scanf("%d",&sv.x);
sv.p=6;sv.o=2*3*4*5;
sv.s=sv.x-(float(pow(sv.x,3)))/float(sv.p)+(float(pow(sv.x,5))/float(sv.o));
printf("S = %d",sv.s);
getch();
return 0;
}
