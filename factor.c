int factor(int n)
{
int i,j=0,a[n];
int *p;
p=(int *)calloc(n,sizeof(int));
for(i=1;i<=n;i++)
{
if(n%i==0)
{
(*p+i-1);=i;
j++;
}
}
}
