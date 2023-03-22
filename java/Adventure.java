import java.util.Scanner;

// class Player {
//     public String name;
//     public Player(String name) { this.name = name; }
// }

public class Adventure {

    public static void main(String[] args) {

        
        System.out.println("\nWelcome to Murder Mystery!\n\n There has been multiple deaths reported in the Town of Saint Everking's this past week.\n Your Job is to discover the cause of these deaths.\n\n Can you solve this MYSTERY?\n\n");

        System.out.println("Yes, I'm ready (type: play)\n");

        Scanner input = new Scanner(System.in);

        boolean startMenu = true;

        while ( startMenu ) {
            String userInput = input.nextLine();
            // System.out.println("User confirmation is: " + userInput);

            if ( userInput.compareToIgnoreCase("exit") == 0 || userInput.compareToIgnoreCase("no") == 0 || 
                userInput.compareToIgnoreCase("q") == 0 || userInput.compareToIgnoreCase("quit") == 0 ) { System.exit(0); }

            else if (userInput.compareToIgnoreCase("play") == 0) { break; }

            else { System.out.println("That is a verb I do not recognize"); continue; }
        }

        System.out.println("\nWelcome to Saint Everking's, \n\nThe mayor enforced a 10pm curfew in response to the recent murder after sun set. Police and investigators have not been able to find the criminal.\n\n You, the country's infamous detective, are the Town's only hope.\n");
        
        Player user = new Player("Kida");

        boolean invalidName = true;

        while (invalidName) {
            System.out.println("\nWhat would you like to be called?");
            String nameInput = input.nextLine();
            user.name = nameInput;
            
            if ( nameInput.length() > 20) { System.out.println("Character too long"); }
            if ( nameInput.length() == 0) { System.out.println("Please input name!"); }

            if ( nameInput.matches(".*[a-zA-Z]+.*") == false ) { System.out.println("Name need letters"); }

            else { 
                boolean Name = true;
                while (Name) {
                    System.out.println(" Is this the name you want to keep: " + nameInput + " ?\n(Yes or no)");
                        String correctName = input.nextLine();

                        if ( correctName.compareToIgnoreCase("yes") == 0 ) { 
                            // Player user = new Player(nameInput);
                            invalidName = false; 
                            break;
                        }
                        else if ( correctName.compareToIgnoreCase("no") == 0 ) { Name = false; }
                        else { System.out.println("That is a very I do not recognize"); }
                }  
            }
        }

        System.out.println("\nHello " + user.name + ",\n");
        System.out.println("You have received a letter...");

        boolean letterInteraction = true;
        int hintTrigger = 0;

        while (letterInteraction) {
            String interaction = input.nextLine();

            if ( hintTrigger >= 3 ) { System.out.println("\nHint: What do you normally do with letters")}

            if ( interaction.compareToIgnoreCase("open") == 0 || interaction.compareToIgnoreCase("read") == 0 ||
                 interaction.compareToIgnoreCase("continue") == 0 || interaction.compareToIgnoreCase("go") == 0 || 
                 interaction.compareToIgnoreCase("forward") == 0 || interaction.compareToIgnoreCase("interact") == 0 ) { break; }

            else { System.out.println("That is a verb I do not recognize"); hintTrigger += 1; }
        }


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