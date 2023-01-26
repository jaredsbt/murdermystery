#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

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
  printf("\nWelcome to Saint Everking's, \n\nThe mayor enforced a 10pm curfew in response to the recent murder after sun set. Police and investigators have not been able to find the criminal.\n The citizens are terrified... they need to feel safe.\n\n You, the country's infamous detective, are asked to solve this mystery. What would you like to be recognized as?");

  struct player inspector; 
  return 0;
}



