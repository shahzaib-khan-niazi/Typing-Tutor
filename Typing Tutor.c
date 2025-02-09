#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>


void EasyMode() {
    clock_t start, end;
    double cpu_time_used;
    printf("enter the following sentence\n");
    printf("The quick brown fox jumps over the lazy dog.! \n");
    char givenSentence[] = "The quick brown fox jumps over the lazy dog.!";
    char userSentence[100];

    printf("Enter  sentence: ");

    
    start = clock();

    fgets(userSentence, sizeof(userSentence), stdin);

    
    userSentence[strcspn(userSentence, "\n")] = '\0';

    
    end = clock();

    if (strcmp(givenSentence, userSentence) == 0) {
        printf("The sentences are the same.\n");
    } else {
        printf("The sentences are different.\n");
    }

   
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to enter the sentence: %f seconds\n", cpu_time_used);
    
}
void mediummode() {
    clock_t start, end;
    double cpu_time_used;

    printf("enter the following sentence\n");
    printf("Enhance your typIng skills as you nAvigate through a virTual world, overComing challenges and improving accuracy in our engaging typing tutor game.\n");
    
    char givenSentence[] = "Enhance your typIng skills as you nAvigate through a virTual world, overComing challenges and improving accuracy in our engaging typing tutor game.";
    char userSentence[1000];

    printf("Enter sentence: ");

   
    start = clock();

  
    fgets(userSentence, sizeof(userSentence), stdin);

   
    size_t len = strlen(userSentence);
    if (len > 0 && userSentence[len - 1] == '\n') {
        userSentence[len - 1] = '\0';
    }

   
    end = clock();

    if (strcmp(givenSentence, userSentence) == 0) {
        printf("The sentences are the same.\n");
    } else {
        printf("The sentences are different.\n");
    }

   
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to enter the sentence: %f seconds\n", cpu_time_used);
}
int main() {
    int choice;

    printf("\n\t\t\tWELCOME TO TYPING TUTOR\n");
    printf("\n\n\t\t\tGame Developed by  Shahzaib  \n\n\n\t\t\t");

    while (1) {
        printf("                   |<><><>|      |---------Main Menu---------|       |<><><>|\n\t\t\t");
        printf("                   |<><><>|      |1.  EASY Mode              |       |<><><>|\n\t\t\t");
        printf("                   |<><><>|      |2.  MEDIUM Mode            |       |<><><>|\n\t\t\t");
        printf("                   |<><><>|      |3.  Exit To Screen         |       |<><><>|\n\t\t\t");
        printf(" ENTER YOUR CHOICE :  ");

        scanf("%d", &choice);
        fflush(stdin); 

        system("cls");

        printf("\n\t\t\t              TYPING TUTOR\n");

        switch (choice) {
            case 1:
                EasyMode();
                break;

            case 2:
                mediummode();
                break;


            case 3:
            	printf(" THE GAME HAS BEEN ENDED");
                exit(0);

            default:
                printf("\n Invalid Choice \n");
                break;
        }
    }
} 
