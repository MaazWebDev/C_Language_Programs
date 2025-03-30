#include <stdio.h>

int main(){
    int n , first = 0 , second = 1 , nextTerm ;

    printf("Enter a number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");
    printf("%d %d ", first, second);

    for ( int i = 1 ; i <= n ; i++){
        nextTerm = first + second;
        printf("%d" , nextTerm);
        first = second ;
        second = nextTerm ;
    }
}