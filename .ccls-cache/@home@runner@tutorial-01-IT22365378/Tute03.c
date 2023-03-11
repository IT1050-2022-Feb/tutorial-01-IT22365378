/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main(void) {
  int no, count, sum = 0 ;     //declare variable
	
	printf("enter the no : ");          //for input value
	scanf("%d" ,&no);
	
	for(count = 1 ; count <= no ; count++)   //counter control repitition
	{
		sum = sum + count;                              
		
		
	}
	
	printf("sum = %d",sum);     //output sum
  
  return 0;
}

