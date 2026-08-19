public class Magic {
	public static void main(String[] args) {
/*

    int myNumber = 10; // original number

    int stepOne = myNumber * myNumber;

    int stepTwo = stepOne + myNumber;

    int stepThree = stepTwo / myNumber;

    int stepFour = stepThree + 17;

    int stepFive = stepFour - myNumber;

    int stepSix = stepFive / 6;

    System.out.println(stepSix);

    */

    // Step 11: Optional challenge: Recreating project with just two variables: myNumber and magicNumber

    int myNumber = 4;

    // step 1
    int magicNumber = myNumber * myNumber;

    // step 2
    magicNumber += myNumber;

    // step 3
    magicNumber /= myNumber;

    // step 4
    magicNumber += 17;

    // step 5
    magicNumber -= myNumber;

    // step 6
    magicNumber /= 6;

    System.out.println(magicNumber);

		

	}
}
