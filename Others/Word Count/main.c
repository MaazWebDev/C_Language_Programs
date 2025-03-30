#include <stdio.h>

int main(){
    int c , count = 0;
    while((c = getchar()) != '\n' ){
        if(c == ' '){
            count++;
        }
    }
    printf("%d\n" , count + 1);
    return 0;
}