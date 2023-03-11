/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

  int no1, no2;              //declare variable
  float average;

  printf("enter the mark of first subject : ");
  scanf("%d\n" ,&no1);

  printf("enter the mark of second subject : ");
  scanf("%d\n" ,&no2);

  avg = (no1 + no2) / 2.0;     //find average

  printf("average = %.2f" , average);   //output average

  return 0;
}

