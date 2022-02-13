/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float Subject_1,Subject_2;
  printf("Enter your mark 01 = ");
    scanf("%f",&Subject_1);
  printf("Enter your mark 02 = ");
    scanf("%f",&Subject_2);
  float average = (Subject_1+Subject_2)/2.0;
  printf("Your Average mark = %.2f",average);
  
  return 0;
}

