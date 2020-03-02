#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values for a and b \n");
scanf("%d %d",&a,&b);
printf("Enter 1)Sum 2)Difference \n");
scanf("%d",&c);
switch(c)
{
case 1: 
printf("Sum: %d \n",a+b);
break;
case 2:
printf("Difference: %d \n",a-b);
break;
default:
printf("Invalid option \n");
}
}

