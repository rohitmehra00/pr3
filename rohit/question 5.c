#include<stdio.h>
void main()
{
	int i,j,k,l,m;

	for(i=5; i>=1; i--)
	{
		for(k=i; k>=2; k--)
		{
			printf("  ");
		}


		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}

		for(l=4; l>=i; l--)
		{
		     for(m=4; m>=l; m--)
		     {
		     	printf("%d ",m);

			 }
		}
		printf("\n");



	}
}
