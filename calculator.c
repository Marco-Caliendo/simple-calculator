#include <stdio.h>

int addition(int a, int b){
    return (a + b);
}

int subtraction(int a, int b){
    return (a - b);
}

int mult(int a, int b){
    return (a * b);
}

int div(int a, int b){
    if (b == 0){
        printf("Cannot divide by zero");
        return 0;
    } 
    else 
        return (a / b);
}

int main(){
    return 0;
}