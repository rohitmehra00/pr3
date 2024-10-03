#include<stdio.h>
void main()
{
     int i,j,k,a,b;	

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}

		for(k=4; k>=i; k--)
		{
			printf("  ");
		}

		for(a=4; a>=i; a--)
		{
			printf("  ");
		}

		for(b=i; b>=1; b--)
		{
			printf("%d ",b);
		}

		printf("\n");
	}
}
