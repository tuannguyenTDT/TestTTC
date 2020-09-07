#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{struct {float a,z,s,c,t;
int q,w,e;
float r,u,p,i,l;
int x,y,k;}sv;
printf("x = ");scanf("%d",&sv.x);
printf("y = ");scanf("%d",&sv.y);
sv.k=pow(sv.x,sv.y);
sv.a=sqrt(float(sv.x));
printf("x^y = %d\n",sv.k);
printf("can x = %0.2f",sv.a);
printf("\nnhap z =");scanf("%f",&sv.z);
sv.s=sin(sv.z);
sv.c=cos(sv.z);
sv.t=tan(sv.z);
printf("sin(%0.2f) = %0.2f\n",sv.z,sv.s);
printf("cos(%0.2f) = %0.2f\n",sv.z,sv.c);
printf("tan(%0.2f) = %0.2f\n",sv.z,sv.t);
printf("so nguyen thu nhat = ");scanf("%d",&sv.q);
printf("so nguyen thu hai = ");scanf("%d",&sv.w);
printf("so nguyen thu ba = ");scanf("%d",&sv.e);
sv.l=(sv.q*sv.w*sv.e);
sv.i=(float(1)/float(3));
sv.p=float(sv.q+sv.w+sv.e);
sv.r=(float(sv.p)/3);
sv.u=pow(float(sv.l),float(sv.i));
printf("trung binh cong la : %0.2f\n",sv.r);
printf("trung binh nhan la : %0.2f",sv.u);
getch();
return 0;
}
