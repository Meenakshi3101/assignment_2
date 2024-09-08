//Input a number and display whether the number is even or odd

#include<stdio.h>

int main(){

int number;

printf("Enter a number: ");
scanf("%d",&number);

if(number % 2 ==0 ){

    printf("Number is even");

}else{
    printf("The number is odd");
}

}