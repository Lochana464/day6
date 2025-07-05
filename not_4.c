#include<stdio.h>
int main()
{
int a;
int b;
int c;
int stmt=!((a*b)==c);
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
printf("stmt is%d\n",!(a*b)==c);
return 0;
}