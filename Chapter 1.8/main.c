#include <stdio.h>

int main(){
    int values[] = { 5, 10 , 15 , 7 , 12 };
    int n = sizeof(values) / sizeof(values[0]);
    char magic[] = "*******************";

    printf("\n Magic Representation \n");
    printf("----------------------\n");

    for(int i = 0 ; i < n ; i++){
        printf("Magic %d: %.*s(%d)\n" , i+1 , values[i] , magic , values[i]);
    }
    return 0;
}