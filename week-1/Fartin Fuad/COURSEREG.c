int main() 
{
	// your code goes here
	int t, n, m, k;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d%d", &n, &m, &k);
	    if((m-k)>n-1)
	        printf("YES\n");
	   else
	       printf("NO\n");
	}
	return 0;
}
