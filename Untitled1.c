#include<stdio.h>
void main()
{
int n,i,j;
float x[10],y[10],k,sum=0,q;
printf("enter frequency");
scanf("%d",&n);
printf("enter the values of x and f(x) :");
for(i=0;i<n;i++)
{
 scanf("%f",&x[i]);
}
for(i=0;i<n;i++)
{
 scanf("%f",&y[i]);
}
printf("enter the value to interpolate :");
scanf("%f",&k);
for(i=0;i<n;i++)
{
 q=1;
 for(j=0;j<n;j++)
 {
   if(i!=j)
   q=q*(k-x[j])/(x[i]-x[j]);
 }
 sum=sum+(q*y[i]);
}
printf("values of interpolation at %.3f is %.3f",k,sum);
}
