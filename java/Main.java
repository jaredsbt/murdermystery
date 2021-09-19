import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World");

        boolean isOther = true;
        while (isOther) {
            System.out.println("Type play to play");
            System.out.println("Type exit to exit");

            Scanner confirmation = new Scanner(System.in);
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
}

// To create java executable, run javac main.java
// To run exe. , type java Main