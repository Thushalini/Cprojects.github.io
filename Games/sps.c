#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
rock paper scissors
rock vs paper => paper
rock vs scissors => rock
paper vs scissors => scissors
*/

int game(char user , char computer);

int main(){
    int n;
    char you , computer , result;

    //choose a random number every time
    srand(time(NULL));

    //choose random number between 0 to 100
    n = rand() % 100;

    //computer's input
    if (n < 33){
        computer = 'r';
    } else if (n > 33 && n < 66){
        computer = 'p';
    } else {
        computer = 's';
    }

    printf("\t\t\t r for Rock, p for paper, s for scissors \t\t\t\n");

    scanf("%c", &you);

    result = game(you,computer);

    if (result == -1){
        printf("The match is row");
    } else if (result == 1){
        printf("You won!");
    } else if (result == 0){
        printf("sorry you loose!");
    }

    printf("\nYou choose %c and computer choose %c\n\n",you,computer);

    return 0;
}

int game(char user , char computer){
    if (user == computer){
        return -1;
    }
    if (user == 'r' && computer == 'p'){
        return 0;
    } else if (user == 'p' && computer == 'r'){
        return 1;
    }
    if (user == 'r' && computer == 's'){
        return 1;
    }  else if (user == 's' && computer == 'r'){
        return 0;
    }
    if (user == 'p' && computer == 's'){
        return 0;
    }  else if (user == 's' && computer == 'p'){
        return 1;
    }

}
