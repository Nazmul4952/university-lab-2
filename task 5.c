/*5. If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to 
determine the youngest of the three**/
#include<stdio.h>
int main()
{
	int arif,fahmid,joy;
	printf( "Enter the age value arif:");
	scanf(" %d",&arif);
	printf("Enter the age value fahmid:");
	scanf("%d",&fahmid);
	printf("enter the age value joy:");
	scanf("%d",&joy);
	
	
	if(arif<fahmid && fahmid<joy)
	{
		printf(" arif is the younger");
		
	}
	else if (joy<fahmid && joy<arif )
	{
		printf(" joy is the younger");
		
	}
	
	else {
		
		printf("fahmid is the younger");
		
	}
	
	
	
	
	return 0;
}
