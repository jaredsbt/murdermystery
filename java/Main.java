import java.util.Scanner;



//Dog dog = new Dog("Brady", 3, "Terrier", "Brown");

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World");

        boolean isOther = true;
        while (isOther) {
            System.out.println("Type play to play");
            System.out.println("Type exit to exit");

            try (Scanner confirmation = new Scanner(System.in)) {
                System.out.println("enter input");

                String userInput = confirmation.nextLine();
                System.out.println("User confirmation is: " + userInput);

                int characterDifference = "exit".compareToIgnoreCase(userInput);
                if (characterDifference == 0) { // they're the same strings
                    System.exit(0);
                }
                int characterDifference2 = "play".compareToIgnoreCase(userInput);
                if (characterDifference2 == 0) {
                    break;
                }
            }

        }

        DaySuspects farmer = new DaySuspects("John", "Farmer");             // definition of the object Farmer
         farmer.interact(); 
         System.out.println(farmer.givenName);
        }
}

// To create java executable, run javac main.java
// To run exe. , type java Main

// Class is a category. Objects of a category can be made by using constructors. 
// Constructors are functions that calls the class and sets the class variables equal to variabels that you pass. 