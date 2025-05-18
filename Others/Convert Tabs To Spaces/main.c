#include <stdio.h>

#define TABSTOP 4

int main(){
    int c , pos = 0;
    int spaces_needed;

    while((c = getchar()) != EOF){
        if ( c == '\t'){
            spaces_needed = TABSTOP - (pos % TABSTOP);
             while(spaces_needed > 0){
                putchar(' ');
                ++pos;
                --spaces_needed;
             }
        }else if( c == '\n'){
            putchar(c);
            pos = 0;
        }else{
            putchar(c);
            ++pos;
        }
    }
    return 0;
}