#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int x,y,a,b;
float s;}sv;
printf("x1 = ");scanf("%d",&sv.x);
printf("y1 = ");scanf("%d",&sv.y);
printf("x2 = ");scanf("%d",&sv.a);
printf("y2 = ");scanf("%d",&sv.b);
sv.s = float(sqrt(pow(sv.x-sv.a,2)+pow(sv.y-sv.b,2)));
printf("S = %0.3f",sv.s);
getch();
return 0;
}
