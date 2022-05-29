/*2. Any integer is input through the keyboard. Write a program to find out whether itis an odd 
number or even number.*/
#include<stdio.h>
int main()
{
int number;
printf("Enter any intrger value : ");
scanf("%d",&number)	;


if(number%2==0)
{
	printf("even number");
	
	}	
	else{
		printf("odd number");
	}
	
	return 0;
}

