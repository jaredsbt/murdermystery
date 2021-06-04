#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct player {
  char playername[20];
};

int main(void) {

  bool isOther = true;


  while (isOther){ // can be set to true and then break whenever 
    printf("Type play to play\n");
    printf("Type exit to exit\n");

    // struct player inspector;
    char confirmation [10];  
    fscanf(stdin, "%s", confirmation);

    if (strcmp(confirmation, "exit") == 0){ // true
      exit(0); // quitting our program
    } 
    printf("%s", confirmation);
    if(strcmp(confirmation, "play") == 0) { //not play

      isOther = false; // can use this or break;

    } 
    
  } // while


  printf("Welcome to the town of X, \n\nThe villagers here have a curfew because the town is dangerous at a certain time in the night. You as a detective will solve a murder that occurred on Friday the 13th. Are you ready for this Murder Mystery challenge? \n");

  // 1 how to take in a string as input instead of just a char
  // seg faults -- memory issue?

  // cascading errors -- when you have multiple errors, fix the top/first one and go in order from top to bottom. It might remove following errors 

  char consent[3];
  char positive[] = "yes";
  // char negative_answer[2] = "no";
  fscanf(stdin, "%s", consent);
  printf("You've selected %s\n", consent);

  int result = strcmp(consent, positive);
  struct player inspector; 

  if(strcmp(consent, positive) == 0) {
    printf("You are one of the many brave people to take on this challenge. Please solve this case. It is in your best interest. Do it for the sake of your honor. \n What is your name, inspector?"); 

    

    fscanf(stdin, "%s", inspector.playername);
    printf("%s",inspector.playername);

   } else if(strcmp(consent, positive) != 0) {
      printf("Unfortunate, you do not have the courage to take on this challenge. Please try again."); 
    }
    
    printf("%s", inspector.playername);
    printf(", You have recieved a letter");
    char action [10];
    {
     bool wrongaction = true; 

    while (wrongaction){
      
      char action [10];
      fscanf(stdin, "%s", action);
      
      

      printf("%s", action);
      if(strcmp(action, "open") == 0){
        printf("%s", action);
        if(strcmp(action, "read") == 0)
        if(strcmp(action, inspector.playername) == 0)
        printf("%s", inspector.playername);
      

        wrongaction = false;
      
      }

      printf("This is not a verb I recognize. Please try again");
    }

      printf("On Friday the 13th, there has been consecutive murders occuring at night. Our prime suspects are the Chef, the Blacksmith, the Farmer, the Bartender and the Banker. Each claim to be innocent although they all have been gone during the same time in the night on the same day the killings occur. Please help us fish out the Murderer.");


  return 0;
  
}
}
