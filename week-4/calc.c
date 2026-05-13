#include <stdio.h>

void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

int main(void){
    printf("Calculator to calculate \n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d", &user_response);

    if (user_response ==1){
        addition();
    }else if (user_response ==2){
        subtraction();
    }else if (user_response ==3){
        multiplication();
    }else if (user_response ==4){
        division();
    }else{printf("invalid option \n");
}
}
void addition(void){
float a;
float b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
float Result = a + b;
printf("Result = %f\n", Result);
}
void subtraction(void){
float a;
float b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
float Result = a - b;
printf("Result = %f\n", Result);
}
void multiplication(void){
float a;
float b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
float Result = a * b;
printf("Result = %f\n", Result);
}
void division(void){
float a;
float b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
if (b = 0);
scanf("%f", &b);
printf("Error\n");
float Result = a / b;
printf("Result = %f\n", Result);
}

