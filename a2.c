#include<stdio.h>
 
int main()
{
 	int i, j, r, c, a[5][5], Sum = 0;
  
 	printf(" Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf(" Please Enter the Matrix Elements \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0;c < j;c++)
    	{
      		scanf("%d", &a[r][c]);
    	}
  	}
   	  
 	for(r = 0; r < i; r++)
  	{
   		Sum = Sum + a[r][i - r  - 1];
  	}
 
 	printf("\n The Sum of Opposite Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
