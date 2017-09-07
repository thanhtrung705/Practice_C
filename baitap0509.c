#include <stdio.h>
#include <stdbool.h>
#include<ctype.h>

float divi(int a, int b);
int add (int a,int b);
int minus (int a,int b);
int multi (int a,int b);
int main() {
    int a, b;
    char option;
    while (true) {
        printf("1.Add 2 number\n");
        printf("2.Minus 2 number\n");
        printf("3.Divide 2 number\n");
        printf("4.Multipli 2 number\n");
        printf("5.Exit\n");
        printf("________________________\n");
        printf("Enter a number: \n");
        scanf("%c", &option);
            switch (option) {
                case '1':
                    printf("Plus 2 number\n");
                    printf("Please enter a=");
                    scanf("%d", &a);
                    printf("Please enter b=");
                    scanf("%d", &b);
                    printf("Sum is %d\n", add(a, b));
                    break;
                case '2':
                    printf("Minus 2 number\n");
                    printf("Please enter a=");
                    scanf("%d", &a);
                    printf("Please enter b=");
                    scanf("%d", &b);
                    printf("Difference is %d\n", minus(a, b));
                    break;
                case '3':
                    printf("Divide 2 number\n");
                    printf("Please enter a=");
                    scanf("%d", &a);
                    do {
                        printf("Please enter b=");
                        scanf("%d", &b);
                        if (b == 0)
                            printf("b cannot receive value '0'\nInput a valid number\n");
                    }while(b==0);
                        printf("Quotient is %f\n", divi(a,b));
                    break;
                case '4':
                    printf("Multiply 2 number\n");
                    printf("Please enter a=");
                    scanf("%d", &a);
                    printf("Please enter b=");
                    scanf("%d", &b);
                    printf("Product is %d\n", multi(a, b));
                    break;
                case '5':
                    break;
                default:
                    printf("Please enter number again!\n");
                    break;
            }
        if (option == '5')
            break;
        }
    }
//Các hàm tính toán
int add (int a,int b){
    return a+b;
}
int minus(int a, int b){
    return a-b;
}
float divi(int a, int b){
    return (float) a/b;
}
int multi(int a, int b){
    return a*b;
}