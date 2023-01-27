#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void lowercase (char word [100], char * wordContainer){ 
    int i;
    char lowercaseWord [100] = ""; 
    for(i = 0; i < strlen(word); i ++){
      lowercaseWord [i] = tolower(word[i]);
    }
    strcpy(wordContainer, lowercaseWord);
  }

bool verbs(char playerResponse[100]){
  char yesOrNo [10];
  lowercase(playerResponse, yesOrNo);

  char error [75] = "That is a verb I do not recognize. Please try again";

  if((strcmp(yesOrNo, "yes") == 0) || (strcmp(yesOrNo, "open") == 0) || (strcmp(yesOrNo, "read") == 0) || (strcmp(yesOrNo, "search") == 0)) {
    return false; 
  } else if(strcmp(yesOrNo, "no") == 0){
    return true;
  } else {
    printf("%s", error);
    return true;
  }
}
struct player {
  char playername[100];
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
    } else if((strcmp(confirmation, "exit") == 0) || (strcmp(confirmation, "quit") == 0)) {
      exit(0);
    } else {
      printf("%s", verbMsg);
    }
  }  
  printf("\nWelcome to Saint Everking's, \n\nThe mayor enforced a 10pm curfew in response to the recent murder after sun set. Police and investigators have not been able to find the criminal.\n\n You, the country's infamous detective, are the Town's only hope. What would you like to be referred as?\n");

  struct player detective;

  bool keepName = true;

  while(keepName){
    printf("ENTER NAME\n");

    bool nameLength = true;

    int numOfErrors = -1;

    while(nameLength){
      numOfErrors += 1;
      if(numOfErrors > 0){
        printf("Either name has not been entered or it is too big!\n");
      }
      fscanf(stdin, "%s", detective.playername);

      int sizeOfName = strlen(detective.playername);

      if (sizeOfName == 0){
        return true;
      } else if (sizeOfName > 100){
        return true;
      }
      break;
      }

    char nameMsg [50] = "Is this the name you want to keep: ";
    // char name [100] = detective.playername;
    // strcat(nameMsg, name); 

    printf("%s", nameMsg);
    printf("%s", detective.playername);
    
    char playerResponse [20];
    fscanf(stdin,"%s", playerResponse);

    if(verbs(playerResponse)){
      return true;
    } else if(verbs(playerResponse) == false){
      return false;
    } else{
      return verbs(playerResponse);
    }
  }

  char greeting [10] = "Hello, ";
  // char name [100] = detective.playername;
  // strcat(greeting, name);

  printf("%s", greeting);
  printf("%s", detective.playername);
  printf(". You have received a letter.");

  bool letter = true;

  while(letter){
    break;
  }

  return 0;
}



