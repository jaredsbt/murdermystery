import java.util.Scanner;
class main {
    public static void main(String[] args) {
        System.out.println("Welcome to Murder Mystery!\n\n There has been multiple deaths reported in the Town of Saint Everking's this past week.\n Your Job is to discover the cause of these deaths.\n Can you solve this MYSTERY?\n\n");
        System.out.println("Yes, I'm ready (type: play)\n");

        boolean isOther = true;
        while (isOther) {
            try (Scanner confirmation = new Scanner(System.in)) {
                String userInput = confirmation.nextLine();
                System.out.println("User confirmation is: " + userInput);

                if (userInput.compareToIgnoreCase("exit") == 0 || userInput.compareToIgnoreCase("no") == 0) { System.exit(0); }

                else if (userInput.compareToIgnoreCase("play") == 0) { break; }

                else { System.out.println("That is a verb I do not recognize"); }
            }
        }

        System.out.println("\nWelcome to Saint Everking's, \n\nThe mayor enforced a 10pm curfew in response to the recent murder after sun set. Police and investigators have not been able to find the criminal.\n\n You, the country's infamous detective, are the Town's only hope. What would you like to be referred as?\n");
    }
}

        // DaySuspects farmer = new DaySuspects("John", "Farmer");             // definition of the object Farmer
        //  farmer.interact(); 
        //  System.out.println(farmer.givenName);
        // }

// To create java executable, run javac main.java
// To run exe. , type java Main

// Class is a category. Objects of a category can be made by using constructors. 
// Constructors are functions that calls the class and sets the class variables equal to variabels that you pass. 