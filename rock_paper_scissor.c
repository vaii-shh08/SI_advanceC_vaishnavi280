#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int user , computer;
    srand(time(NULL)); //used for random choices
    
    printf("** ROCK PAPER SCISSORS **");
    printf("\n1. Rock ");
    printf("\n2. Paper");
    printf("\n3. Scissor");
    printf("\nEnter your choice (1-3) :");
    scanf("%d" ,&user);
    if (user<1 || user>3){
        printf("Case Invalid");
        exit(0);
    }
    computer = rand()%3 +1;
    printf("\nYour Choice : ");
    if(user == 1){
        printf("Rock");
    }
    else if (user == 2){
        printf("Paper");
    }
    else {
        printf("Scissors");
    }
    printf("\nComputer's choice : ");
    if(computer == 1){
        printf("Rock");
    }
    else if (computer == 2){
        printf("Paper");
    }
    else {
        printf("Scissors");
    }
    printf("\n");
    if(user == computer){
        printf("Match Draws!");
    }
    else if ((user ==1 && computer==3) || (user == 2 && computer == 1) || (user == 3 && computer == 2))
    {
        printf("You win!");
    }
    else {
        printf("Computer Wins!");
    }
    return 0;
}