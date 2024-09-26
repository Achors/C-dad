#include <stdio.h>
#include "functions.h"



int main(void){
    int count = 0;
    float max_num = 0, second_high = 0, num_repeated = 0;


    printf("Enter a random number.");
    float random_num = read_int();

    while (random_num != 0) {
        count++;        

        if (random_num > max_num){
            second_high = max_num;
            max_num = random_num;
            num_repeated++;
            
        } else if (random_num > second_high && random_num != max_num){
            random_num = second_high;
            num_repeated++;

        } 
        printf("Enter a random number.");
        random_num = read_int();
             
    }
    

    if (count < 2 ){
            printf("Not enough numbers entered. \n");
        }else if (num_repeated < 2){
            printf("Use different numbers. \n");
            
        } else {
            printf("You entered %d numbers and %.2f is the second highest. \n", count, second_high); 

        }
       
    
    return 0;
}