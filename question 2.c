#include<stdio.h>
main()
{
	//11
	//12 13
	//14 15 16
	//17 18 19 20
	
int i,j,x=11;
	for(i=11;i<=14;i++)
	{
		for(j=11;j<=i;j++)
		{
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
	
}
