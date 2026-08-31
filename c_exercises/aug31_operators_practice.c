#include <stdio.h>

int main() {
  
  int x = 10;
  int y = 101;
  int remainder = y % x;
  printf("The remainder is: %i\n", remainder);

  if (remainder <= x && remainder != y) {
    printf("The remainder is smaller than both x and y variables.\n");
  } else {
    printf("The remainder is greater than both x and y variables.\n");
  }

  double toBeCasted = 2.5;
  int newInt = (int) toBeCasted;

  printf("%i\n", newInt);

  if (newInt == remainder || remainder == 100) {
    printf("The new integer is either equal to the remainder or the remainder is equal to 100\n");
  } else {
    newInt += 999;
    printf("The new integer is: %i\n", newInt);
  }


}
