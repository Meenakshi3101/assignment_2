/*Write a program to find maximum of three numbers using 
 a. if else
 b. conditonal statement */

#include<stdio.h>

int main(){

    int num1,num2,num3;

    printf("Enter the Number1: ");
    scanf("%d", &num1);
    
    printf("Enter the Number2: ");
    scanf("%d", &num2);
    
    printf("Enter the Number3: ");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3){
        printf("Number 1 is maximum");

    }else if(num2>num1 && num2>num3){
        printf("Number 2 is maximum");

    }else{
        printf("Number 3 is maximum");
    }
}

  
