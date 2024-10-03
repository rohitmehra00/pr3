#include<stdio.h>
void main()
{
	int i,j,a,b,c,d;

	for(i=1; i<=5; i+=3)
	{
		for(j=5; j>=1; j--)
		{
			printf("* ");
		}
		printf("\n");
		for(b=i; b==1; b++)
		{
			printf("*       *");
			printf("\n");
		}




	}

	for(c=1; c<=2; c++)
	{
		for(d=1; d==1; d++)
		{
			printf("* ");
		}
		printf("\n");
	 }



}
