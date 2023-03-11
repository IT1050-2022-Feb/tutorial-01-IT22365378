/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1, int n2);     //declare minimum funtion
int maximum(int n1, int n2);     //declare maximum funtion
int multiply(int n1, int n2);    //declare multiply funtion

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");       //for input value
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");       //for input value
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));          //calling funtion
   printf("%d ", maximum(no1, no2));          //calling funtion
   printf("%d ", multiply(no1, no2));         //calling funtion
   return 0;
}

int minimum(int n1, int n2)       //impliment the minimum funtion
{

  if(n1 > n2)
  {
    return n2;
  }
  else{
    return n1;
  }
}

int maximum(int n1, int n2)       //impliment the maximum funtion
{
  if(n1 > n2)
  {
    return n1;
  }
  else{
    return n2;
  }
}

int multiply(int n1, int n2)     //impliment the multiply funtion
{
  int answer;
  answer = n1 * n2;

  return answer;
}