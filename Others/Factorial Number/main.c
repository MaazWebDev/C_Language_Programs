#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a Number : ");
    scanf("%d", &num);

    if(num < 0){
        printf("Factorial of a negative number doesn't exsist. \n");
    }else{
        for(int i = 1 ; i <= num ; i++){
            factorial = factorial * i ;
        }

        printf("Factorial of %d is %lld\n", num , factorial);
    }
}