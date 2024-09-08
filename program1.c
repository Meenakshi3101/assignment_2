/*  Assignment No.2 (if else)
Write a program to accept Two numbers and display division of two numbers.
Check for divide by 7 zero error.
If divider is zero then display appropriate error message. 
 */


#include<stdio.h>

int main() {
    int dividend, divisor, quotient;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);


    if (divisor == 0) {
        printf("Error\n");
    } else {
        quotient = dividend / divisor;
        printf("The quotient is %d\n", quotient);
    }

    
}