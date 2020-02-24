#include<stdio.h>
int main()
{
int a;
printf("Enter your age:");
scanf("%d",&a);
if(a>=13 && a<=18)
{
printf("You either a minor or are a teenager!!! \n");
}
else if(a>18 && a<110)
{
printf("You are an adult!!! \n");
}
}

