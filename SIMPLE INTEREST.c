
#include <stdio.h>
int main()
{
float  p,t,r,si;
printf("enter the principle amount:");
scanf("%f",&p);
printf("enter the rate of the intrest:");
scanf("%f",&r);
printf("enter the  time(in years):");
scanf("%f",&t);
si=(p*t*r)/100;
printf("simple intrest=%2f\n",si);
return 0;
}

