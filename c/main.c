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
// word contain string of characters will be converted into lowercase. TODO: How to handle differenrt sizes of words 
  void lowercase (char word [20], char * wordContainer){ 
    int i;
    char lowercaseWord [20] = ""; 
    for(i = 0; i < strlen(word); i ++){
      lowercaseWord [i] = tolower(word[i]);
    }
    strcpy(wordContainer, lowercaseWord);
  }
struct player {
  char playername[20];
};

int main(void) {

  printf("Welcome to Murder Mystery!\n There has been multiple deaths reported in the Town of Saint Everking's this past week.\n Your Job is to discover the cause of these deaths.\n Can you solve this MYSTERY?\n\n");
  printf("Yes, I'm ready (type: play)\n");

  bool playOrQuit = true;
  while (playOrQuit){ 

    char playerInput [10];
    fscanf(stdin, "%s", playerInput);

    char confirmation [10];
    lowercase(playerInput, confirmation);
    // printf("%s", confirmation);

    char verbMsg [60] = "That is a verb I do not reconginze. Please Try Again\n";

    if (strcmp(confirmation, "play") == 0) {
      break;
    } else if(strcmp(confirmation, "play") == 0) {
      exit(0);
    } else {
      printf("%s", verbMsg);
    }
  }  
  printf("\nWelcome to Saint Everking's, \n\nThe villagers here have a curfew because the town is dangerous at a certain time in the night. You as a detective will solve a murder that occurred on Friday the 13th. Are you ready for this Murder Mystery challenge? \n");

  // char consent[3];
  // char positive[] = "yes";
 
  // fscanf(stdin, "%s", consent);
  // char c [20];
  // lowercase(consent, c);
  // printf("You've selected %s %s \n", consent, c);

  // struct player inspector; 
  
  // if(strcmp(c, positive) == 0) {
  //   printf("You are one of the many brave people to take on this challenge. Please solve this case. It is in your best interest. Do it for the sake of your honor. \n What is your name, inspector?\n"); 
  //   fscanf(stdin, "%s", inspector.playername);

  //  } else if(strcmp(c, positive) != 0) {
  //     printf("Unfortunate, you do not have the courage to take on this challenge. Please try again."); 
  // }
  // printf("%s", inspector.playername);
  // printf(", you have recieved a letter\n");
  //   char action [10];

  //   bool wrongaction = true; 

  //   while (wrongaction){

  //     char action [10];
  //     fscanf(stdin, "%s", action);
  //     char a [20];
  //     lowercase(action, a);
  //     if(strcmp(a, "read") == 0 || strcmp(a, "open") == 0){
        
  //       printf("On Friday the 13th, there has been consecutive murders occuring at night. Our prime suspects are the Chef, the Blacksmith, the Farmer, the Bartender, the Guard and the Banker. Each claim to be innocent although they all have been gone during the same time in the night on the same day the killings occur. Please help us fish out the Murderer.\n");  
  //       wrongaction = false;
  //     }
  //     else{
  //       printf("This is not a verb I recognize. Please try again\n");
        
  //     }

  //    }
  //   printf("Day 1\n");
  //   printf("You're working on the murder case in the Village. Choose choice of transportation\n\n");
  //   printf("Plane or Train\n\n");


  //   bool isChoosingTransport = true;

  //   while(isChoosingTransport){
  //     char transportation [20]; 
  //     fscanf(stdin,"%s", transportation); 
  //     char b [20];
  //     lowercase(transportation, b); 
  //     if(strcmp(b, "plane") == 0) {
  //       printf("Day 2. Since the Plane is faster, you have reached the village in the morning. What would you like to do, investigator?\n");
  //       char discover [20]; 
  //       fscanf(stdin, "%s", discover);
  //       char d [20];
  //       lowercase(discover, d);
  //       if(strcmp(d, "investigate") == 0 || strcmp(d, "search") == 0 || strcmp(d, "explore") ==0) {
  //         printf("Seems like the Barn, the Smithy, and the Bank are currently.\n You can investigate three of six possible suspects right now: The Famrer, The Backsmith, and the Banker.\n Who would you like to suspect first?");
  //         char suspects [20]; 
  //         fscanf(stdin, "%s", suspects);
  //         char e [20];
  //         lowercase(suspects, e); 
  //         if(strcmp(e, "farmer") == 0){

  //         }
  //         if(strcmp(e, "balcksmith") == 0){

  //         }
  //         if(strcmp(e, "banker") == 0){

  //         }
  //       }
          
  //     } // Plane's if
  //     if(strcmp(b, "train") == 0) {printf("Day 2. Since the train is the slower route, you have reached the Village during the night time. What would you like to do, investigator?\n");}
  //      break; 
  //   }
      
      

    // if player chooses Plane, arrive at Day 2 in the morning time. Could only investigate the Farmer, Blacksmith and Banker. Perk of day time: After investigating available suspects ONLY in day 2, citizen approaches with valuable information hinting the real killer.
    // if player choose train, arrive at Day 2 in the night time. Could only investigate the Chef, bartender & guard. Perk of Night: After investigating available suspects ONLY ON DAY 2, there is an incident/ clue hinting the real killer. Incident- Player Coincidentally sees Bartender mistreating wife hinting he is killer.
  return 0;
}

// TODO: restructure our code in order to have one while loop which breaks or doesn't break "Does not recognize" or continues with the action of the user input

