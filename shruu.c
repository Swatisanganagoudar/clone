#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
switch(n)
{
case 1:
    printf("square",n);
    break;
case 2:
    printf("rectangle",n);
    break;
case 3:
    printf("triangle",n);
    break;
case 4:
    printf("circle",n);
    break;
default:
    printf("invalid number");
    break;
}
}
