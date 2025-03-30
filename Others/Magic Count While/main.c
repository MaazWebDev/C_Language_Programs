#include <stdio.h>

#define MAXWORDLENGTH 20
#define MAXWORDS 25

int main(void) {
    int word_index, character, column, word_count, word_length;
    int word_lengths[MAXWORDS];

    for (word_index = 0; word_index < MAXWORDS; ++word_index) {
        word_lengths[word_index] = 0;
    }

    word_length = 0;
    word_count = 0;

    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\n' || character == '\t') {
            if (word_length > 0) {
                if (word_count < MAXWORDS) {
                    word_lengths[word_count] = word_length;
                    ++word_count;
                }
                word_length = 0;
            }
        } else {
            ++word_length;
        }
    }

    if (word_length > 0) {
        if (word_count < MAXWORDS) {
            word_lengths[word_count] = word_length;
            ++word_count;
        }
    }

    for (word_index = MAXWORDLENGTH; word_index >= 1; --word_index) {
        for (column = 0; column < word_count; ++column) {
            if (word_index <= word_lengths[column]) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
