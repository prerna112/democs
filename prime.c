int prime(int n)
{
int i,check;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			check=0;
			break;
		}
	}
	if(check==0)
	return 1;
	else
	return 0;
}
