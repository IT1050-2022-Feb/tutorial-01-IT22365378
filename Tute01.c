/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

  int no1, no2;              //declare variable
  float average;

  printf("enter the mark of first subject : ");
  scanf("%d" ,&no1);

  printf("enter the mark of second subject : ");
  scanf("%d" ,&no2);

  average = (no1 + no2) / 2.0;     //find average

  printf("average = %.2f" , average);   //output average

  return 0;
}

