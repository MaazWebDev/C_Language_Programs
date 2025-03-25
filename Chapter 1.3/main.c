#include <stdio.h>

int main(void){
    int i = 0;
    char *str = "Hello Maaz !\n";

    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
    
    return 0;

    // Output: Hello Maaz!

}