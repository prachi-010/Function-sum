#include<stdio.h>
#include<conio.h>

int add(int x,int y);

void main()
{
int a,b,sum;
clrscr();

printf("Enter first number \n");
scanf("%d",&a);
printf("Enter second number \n");
scanf("%d",&b);
sum=add(a,b);

printf("The sum of 2 number is %u\n",sum);
getch();
}

int add(int x,int y)
{
int z;
z=x+y;
return z;
}
