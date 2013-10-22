#include <stdio.h>
int main (int argc, char *argv[])
{	
	printf("\nfor tsükkel:\n\n");        						     
	int i,j;                            
	
	for (i = 0; i <= 5; i++)             
	
		for (j = 0; j <= 9; j++)    
		printf("%.2d ", i*10+j);    
		printf("\n");               
	}	
	printf("\n");                       
}
