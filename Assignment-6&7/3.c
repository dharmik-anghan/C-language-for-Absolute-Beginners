// C Program to Find First and Last Digit of a Number
#include <stdio.h>
int main(){
    int num, firstDigit, lastDigit;
    
    // Asking for input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Finding last digit of a number
    lastDigit = num % 10;
    
    // Finding first digit of a number
    firstDigit = num;
    while (firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }
    
    // Displaying output
    printf("First digit of the entered number is: %d \n", firstDigit);
    printf("Last digit of the entered number is: %d", lastDigit);
    
    return 0;
}
