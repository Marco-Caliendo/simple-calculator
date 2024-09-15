#include <stdio.h>

//Takes two numbers and adds them
int addition(int a, int b){
    printf("You chose addition");
    return (a + b);
}

//Takes two numbers and subracts the second from the first
int subtraction(int a, int b){
    printf("You chose subtraction");
    return (a - b);
}

//Takes two numbers and multiplies them
int mult(int a, int b){
    printf("You chose multiplication");
    return (a * b);
}

//Takes two numbers and divides the second from the first, checks for divied by zero
int div(int a, int b){
    printf("You chose division");
    if (b == 0){
        printf("\nCannot divide by zero");
        return 0;
    } 
    else 
        return (a / b);
}

int main(){
    int a, b, op, result;
    //Request operation input
    printf("Choose Operation:");
    printf("\n1 : addition \n2 : subtraction \n3 : multiplication \n4 : division \n");
    scanf("%d", &op);
    //Request two numbers
    printf("Choose two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    //Case statement for function selection
    switch (op){
        case 1:
            result = addition(a,b);
            break;
        case 2:
            result = subtraction(a,b);
            break;
        case 3:
            result = mult(a,b);
            break;
        case 4:
            result = div(a,b);
            break;
        default:
            printf("Wrong Input");
            break;
    }
    //Print result
    printf("The result is: %d", result);
    return 0;
}