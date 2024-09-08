//Write a program to find maximum of two numbers using
//a). if else
//b).conditional operator

#include<stdio.h>

int main(){

    int num1,num2;

    printf("Enter the num1: ");
    scanf("%d", &num1);

    printf("Enter the num2: ");
    scanf("%d", &num2);

    if(num1 > num2 ){
        printf("Number 1 is maximum");

    }else{
        printf("Number 2 is maximum");
    }

}