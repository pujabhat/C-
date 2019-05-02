#include<stdio.h>
#include<conio.h>
#define PI 3.1415
float r,a,c;
float area();
float circumference();
int main()
{
printf("Radius=");
scanf("%f",&r);
a=area();
c=circumference();
printf("Area=%f",a);
printf("\nCircumference=%f",c);
getch();
}
float area()
{
return PI*r*r;
}
float circumference()
{
return 2*PI*r;
}

