int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char APPLE_LOCATION = 'F';
 int dayOfWeek = 3;
 int totalReviewScore = 823;
 int totalReviewCustomers = 9;

 appleQuantity = 23;
 appleReview = 82.5;

 // New customer review updates
 totalReviewScore += 52;
 totalReviewCustomers += 1;

 // Calculated review score
 appleReview = totalReviewScore / totalReviewCustomers;
 appleReviewDisplay = (int) appleReview;

 // Incrementing the week day
 dayOfWeek += 1;
 printf("Day in this week: %i\n", dayOfWeek);



 if(appleQuantity < 10 || dayOfWeek == 4)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, APPLE_LOCATION, appleReviewDisplay);

}
