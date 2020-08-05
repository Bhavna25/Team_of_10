#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,count=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if((i^j)<=n)
				{
					count++;
				}
			}
		}
		printf("%d",count);
	}	

}
