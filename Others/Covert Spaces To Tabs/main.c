#include <stdio.h>
#define TABSTOP 4
int main(){
    int c , pos = 0 , spaces = 0;

    while((c = getchar()) != EOF){
        if( c == ' '){
            spaces++;
            pos++;
        }else{
            while( spaces > 0){
                int next_tab = TABSTOP - (pos - spaces) % TABSTOP;
                if(spaces >= next_tab){
                    putchar('\t');
                    spaces -= next_tab;
                    pos += next_tab - 1;
                }else{
                    putchar(' ');
                    spaces--;
                }
            }
            putchar(c);
            if( c == '\n'){
                pos = 0;
                spaces = 0;
            }else{
                pos++;
            }
        }
    }
    return 0;
}