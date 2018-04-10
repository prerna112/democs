#include<stdio.h>
float f(float x)
{
return(1/(1+(x*x)));
}
void main()
{
int up,n,i,l,temp=l;
float y,a[n+1],h;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the lower limit");
scanf("%d",&l);
printf("enter the uppr limit");
scanf("%d",&up);
h=(up-l)/n;
for(i=0;i<n;i++)
{
a[i]=f(l);
printf("%d %f\n",l,a[i]);
l=l+h;
}
temp=a[temp]+a[up];
float z;
for(i=0;i<n;i++)
z=z+a[i];
y=h/2*(y+2*z);
printf("%f\n",y);

}
