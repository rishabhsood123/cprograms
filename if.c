#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a and b: \n");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("a is greater than b \n");
}
else if(a==b)
{
printf("a is equal to b \n");
}
else if(a<b)
{
printf("b is greater than a \n");
}
else if(a!=b)
{
printf("a is not equal to b \n");
}
else if(a<=9)
{
printf("a is smaller than equal to 9 \n");
}
else 
printf("doesn't meet any requirement \n");

}
