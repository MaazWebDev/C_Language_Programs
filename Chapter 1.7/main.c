#include <stdio.h>

int main(){

    long nc;

    nc = 0;

    while(getchar() != EOF){ 
        ++nc;
    }
        printf("Total number of characters: %ld\n", nc);
        return 0;

}