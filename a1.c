#include<stdio.h>
 
int main()
{
 int S, i, a[10];
 
 printf(" Enter the Size of an Array : ");
 scanf("%d", &S);
 
 printf("Enter the Array Elements  :  ");
 for(i = 0; i < S; i++)
 {
      scanf("%d", &a[i]);
 }
 
 printf("List of Negative Numbers in this Array  :  "); 
 for(i = 0; i < S; i ++)
 {
   if(a[i] < 0)
   {
	   	printf("%d  ", a[i]);
   }
 }
 return 0;
}
