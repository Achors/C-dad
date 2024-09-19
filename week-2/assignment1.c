#include <stdio.h>      
#include <stdlib.h>    
#include "functions.h" 

char get_computer_choice();
void determine_winner(char user_choice, char computer_choice);

int main(void) {
    printf("Please enter your choice (r = rock, p = paper, s = scissors): ");
    char user_choice = read_char();
    if (user_choice == 'r') {
        printf("You chose rock.\n");
    } else if (user_choice == 'p') {
        printf("You chose paper.\n");
    } else if (user_choice == 's') {
        printf("You chose scissors.\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    char computer_choice = get_computer_choice();
    
    if (computer_choice == 'r') {
        printf("I chose rock.\n");
    } else if (computer_choice == 'p') {
        printf("I chose paper.\n");
    } else {
        printf("I chose scissors.\n");
    }

    determine_winner(user_choice, computer_choice);

    return 0;
}


char get_computer_choice() {
    int random_number = random_int(1, 3); 
    if (random_number == 1) {
        return 'r';
    } else if (random_number == 2){
        return 'p';
    } else if (random_number == 3){
        return 's';
    } else {
        return 'r';
    }
}

void determine_winner(char user_choice, char computer_choice) {
    if (user_choice == computer_choice) {
        printf("It's a draw!\n");
    } else if ((user_choice == 'r' && computer_choice == 's') ||
               (user_choice == 'p' && computer_choice == 'r') ||
               (user_choice == 's' && computer_choice == 'p')) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}
