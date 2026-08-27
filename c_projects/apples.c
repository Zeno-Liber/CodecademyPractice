#include <stdio.h>

int main() {

// Variable initiation block, to represent item attributes  
int appleQuantity;
double applePrice; // double for accuracy
float appleReview; // float to save memory
int appleReviewDisplay;

// Constants block
const char APPLE_LOCATION = 'F'; // Unchanging lettered aisles

// Variable declaration block
applePrice = 1.49;
appleQuantity = 23;
appleReview = 82.5;

// Casting block
appleReviewDisplay = (int) appleReview;

// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, APPLE_LOCATION, appleReviewDisplay);

}
