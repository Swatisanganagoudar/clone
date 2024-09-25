#include<stdio.h>
int main()
{
float side1,side2,side3;
printf("Enter the length of the sides of the triangle: ");
scanf("%f%f%f",&side1,&side2,&side3);
if((side1==side3)&&(side1==side2)&&(side2==side3))
{
printf("The triangle is equilateral");
}
else if(side1==side2||side2==side3||side1==side3)
{
printf("The triangle is isosceles");
}
else
printf("valid triangle");
return 0;
}
