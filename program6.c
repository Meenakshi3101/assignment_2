//Write a program to accept a 5 digit number and check whether it is a numeric palindrome.
// (If reversed number is same as entered number it is called palindrome).

#include<stdio.h>

int main(){

    int number, originalvalue;
    int reversed = 0;
    
    printf("Enter a number: ");
    scanf("%d",&number);

     originalvalue = number;
     reversed = (number % 10) * 10000 + ((number / 10) % 10) * 1000;

     
     if(originalvalue = reversed){
         printf("%d is a palindrome\n",originalvalue);
     }else{
         printf("%d is not a palindrome\n",originalvalue);

     }
}