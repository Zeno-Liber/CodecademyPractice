#include <stdio.h>

int main() {
  
  int variableInt = 77;
  char variableChar = 'b';
  double variableDouble = 4.4325;


  int favNum = 7;

  // College gpa
  double gpa = 3.5;

  // My first name initial
  const char NAME_STARTING_LETTER = 'S';

  printf("Hello my favorite number is %i", favNum);
  printf("\nMy current gpa is %f, in my computer science program.", gpa);
  printf("\nMy name starts with the letter %c.\n", NAME_STARTING_LETTER);

  // Output logic
  printf("display an int here: %d\n", variableInt);
  printf("display a char here: %c\n", variableChar);
  printf("display a double with 2 decimal places here: %.2f\n", variableDouble);

  char intConversion;
  intConversion = (char) variableInt;

  printf("casting the variable integer of %i to a character: %c", variableInt, intConversion);

}
