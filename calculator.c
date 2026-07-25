#include<stdio.h>
#include<math.h>

int main() {
    int a,b,option;
    printf("Enter First No: ");
    scanf("%d", &a);

    printf("Enter Second No: ");
    scanf("%d", &b);

    printf("Enter from following options \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n"); // First Number Should be bigger than second
    scanf("%d", &option);

    if (option==1) {
        printf("Addition Result: %d \n", a+b);
    }

    if (option==2) {
        printf("Substraction Result: %d \n", a-b);
    }

    if (option==3) {
        printf("Multiplication Result: %d \n", a*b);
    }

    if (option==4) {
        printf("Division Result: %d \n", a/b);
    }


    return 0;
}