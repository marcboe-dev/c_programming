// for testing: input you give should include '!' and '~' chars (first and last humanly readable letters)

#include <stdio.h>
#include <string.h>

#define COUNT 256

// prints out all humanly readable letters from array that you hand over
void printsOutAllCharactersInArray(int *counter_array) {
    for (int i = 20; i<127; i++) {
        if (counter_array[i] > 0) printf("%c -> %d\n", i, counter_array[i]);
    }
}

int main() {
    int char_counts[COUNT]; //memory-areay pointed to by "count"
    memset(char_counts, 0, COUNT*sizeof(char_counts[0]));

    int c;
    while ( (c = getc(stdin)) != EOF ) {
        char_counts[c] += 1;
    }

    // manually this would look like ...
    // printf("a->%d\n", char_counts[97]);
    // printf("b->%d\n", char_counts[98]);
    printsOutAllCharactersInArray(char_counts);
}


