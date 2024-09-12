#include<stdio.h>

void main ()
{
	char grade;
	int mark;
	
	printf("enter your marks:");
	scanf("%d",&mark);
	
	grade=(mark>=90 && mark<=100)?'A'
	:(mark>=80 && mark<90)?'B'
	:(mark>=70 && mark<80)?'c'
	:(mark>=60 && mark<70)?'D'
	:(mark>=40 && mark<60)?'E'
	:'F';
	
	printf(" your grade is %c ",grade);
	switch (grade)
	{
		case'A' : printf("excelent work ");
		break;
		case'B' : printf("well done ");
		break;
		case'C' : printf("good job ");
		break;
		case'D' : printf("nice ");
		break;
		case'E' : printf("pass you can do better ");
		break;
		case'F' : printf("fail ");
		break;
			
	}  
	
	if(grade=='A' || grade=='B' || grade=='C'|| grade=='D' || grade=='E')
	{
		printf(" eligible for next");
	}
	else
	{
		printf(" sorry, try again");
	}
}
