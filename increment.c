#include<stdio.h>
int main()
{
int a=10;
printf("The value of a: %d \n",a); //10
printf("The value of a: %d \n",++a); //11
printf("The value of a: %d \n",a++); //11
printf("The value of a: %d \n",a); //12
printf("The value of a: %d \n",a--); //12
printf("The value of a: %d \n",a); //11
printf("The value of a: %d \n",--a); //10
}
