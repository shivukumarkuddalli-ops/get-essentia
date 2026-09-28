//calculate compound interest
#include<stdio.h>
int main()
{
int c,p,r,t;
printf("enter the principle amount:");
scanf("%d",&p);
printf("enter the rate of interest:");
scanf("%d",&r);
printf("enter the time period:");
scanf("%d",&t);
c=p*(1+r/100)^t;
printf("the compound interest is %d",c);   
return 0; 
}