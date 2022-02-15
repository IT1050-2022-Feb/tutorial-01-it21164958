/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2; //variable declaration part
  float avg;

  printf("Enter your subject 1 marks:"); //get input from user
  scanf("%d",&sub1);

  printf("Enter your subject 2 marks :");
  scanf("%d",&sub2);

  avg-(sub1+sub2)/2.0 //calculation part
  printf("your subject average is %.2f",avg); //print average
  
  return 0;
}

