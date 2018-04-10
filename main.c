#include<stdio.h>
int even(int n);
int prime(int n);
void factor(int n);
void main()
{
int n,x,b,i,*p;
printf("enter the number ");
scanf("%d",&n);
x=even(n);
if(x==0)
b=prime(n);
if(b==0);
factor(n);
for(i=0;i<=n;i++)
printf("%d",*p+1);
}
