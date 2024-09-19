#include <stdio.h>
#include "functions.h"



int main(void) {
    printf("Enter a three-digit number:");
    int three_num = read_int();
    int reverse_num = 0;

     if (three_num < 100 || three_num > 999) {
        printf("Please the number %d, is not a three-digit number.\n", three_num);
        return 1;  
    }

    
    int digit1 = three_num % 10;      
    int digit2 = (three_num / 10) % 10; 
    int digit3 = three_num / 100;     

    reverse_num = (digit1 * 100) + (digit2 * 10) + digit3;

   
    printf("The reversed number is: %03d\n", reverse_num);


    return 0;
}