#include<stdio.h>
int main() // why int?
{
int a, b;
scanf("%d %d", &a, &b);
double c = (a+b)/2.0;
printf("%lf", c);
return 0;
}