// find the leap year
#include<stdio.h>
main()
{
	int year ;
	printf("enter the year \n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	
	printf("leap year");
	
	else
	printf(" not a leap year ");
	return(0);
}

/*
&& &&
&& ||
|| &&
|| ||
*/
