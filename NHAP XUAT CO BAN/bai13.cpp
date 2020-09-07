#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {int i;
float a,s;}sv;
sv.a=12;
for(sv.i=2;sv.i<=10;sv.i++)
{
	sv.s=sv.s+pow(-1,sv.i)/float(sv.i*sv.i+1*sv.i+2);
}
printf(" ket qua = %f",sv.s);
getch();
return 0;
}
