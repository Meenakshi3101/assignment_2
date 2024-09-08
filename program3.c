//Write a problem to accept number and check whether the number is +ve , -ve and zero

#include<stdio.h>

int main(){

    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number > 0 ){
        printf("Number is positive number");

    }else if(number < 0){
        printf("Number is negative number");

    }else{
        printf("number is zero");
    }

}