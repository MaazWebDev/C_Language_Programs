#include <stdio.h>

#define MAXWORDLENGTH 20
#define MAXWORDS 25

int main(void){
    int word_index , word_count , word_length , character , i;
    int word_lengths[MAXWORDS];

    for( word_index = 0 ; word_index < MAXWORDS ; ++word_index){
        word_lengths[word_index] = 0;
    }

    word_count = 0;
    word_length = 0;

    while((character = getchar()) != EOF){
    if( character == ' ' || character == '\n' || character == '\t'){
      if( word_length > 0){
        if( word_count < MAXWORDS){
            word_lengths[word_count] = word_length;
            ++word_count;
        }
        word_length = 0;
      }
    }else{
        ++word_length;
    }
  }
  if( word_length > 0 && word_count < MAXWORDS){
    word_lengths[word_count] = word_length;
    ++word_count;
  }

  int rows = MAXWORDLENGTH;
  int cols = word_count;
  int total_position = rows * (cols +1);

  for(i = 0 ; i < total_position ; i++){
    if(( i + 1 ) % (cols + 1) == 0){
        putchar('\n');
    }else{
        int col = i % (cols + 1);
        int row = rows - 1 - ( i / (cols + 1));

        if(word_lengths[col] > row){
            putchar('*');
        }else{
            putchar(' ');
        }
    }
  }
  return 0;
}