#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>



/*

1 how to take in a string as input instead of just a char
seg faults -- memory issue?
cascading errors -- when you have multiple errors, fix the top/first one and go in order from top to bottom. It might remove following errors 
asteriks **
char negative_answer[2] = "no";
while
can use this or break;
not play
quitting our program
struct player inspector;
can be set to true and then break whenever 

*/
  void lowercase (char word [20]){ 
    // word contain string of characters will be converted into lowercase. TODO: How to handle differenrt sizes of words 
    printf("first character in word %c", word[0]); 
    int i;
    size_t bytesOfArray= sizeof(word); 
    size_t bytesOfElement = sizeof(char); 
    size_t count = bytesOfArray/bytesOfElement;
    printf("%d", count);
    printf("Bytes of char %zu\n", bytesOfElement); // 2 or 1
    printf("Bytes of Array %zu\n", bytesOfArray); // 5 or 10 
    for(i = 0; i < count; i ++){
      printf("lowercase letter: %c", tolower(word[i]));
      
    }
    
  }
struct player {
  char playername[20];
};

int main(void) {

  bool isOther = true;
  while (isOther){ 
    printf("Type play to play\n");
    printf("Type exit to exit\n");

    char confirmation [10];  
    fscanf(stdin, "%s", confirmation);
    lowercase(confirmation);
    if (strcmp(confirmation, "exit") == 0) exit(0); 
    if(strcmp(confirmation, "play") == 0) isOther = false; 
  } 
  printf("Welcome to the town of X, \n\nThe villagers here have a curfew because the town is dangerous at a certain time in the night. You as a detective will solve a murder that occurred on Friday the 13th. Are you ready for this Murder Mystery challenge? \n");

  char consent[3];
  char positive[] = "yes";
 
  fscanf(stdin, "%s", consent);
  lowercase(consent);
  printf("You've selected %s\n", consent);

  int result = strcmp(consent, positive);
  struct player inspector; 
  
  if(strcmp(consent, positive) == 0) {
    printf("You are one of the many brave people to take on this challenge. Please solve this case. It is in your best interest. Do it for the sake of your honor. \n What is your name, inspector?\n"); 
    fscanf(stdin, "%s", inspector.playername);

   } else if(strcmp(consent, positive) != 0) {
      printf("Unfortunate, you do not have the courage to take on this challenge. Please try again."); 
  }
  printf("%s", inspector.playername);
  printf(", you have recieved a letter\n");
    char action [10];

    bool wrongaction = true; 

    while (wrongaction){


      // TODO: Create function that converts a string into lowercase. 
      // "Plane" === "plane"
      // "Plane" convert to "plane"
      // "plane" == "plane"
      
      char action [10];
      fscanf(stdin, "%s", action);
      lowercase(action);
      if(strcmp(action, "read") == 0 || strcmp(action, "open") == 0){
        
        printf("On Friday the 13th, there has been consecutive murders occuring at night. Our prime suspects are the Chef, the Blacksmith, the Farmer, the Bartender, the Guard and the Banker. Each claim to be innocent although they all have been gone during the same time in the night on the same day the killings occur. Please help us fish out the Murderer.\n");  
        wrongaction = false;
      }
      else{
        printf("This is not a verb I recognize. Please try again\n");
        
      }

     }
    printf("Day 1\n");
    printf("You're working on the murder case in the Village. Choose choice of transportation\n\n");
    printf("Plane or Train\n\n");


    bool isChoosingTransport = true;

    //while
    // if statement
    /// else if 
    // function 
    // fcanfs , strcmp


    while(isChoosingTransport){
      char transportation [20]; 
      fscanf(stdin,"%s", transportation); 
      lowercase(transportation);
      if(strcmp(transportation, "plane") == 0) {printf("Day 2. Since the Plane is faster, you have reached the village in the morning.\n");}
      if(strcmp(transportation, "train") == 0) {printf("Day 2. Since the train is the slower route, you have reached the Village during the night time.\n");}
       break; 
    }


    // if player chooses Plane, arrive at Day 2 in the morning time. Could only investigate the Farmer, Blacksmith and Banker. Perk of day time: After investigating available suspects ONLY in day 2, citizen approaches with valuable information hinting the real killer.
    // if player choose train, arrive at Day 2 in the night time. Could only investigate the Chef, bartender & guard. Perk of Night: After investigating available suspects ONLY ON DAY 2, there is an incident/ clue hinting the real killer. Incident- Player Coincidentally sees Bartender mistreating wife hinting he is killer.
  return 0;
}



