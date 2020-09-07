#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x1,x2;
	float delta;
	printf("a = ");scanf("%f",&a);
	printf("b = ");scanf("%f",&b);
	printf("c = ");scanf("%f",&c);
	printf("%0.2fx^2 + %0.2fx + %0.2f = 0",a,b,c);
	delta = b*b - a*4*c;
	if(delta < 0) printf("\npt vo nghiem ");
	if(delta == 0)
	{
		x1 = (-b)/(2*a);
		printf("\nx1 = x2 = %0.2f",x1);
	}
	if(delta > 0)
	{
		x1 = ((-b) - sqrt(delta))/((2*a));
		x2 = ((-b) + sqrt(delta))/(2*a);
		printf("\nx1 = %0.2f",x1);
		printf("\nx2 = %0.2f",x2);
	}
	return 0;
}
